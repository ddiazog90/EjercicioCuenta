#ifndef VIEW_ACOUNT_H
#define VIEW_ACOUNT_H

#include <QWidget>
#include <controller/logic_acount.h>
namespace Ui {
class view_acount;
}

class view_acount : public QWidget
{
    Q_OBJECT

public:
    explicit view_acount(QWidget *parent = nullptr);
    ~view_acount();
    void loadDATA();
private:
    Ui::view_acount *ui;
    logic_acount *lac;

private slots:
    void executeOperation();
};

#endif // VIEW_ACOUNT_H
