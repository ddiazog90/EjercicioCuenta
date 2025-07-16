#ifndef VIEW_ACOUNT_H
#define VIEW_ACOUNT_H

#include <QWidget>

namespace Ui {
class view_acount;
}

class view_acount : public QWidget
{
    Q_OBJECT

public:
    explicit view_acount(QWidget *parent = nullptr);
    ~view_acount();

private:
    Ui::view_acount *ui;

private slots:
    void executeOperation();
};

#endif // VIEW_ACOUNT_H
