#include "kitregister.h"
#include "ui_kitregister.h"

#include <iostream>

KitRegister::KitRegister(QWidget *parent, QWidget* backScreen, Store * s) :
    QDialog(parent),
    ui(new Ui::KitRegister)
{
    store_ = s;
    backScreen_ = backScreen;
    ui->setupUi(this);
}

KitRegister::~KitRegister()
{
    delete ui;
}

void KitRegister::on_btnCancelRegisterKit_clicked(){
    backScreen_->show();
    this->close();
}


void KitRegister::on_btnRegisterKit_clicked(){
    QString nameKit = ui->txtNameKit->text();

    QString nameClient = ui->txtNameClient->text();

    QString priceKit = ui->txtPriceKit->text();
    float price = priceKit.toFloat();

    QString descKit = ui->txtDesc->toPlainText();

    Store * s = getStore();

    s->createKit(nameKit, descKit, nameClient, price);
    backScreen_->show();
    this->close();
}

Store * KitRegister::getStore(){
    return store_;
}










