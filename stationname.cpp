#include "stationname.h"

stationname::stationname(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    installEventFilter(this);
}

void stationname::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(QColor(255, 255, 255, 255), 1, Qt::SolidLine));
    painter.rotate(60);

    //Names above the route
    painter.drawText(20,0,"Noida Elec. City");
    painter.drawText(130,-200,"Noida Sector 59");
    painter.drawText(250,-410,"Noida Sector 52");
    painter.drawText(360,-610,"Noida City Centre");
    painter.drawText(480,-820,"Botanical Garden");
    painter.drawText(610,-1030,"Noida Sector 16");
    painter.drawText(730,-1230,"New Ashok Ngr.");
    painter.drawText(860,-1450,"Mayur Vihar-I");

    //Names below the route
    painter.drawText(240,-50,"Noida Sector 62");
    painter.drawText(360,-255,"Noida Sector 61");
    painter.drawText(QPoint(480,-465),"Noida Sector 34");
    painter.drawText(QPoint(600,-670),"Golf Course");
    painter.drawText(QPoint(720,-880),"Noida Sector 18");
    painter.drawText(QPoint(850,-1090),"Noida Sector 15");
    painter.drawText(QPoint(970,-1300),"Mayur Vihar Ext.");
    painter.drawText(QPoint(1080,-1500),"Akshardham");
}
