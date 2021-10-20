#include "VideoWidget.h"
#include "ui_VideoWidget.h"
#include "opencv2/imgproc/types_c.h"
#include <iostream>

VideoWidget::VideoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VideoWidget)
{
    this->ui->setupUi(this);
    this->VideoCap = new cv::VideoCapture;
    this->timer = new QTimer;
    this->srcShowed = new cv::Mat;
    this->srcCannyShowed = new cv::Mat;

    this->connect(this->timer,SIGNAL(timeout()),this,SLOT(UpdateImage()));
    this->connect(this->ui->StartButton,SIGNAL(clicked()),this,SLOT(StartButtonClicked()));
    this->connect(this->ui->CannyButton,SIGNAL(clicked()),this,SLOT(CannyButtonClicked()));
    this->connect(this->ui->CloseButton,SIGNAL(clicked()),this,SLOT(CloseButtonClicked()));
}

VideoWidget::~VideoWidget()
{
    delete this->ui;
    delete this->srcShowed;
    delete this->VideoCap;
    delete this->timer;
    delete this->srcCannyShowed;
}

void VideoWidget::UpdateImage()
{
    if(this->isStart)
    {    
        this->VideoCap->read(*(this->srcShowed));
        if(this->isCannyOpen)
        {
            cv::Canny(*(this->srcShowed), *(this->srcCannyShowed), 50, 150);
        }
        this->update();
    }
}

void VideoWidget::paintEvent(QPaintEvent *)
{
    if(!this->srcShowed->empty())
    {
        cv::Mat rgb;
        cv::cvtColor(*(this->srcShowed), rgb, CV_BGR2RGB);
        QImage img = QImage((const unsigned char *)(rgb.data), rgb.cols, rgb.rows, QImage::Format_RGB888);

        this->ui->LabelLeft->resize(img.size());
        this->ui->LabelLeft->setPixmap(QPixmap::fromImage(img));
        this->ui->LabelLeft->show();
    }
    if(!this->srcCannyShowed->empty())
    {
        cv::Mat rgb;
        cv::cvtColor(*(this->srcCannyShowed), rgb, CV_BGR2RGB);
        QImage img = QImage((const unsigned char *)(rgb.data), rgb.cols, rgb.rows, QImage::Format_RGB888);

        this->ui->LabelRight->resize(img.size());
        this->ui->LabelRight->setPixmap(QPixmap::fromImage(img));
        this->ui->LabelRight->show();
    }
}

void VideoWidget::StartButtonClicked()
{
    if(!this->isStart)
    {
        this->isStart = true;

        this->VideoCap->open(0);
        this->timer->start(20);
    }
}

void VideoWidget::CannyButtonClicked()
{
    if(!this->isCannyOpen && this->isStart)
    {
        this->isCannyOpen = true;
    }
}

void VideoWidget::CloseButtonClicked()
{
    this->close();
}
