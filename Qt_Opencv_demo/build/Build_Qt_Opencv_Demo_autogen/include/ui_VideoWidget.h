/********************************************************************************
** Form generated from reading UI file 'VideoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWIDGET_H
#define UI_VIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWidget
{
public:
    QLabel *LabelLeft;
    QLabel *LabelRight;
    QPushButton *CloseButton;
    QPushButton *CannyButton;
    QPushButton *StartButton;

    void setupUi(QWidget *VideoWidget)
    {
        if (VideoWidget->objectName().isEmpty())
            VideoWidget->setObjectName(QStringLiteral("VideoWidget"));
        VideoWidget->resize(1300, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VideoWidget->sizePolicy().hasHeightForWidth());
        VideoWidget->setSizePolicy(sizePolicy);
        VideoWidget->setMinimumSize(QSize(1300, 550));
        VideoWidget->setMaximumSize(QSize(1300, 550));
        LabelLeft = new QLabel(VideoWidget);
        LabelLeft->setObjectName(QStringLiteral("LabelLeft"));
        LabelLeft->setGeometry(QRect(5, 5, 640, 480));
        sizePolicy.setHeightForWidth(LabelLeft->sizePolicy().hasHeightForWidth());
        LabelLeft->setSizePolicy(sizePolicy);
        LabelLeft->setMinimumSize(QSize(640, 480));
        LabelRight = new QLabel(VideoWidget);
        LabelRight->setObjectName(QStringLiteral("LabelRight"));
        LabelRight->setGeometry(QRect(655, 5, 640, 480));
        sizePolicy.setHeightForWidth(LabelRight->sizePolicy().hasHeightForWidth());
        LabelRight->setSizePolicy(sizePolicy);
        LabelRight->setMinimumSize(QSize(640, 480));
        CloseButton = new QPushButton(VideoWidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(1110, 500, 178, 45));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CloseButton->sizePolicy().hasHeightForWidth());
        CloseButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        CloseButton->setFont(font);
        CannyButton = new QPushButton(VideoWidget);
        CannyButton->setObjectName(QStringLiteral("CannyButton"));
        CannyButton->setGeometry(QRect(920, 500, 178, 45));
        sizePolicy1.setHeightForWidth(CannyButton->sizePolicy().hasHeightForWidth());
        CannyButton->setSizePolicy(sizePolicy1);
        CannyButton->setFont(font);
        StartButton = new QPushButton(VideoWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(730, 500, 178, 45));
        sizePolicy1.setHeightForWidth(StartButton->sizePolicy().hasHeightForWidth());
        StartButton->setSizePolicy(sizePolicy1);
        StartButton->setFont(font);

        retranslateUi(VideoWidget);

        QMetaObject::connectSlotsByName(VideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoWidget)
    {
        VideoWidget->setWindowTitle(QApplication::translate("VideoWidget", "Video Demo", Q_NULLPTR));
        LabelLeft->setText(QString());
        LabelRight->setText(QString());
        CloseButton->setText(QApplication::translate("VideoWidget", "Close", Q_NULLPTR));
        CannyButton->setText(QApplication::translate("VideoWidget", "Canny", Q_NULLPTR));
        StartButton->setText(QApplication::translate("VideoWidget", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoWidget: public Ui_VideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWIDGET_H
