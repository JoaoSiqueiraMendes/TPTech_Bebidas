/********************************************************************************
** Form generated from reading UI file 'kitregister.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITREGISTER_H
#define UI_KITREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_KitRegister
{
public:
    QLabel *label;
    QPushButton *btnRegisterKit;
    QPushButton *btnCancelRegisterKit;
    QLabel *label_2;
    QLineEdit *txtNameKit;
    QLabel *label_3;
    QLineEdit *txtNameClient;
    QLabel *label_4;
    QLineEdit *txtPriceKit;
    QLabel *label_5;
    QTextEdit *txtDesc;

    void setupUi(QDialog *KitRegister)
    {
        if (KitRegister->objectName().isEmpty())
            KitRegister->setObjectName(QString::fromUtf8("KitRegister"));
        KitRegister->resize(709, 423);
        label = new QLabel(KitRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 161, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        btnRegisterKit = new QPushButton(KitRegister);
        btnRegisterKit->setObjectName(QString::fromUtf8("btnRegisterKit"));
        btnRegisterKit->setGeometry(QRect(450, 360, 93, 29));
        btnCancelRegisterKit = new QPushButton(KitRegister);
        btnCancelRegisterKit->setObjectName(QString::fromUtf8("btnCancelRegisterKit"));
        btnCancelRegisterKit->setGeometry(QRect(580, 360, 93, 29));
        label_2 = new QLabel(KitRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 91, 20));
        txtNameKit = new QLineEdit(KitRegister);
        txtNameKit->setObjectName(QString::fromUtf8("txtNameKit"));
        txtNameKit->setGeometry(QRect(30, 100, 271, 26));
        label_3 = new QLabel(KitRegister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 121, 20));
        txtNameClient = new QLineEdit(KitRegister);
        txtNameClient->setObjectName(QString::fromUtf8("txtNameClient"));
        txtNameClient->setGeometry(QRect(30, 170, 271, 26));
        label_4 = new QLabel(KitRegister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 63, 20));
        txtPriceKit = new QLineEdit(KitRegister);
        txtPriceKit->setObjectName(QString::fromUtf8("txtPriceKit"));
        txtPriceKit->setGeometry(QRect(30, 240, 271, 26));
        label_5 = new QLabel(KitRegister);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 60, 81, 20));
        txtDesc = new QTextEdit(KitRegister);
        txtDesc->setObjectName(QString::fromUtf8("txtDesc"));
        txtDesc->setGeometry(QRect(340, 100, 321, 161));

        retranslateUi(KitRegister);

        QMetaObject::connectSlotsByName(KitRegister);
    } // setupUi

    void retranslateUi(QDialog *KitRegister)
    {
        KitRegister->setWindowTitle(QCoreApplication::translate("KitRegister", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("KitRegister", "Cadastro de Kit", nullptr));
        btnRegisterKit->setText(QCoreApplication::translate("KitRegister", "Cadastrar", nullptr));
        btnCancelRegisterKit->setText(QCoreApplication::translate("KitRegister", "Cancelar", nullptr));
        label_2->setText(QCoreApplication::translate("KitRegister", "Nome do Kit", nullptr));
        label_3->setText(QCoreApplication::translate("KitRegister", "Nome do Cliente", nullptr));
        label_4->setText(QCoreApplication::translate("KitRegister", "Pre\303\247o", nullptr));
        label_5->setText(QCoreApplication::translate("KitRegister", "Descri\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KitRegister: public Ui_KitRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITREGISTER_H
