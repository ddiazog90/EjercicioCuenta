#include "view_acount.h"
#include "ui_view_acount.h"
#include <QMessageBox>
view_acount::view_acount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view_acount)
{
    ui->setupUi(this);
    connect(ui->btn_execute,SIGNAL(clicked()),this,SLOT(executeOperation()));
    connect(ui->btn_cancel,SIGNAL(clicked()),this,SLOT(close()));
}

view_acount::~view_acount()
{
    delete ui;
}
void view_acount::executeOperation(){
    QMessageBox::information(this,"Acount","Proceso Exitoso!!!");
}
