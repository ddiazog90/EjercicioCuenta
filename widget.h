#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <view/view_acount.h>
#include <controller/logic_login.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    view_acount *va;//call a view_count
    logic_login *ll;

private slots:
    void validate();

};
#endif // WIDGET_H
