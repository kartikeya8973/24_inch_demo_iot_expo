#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stationname.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateRoute);
    timer->start(5000);

    stationName = new stationname();
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(stationName);
    ui->frame->setLayout(layout);

    id = QFontDatabase::addApplicationFont(":/font/fonts/HINDI/NotoSans-Regular.ttf");
    family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont fontSB(family);
    fontSB.setPointSize(35);

    ml = new WidgetMarqueeLabel(this);
    ml->setAlignment(Qt::AlignVCenter);
    ml->setStyleSheet("color: rgb(255, 255, 255);");
    ml->setFont(fontSB);
    ml->setSpeed(6);
//    ml->setText("दिल्ली मेट्रो आपका स्वागत करती है");
    ui->labelLayout_2->addWidget(ml);
    ml->show();
    update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateRoute()
{
    if (updatecnt == 0)
    {
        system ("aplay /home/upboard/demo_audio/welcome.wav &");
        ui->label->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_2->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
        ml->setText("GEOCON मेट्रो आपका स्वागत करती है।");
    }

    else if (updatecnt == 1)
    {
        ui->label_2->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_3->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 2)
    {
        ui->label_3->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_4->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 3)
    {
        system ("aplay /home/upboard/demo_audio/left.wav &");
        ui->label_4->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_5->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
        ml->setText("दरवाजे बाईं ओर खुलेंगे, कृपया ध्यान से नीचे उतरें।");
    }

    else if (updatecnt == 4)
    {
        ui->label_5->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_6->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 5)
    {
        ui->label_6->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_7->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 6)
    {
        system ("aplay /home/upboard/demo_audio/luggage.wav &");
        ui->label_7->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_8->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
        ml->setText("कृपया अपने सामान का ध्यान रखें।");
    }

    else if (updatecnt == 7)
    {
        ui->label_8->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_9->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 8)
    {
        ui->label_9->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_10->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 9)
    {
        system ("aplay /home/upboard/demo_audio/notallowed.wav &");
        ui->label_10->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_11->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
        ml->setText("GEOCON मेट्रो में खाना, धूम्रपान और शराब पीना मना है।");
    }

    else if (updatecnt == 10)
    {
        ui->label_11->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_12->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 11)
    {
        ui->label_12->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_13->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 12)
    {
        system ("aplay /home/upboard/demo_audio/inform.wav &");
        ui->label_13->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_14->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
        ml->setText("कृपया मेट्रो में किसी भी अज्ञात वस्तु को न छुएं। कृपया वस्तु के बारे में मेट्रो स्टाफ को सूचित करें।");
    }

    else if (updatecnt == 13)
    {
        ui->label_14->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_15->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 14)
    {
        ui->label_15->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        ui->label_16->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 15)
    {
        ui->label_16->setStyleSheet("image: url(:/dry-clean.png); color: rgba(255, 255, 255, 255);");
        updatecnt++;
    }

    else if (updatecnt == 16)
    {
        resetRoute();
        updatecnt = 0;
    }
}
void MainWindow::resetRoute()
{
    ui->label->setStyleSheet("image: url(:/yellowcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_2->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_3->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_4->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_5->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_6->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_7->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_8->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_9->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_10->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_11->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_12->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_13->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_14->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_15->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
    ui->label_16->setStyleSheet("image: url(:/redcircle.png); color: rgba(255, 255, 255, 255);");
}

