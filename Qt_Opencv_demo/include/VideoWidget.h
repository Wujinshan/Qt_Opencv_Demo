#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <qt5/QtWidgets/QWidget>
#include <opencv2/opencv.hpp>
#include <qt5/QtCore/QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class VideoWidget; }
QT_END_NAMESPACE

class VideoWidget : public QWidget
{
    Q_OBJECT

public:
    VideoWidget(QWidget *parent = nullptr);
    ~VideoWidget();

public slots:
    void CloseButtonClicked();
    void StartButtonClicked();
    void CannyButtonClicked();
    void UpdateImage();

private:
    Ui::VideoWidget *ui;
    cv::VideoCapture *VideoCap;
    cv::Mat *srcShowed;
    cv::Mat *srcCannyShowed;
    QTimer *timer;
    bool isCannyOpen = false;
    bool isStart = false;

private:
    void paintEvent(QPaintEvent *event);
};
#endif // VIDEOWIDGET_H
