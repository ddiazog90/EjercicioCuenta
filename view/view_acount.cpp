#include "view_acount.h"
#include "ui_view_acount.h"
#include <QMessageBox>
view_acount::view_acount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view_acount)
    , lac(new logic_acount())
{
    ui->setupUi(this);
    //loadDATA();
    connect(ui->btn_execute,SIGNAL(clicked()),this,SLOT(executeOperation()));
    connect(ui->btn_cancel,SIGNAL(clicked()),this,SLOT(close()));
}

view_acount::~view_acount()
{
    delete ui;
}
void view_acount::executeOperation(){
    float monto=stof(ui->txt_monto->text().toStdString());
    float saldo=stof(ui->lb_saldo->text().toStdString());
    string cuenta=ui->lb_acount->text().toStdString();
    bool state=false;
    if(ui->rbtn_deposito->isChecked()){
        saldo+=monto;
        state=true;
    }else if(ui->rbtn_retiro->isChecked()){
        if(saldo>=monto){
            saldo-=monto;
            state=true;
        }else{
            QMessageBox::information(this,"Acount","Saldo Insuficiente");
        }
    }
    if(state){
        string s=to_string(saldo);
        lac->setData(cuenta,s);
        QMessageBox::information(this,"Acount","Proceso Exitoso!!!");
        loadDATA();
    }

}
void view_acount::loadDATA(){
    QQueue<string>data=lac->getData();
    ui->lb_acount->setText(QString::fromStdString(data.dequeue()));
    ui->lb_saldo->setText(QString::fromStdString(data.dequeue()));
}
