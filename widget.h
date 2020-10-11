#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Q3DSurface>
#include <QSurfaceDataProxy>
#include <QVector3D>

#include <QtDataVisualization>

using namespace QtDataVisualization;


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


    Q3DSurface *surface = new Q3DSurface();
    QWidget *container = QWidget::createWindowContainer(surface);




private slots:
    void on_ShowPushButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
