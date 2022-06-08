/********************************************************************************
** Form generated from reading UI file 'kitedit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITEDIT_H
#define UI_KITEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_KitEdit
{
public:
    QLabel *label;
    QLabel *labelID;
    QLabel *label_4;
    QLineEdit *txtNameKit;
    QPushButton *btnCancelEditKit;
    QLabel *label_5;
    QTextEdit *txtDesc;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtPriceKit;
    QLabel *label_8;
    QLineEdit *txtNameClient;
    QPushButton *btnEditKit;

    void setupUi(QDialog *KitEdit)
    {
        if (KitEdit->objectName().isEmpty())
            KitEdit->setObjectName(QString::fromUtf8("KitEdit"));
        KitEdit->resize(693, 453);
        label = new QLabel(KitEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 101, 20));
        labelID = new QLabel(KitEdit);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setGeometry(QRect(40, 20, 63, 20));
        label_4 = new QLabel(KitEdit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 240, 63, 20));
        txtNameKit = new QLineEdit(KitEdit);
        txtNameKit->setObjectName(QString::fromUtf8("txtNameKit"));
        txtNameKit->setGeometry(QRect(20, 130, 271, 26));
        btnCancelEditKit = new QPushButton(KitEdit);
        btnCancelEditKit->setObjectName(QString::fromUtf8("btnCancelEditKit"));
        btnCancelEditKit->setGeometry(QRect(570, 390, 93, 29));
        label_5 = new QLabel(KitEdit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 91, 20));
        txtDesc = new QTextEdit(KitEdit);
        txtDesc->setObjectName(QString::fromUtf8("txtDesc"));
        txtDesc->setGeometry(QRect(330, 130, 321, 161));
        label_6 = new QLabel(KitEdit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 90, 81, 20));
        label_7 = new QLabel(KitEdit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 170, 121, 20));
        txtPriceKit = new QLineEdit(KitEdit);
        txtPriceKit->setObjectName(QString::fromUtf8("txtPriceKit"));
        txtPriceKit->setGeometry(QRect(20, 270, 271, 26));
        label_8 = new QLabel(KitEdit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 50, 161, 20));
        QFont font;
        font.setPointSize(14);
        label_8->setFont(font);
        txtNameClient = new QLineEdit(KitEdit);
        txtNameClient->setObjectName(QString::fromUtf8("txtNameClient"));
        txtNameClient->setGeometry(QRect(20, 200, 271, 26));
        btnEditKit = new QPushButton(KitEdit);
        btnEditKit->setObjectName(QString::fromUtf8("btnEditKit"));
        btnEditKit->setGeometry(QRect(440, 390, 93, 29));

        retranslateUi(KitEdit);

        QMetaObject::connectSlotsByName(KitEdit);
    } // setupUi

    void retranslateUi(QDialog *KitEdit)
    {
        KitEdit->setWindowTitle(QCoreApplication::translate("KitEdit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("KitEdit", "ID: ", nullptr));
        labelID->setText(QCoreApplication::translate("KitEdit", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("KitEdit", "Pre\303\247o", nullptr));
        btnCancelEditKit->setText(QCoreApplication::translate("KitEdit", "Cancelar", nullptr));
        label_5->setText(QCoreApplication::translate("KitEdit", "Nome do Kit", nullptr));
        label_6->setText(QCoreApplication::translate("KitEdit", "Descri\303\247\303\243o", nullptr));
        label_7->setText(QCoreApplication::translate("KitEdit", "Nome do Cliente", nullptr));
        label_8->setText(QCoreApplication::translate("KitEdit", "Cadastro de Kit", nullptr));
        btnEditKit->setText(QCoreApplication::translate("KitEdit", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KitEdit: public Ui_KitEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITEDIT_H
