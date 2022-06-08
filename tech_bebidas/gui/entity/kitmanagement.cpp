#include "kitmanagement.h"
#include "ui_kitmanagement.h"
#include <iostream>

KitManagement::KitManagement(QWidget *parent, Store * s)
    : QMainWindow(parent)
    , ui(new Ui::KitManagement)
{
    store_ = s;
    ui->setupUi(this);

    fireTableUpdate();
}

KitManagement::~KitManagement()
{
    delete ui;
}

void KitManagement::on_btnCadastrarKit_clicked(){
    this->hide();
    KitRegister * kitRegister = new KitRegister (nullptr, this, getStore());
    kitRegister->exec();
}

Store * KitManagement::getStore(){
    return store_;
}

void KitManagement::fireTableUpdate(){
    auto table = ui->tableWidget;
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setColumnCount(4);
    // Reseting the table of kits
    table->clear();
    table->setHorizontalHeaderLabels({"ID", "Nome", "Nome do Cliente", "Preço", "Descrição"});

    while(table->rowCount() != 0){
        table->removeRow(table->rowCount()-1);
    }

    store_->queryExec("select * from kit");

    QString name;
    QString client;
    QString price;
    QString desc;
    QString id;
    while(store_->queryNext()){
        id = store_->queryValue(0);
        name = store_->queryValue(1);
        client = store_->queryValue(2);
        price = store_->queryValue(3);
        desc = store_->queryValue(4);

        table->insertRow(table->rowCount());
        table->setItem(table->rowCount()-1, 0, new QTableWidgetItem(id));
        table->setItem(table->rowCount()-1, 1, new QTableWidgetItem(name));
        table->setItem(table->rowCount()-1, 2, new QTableWidgetItem(client));
        table->setItem(table->rowCount()-1, 3, new QTableWidgetItem(price));
        table->setItem(table->rowCount()-1, 4, new QTableWidgetItem(desc));
    }
    table->show();


}

void KitManagement::on_btnRemoverKit_clicked()
{
    auto table = ui->tableWidget;
    QString id = table->item(table->selectionModel()->selection().indexes().at(0).row(), 0)->text();
    store_->queryExec("delete from kit where id = " + id);

    fireTableUpdate();
}


void KitManagement::on_btnEditarKit_clicked(){
    auto table = ui->tableWidget;
    QString id = table->item(table->selectionModel()->selection().indexes().at(0).row(), 0)->text();

    this->hide();
    KitEdit * kitEdit = new KitEdit (nullptr, this, getStore(), id);
    kitEdit->exec();
}

