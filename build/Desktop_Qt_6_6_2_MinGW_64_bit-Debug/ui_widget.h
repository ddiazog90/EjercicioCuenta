/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txt_user;
    QLineEdit *txt_psw;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(508, 129);
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 489, 106));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        txt_user = new QLineEdit(formLayoutWidget);
        txt_user->setObjectName("txt_user");

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_user);

        txt_psw = new QLineEdit(formLayoutWidget);
        txt_psw->setObjectName("txt_psw");
        txt_psw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_psw);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_ok = new QPushButton(formLayoutWidget);
        btn_ok->setObjectName("btn_ok");

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(formLayoutWidget);
        btn_cancel->setObjectName("btn_cancel");

        horizontalLayout->addWidget(btn_cancel);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "LOGIN", nullptr));
        label->setText(QCoreApplication::translate("Widget", "USUARIO", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "CLAVE:", nullptr));
        btn_ok->setText(QCoreApplication::translate("Widget", "OK", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Widget", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
