/********************************************************************************
** Form generated from reading UI file 'kitmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITMANAGEMENT_H
#define UI_KITMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KitManagement
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnCadastrarKit;
    QPushButton *btnEditarKit;
    QPushButton *btnRemoverKit;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KitManagement)
    {
        if (KitManagement->objectName().isEmpty())
            KitManagement->setObjectName(QString::fromUtf8("KitManagement"));
        KitManagement->resize(492, 450);
        centralwidget = new QWidget(KitManagement);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 101, 20));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        btnCadastrarKit = new QPushButton(centralwidget);
        btnCadastrarKit->setObjectName(QString::fromUtf8("btnCadastrarKit"));
        btnCadastrarKit->setGeometry(QRect(50, 360, 93, 29));
        btnEditarKit = new QPushButton(centralwidget);
        btnEditarKit->setObjectName(QString::fromUtf8("btnEditarKit"));
        btnEditarKit->setGeometry(QRect(190, 360, 93, 29));
        btnRemoverKit = new QPushButton(centralwidget);
        btnRemoverKit->setObjectName(QString::fromUtf8("btnRemoverKit"));
        btnRemoverKit->setGeometry(QRect(330, 360, 93, 29));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 60, 431, 271));
        KitManagement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KitManagement);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 492, 26));
        KitManagement->setMenuBar(menubar);
        statusbar = new QStatusBar(KitManagement);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        KitManagement->setStatusBar(statusbar);

        retranslateUi(KitManagement);

        QMetaObject::connectSlotsByName(KitManagement);
    } // setupUi

    void retranslateUi(QMainWindow *KitManagement)
    {
        KitManagement->setWindowTitle(QCoreApplication::translate("KitManagement", "kitPrincipal", nullptr));
        label->setText(QCoreApplication::translate("KitManagement", "Kits", nullptr));
        btnCadastrarKit->setText(QCoreApplication::translate("KitManagement", "Cadastrar", nullptr));
        btnEditarKit->setText(QCoreApplication::translate("KitManagement", "Editar", nullptr));
        btnRemoverKit->setText(QCoreApplication::translate("KitManagement", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KitManagement: public Ui_KitManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITMANAGEMENT_H
