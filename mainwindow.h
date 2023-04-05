#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QVBoxLayout>
#include <QFont>
#include <QTimer>
#include <QFontDatabase>
#include "stationname.h"
#include "WidgetMarqueeLabel.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateRoute();
    void resetRoute();

private:
    Ui::MainWindow *ui;
    WidgetMarqueeLabel *ml;
    int id;
    QString family;
    QTimer *timer;
    int updatecnt = 0;

protected:
    stationname *stationName;
};
#endif // MAINWINDOW_H
