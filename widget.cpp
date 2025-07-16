#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , va(new view_acount())
    , ll(new logic_login())
{
    ui->setupUi(this);
    connect(ui->btn_ok,SIGNAL(clicked()),this,SLOT(validate()));
    connect(ui->btn_cancel,SIGNAL(clicked()),this,SLOT(close()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::validate(){
    string u=ui->txt_user->text().toStdString();
    string p=ui->txt_psw->text().toStdString();
    if(ll->validateUser(u,p)){
        QMessageBox::information(this,"Login","Acceso Correcto");
        this->hide();//cierra la ventana actual
        va->show();//abre la ventana view_acount
        va->loadDATA();//cargar los datos del archivo
    }else{
        QMessageBox::information(this,"Login","Credenciales Incorrectas");
    }
}
