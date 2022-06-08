#include "kitedit.h"
#include "ui_kitedit.h"

#include <iostream>

KitEdit::KitEdit(QWidget *parent, QWidget* backScreen, Store * s, QString id) :
    QDialog(parent),
    ui(new Ui::KitEdit)
{
    store_ = s;
    backScreen_ = backScreen;
    this->id = id;

    ui->setupUi(this);

    inicializa();
}

KitEdit::~KitEdit()
{
    delete ui;
}

void KitEdit::inicializa(){
    store_->queryExec("select * from kit where id = " + id);
    store_->queryNext();
    QString name = store_->queryValue(1);
    QString client = store_->queryValue(2);
    QString price= store_->queryValue(3);
    QString desc = store_->queryValue(4);
    QString kitId = store_->queryValue(0);
    std::cout << kitId.toStdString() << endl;
    ui->labelID->setText(kitId);
    ui->txtNameKit->setText(name);
    ui->txtNameClient->setText(client);
    ui->txtPriceKit->setText(price);
    ui->txtDesc->setText(desc);
}

void KitEdit::on_btnCancelEditKit_clicked()
{
    backScreen_->show();
    this->close();
}


void KitEdit::on_btnEditKit_clicked()
{
    std::string name = ui->txtNameKit->text().toStdString();
    std::string client = ui->txtNameClient->text().toStdString();
    float price= ui->txtPriceKit->text().toFloat();
    std::string desc = ui->txtDesc->toPlainText().toStdString();

    Store * s = getStore();

    s->setKit(id.toInt(), name, desc, client, price);

    cout << id.toInt() << name << client << price << desc << endl;

    backScreen_->show();

    this->close();
}

Store * KitEdit::getStore(){
    return store_;
}

