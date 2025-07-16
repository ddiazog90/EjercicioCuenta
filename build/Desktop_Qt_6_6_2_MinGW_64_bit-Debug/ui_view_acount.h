/********************************************************************************
** Form generated from reading UI file 'view_acount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_ACOUNT_H
#define UI_VIEW_ACOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_view_acount
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_acount;
    QLabel *lb_saldo;
    QLineEdit *txt_monto;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbtn_retiro;
    QRadioButton *rbtn_deposito;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_execute;
    QPushButton *btn_cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *view_acount)
    {
        if (view_acount->objectName().isEmpty())
            view_acount->setObjectName("view_acount");
        view_acount->resize(364, 228);
        formLayoutWidget = new QWidget(view_acount);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 0, 361, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lb_acount = new QLabel(formLayoutWidget);
        lb_acount->setObjectName("lb_acount");

        formLayout->setWidget(1, QFormLayout::FieldRole, lb_acount);

        lb_saldo = new QLabel(formLayoutWidget);
        lb_saldo->setObjectName("lb_saldo");

        formLayout->setWidget(2, QFormLayout::FieldRole, lb_saldo);

        txt_monto = new QLineEdit(formLayoutWidget);
        txt_monto->setObjectName("txt_monto");

        formLayout->setWidget(3, QFormLayout::FieldRole, txt_monto);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        rbtn_retiro = new QRadioButton(formLayoutWidget);
        rbtn_retiro->setObjectName("rbtn_retiro");

        verticalLayout->addWidget(rbtn_retiro);

        rbtn_deposito = new QRadioButton(formLayoutWidget);
        rbtn_deposito->setObjectName("rbtn_deposito");

        verticalLayout->addWidget(rbtn_deposito);


        formLayout->setLayout(4, QFormLayout::FieldRole, verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_execute = new QPushButton(formLayoutWidget);
        btn_execute->setObjectName("btn_execute");

        horizontalLayout->addWidget(btn_execute);

        btn_cancel = new QPushButton(formLayoutWidget);
        btn_cancel->setObjectName("btn_cancel");

        horizontalLayout->addWidget(btn_cancel);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(view_acount);

        QMetaObject::connectSlotsByName(view_acount);
    } // setupUi

    void retranslateUi(QWidget *view_acount)
    {
        view_acount->setWindowTitle(QCoreApplication::translate("view_acount", "ACOUNT", nullptr));
        label->setText(QCoreApplication::translate("view_acount", "CUENTA:", nullptr));
        label_2->setText(QCoreApplication::translate("view_acount", "SALDO:", nullptr));
        label_3->setText(QCoreApplication::translate("view_acount", "MONTO:", nullptr));
        label_4->setText(QCoreApplication::translate("view_acount", "OPERACION:", nullptr));
        lb_acount->setText(QCoreApplication::translate("view_acount", "XXXX", nullptr));
        lb_saldo->setText(QCoreApplication::translate("view_acount", "0.0", nullptr));
        rbtn_retiro->setText(QCoreApplication::translate("view_acount", "RETIRO", nullptr));
        rbtn_deposito->setText(QCoreApplication::translate("view_acount", "DEPOSITO", nullptr));
        btn_execute->setText(QCoreApplication::translate("view_acount", "EXECUTE", nullptr));
        btn_cancel->setText(QCoreApplication::translate("view_acount", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class view_acount: public Ui_view_acount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_ACOUNT_H
