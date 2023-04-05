#ifndef STATIONNAME_H
#define STATIONNAME_H

#include <QWidget>
#include <QPainter>

class stationname:public QWidget
{
    Q_OBJECT

public:
    stationname(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // STATIONNAME_H
