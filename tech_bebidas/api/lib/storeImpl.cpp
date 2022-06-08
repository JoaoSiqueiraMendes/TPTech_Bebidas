#include "../includes/storeImpl.h"

Store* StoreBody::store_ = NULL;

Store* Store::getStore(QSqlQuery* query){
    return StoreHandle::getStore(query);
}

Store* StoreBody::getStore(QSqlQuery* query){
    if (store_ == NULL){
        store_ = new StoreHandle(query);
    }
    return store_;
}

StoreBody::StoreBody(QSqlQuery* query){
    setQuery(query);
}

StoreBody::~StoreBody(){}

void StoreBody::setQuery(QSqlQuery* query){
    query_ = query;
}

QSqlQuery* StoreBody::getQuery() const{
    return query_;
}

bool StoreBody::queryExec(QString command){
    return query_->exec(command);
}

bool StoreBody::queryNext(){
    return query_->next();
}

bool StoreBody::queryFirst(){
    return query_->first();
}

QString StoreBody::queryValue(int pos){
    return query_->value(pos).toString();
}

void StoreBody::createKit(QString name,
                          QString desc, QString nameClient,
                          float price){
    query_->prepare("insert into kit (name, desc, nameClient, price)"
                   "values (:name, :desc, :nameClient, :price)");
    query_->bindValue(":name", name);
    query_->bindValue(":desc", desc);
    query_->bindValue(":nameClient", nameClient);
    query_->bindValue(":price", price);
    query_->exec();
}

void StoreBody::deleteKit(int id){
    QString kitId= QString::number(id);

    query_->exec("delete from kit where id="+kitId);
}

void StoreBody::setKit(int id, std::string name, std::string desc, std::string nameClient, float price){
    QString name_ = QString::fromStdString(name);
    QString desc_ = QString::fromStdString(desc);
    QString nameClient_ = QString::fromStdString(nameClient);
    QString price_ = QString::number(price);
    QString kitId = QString::number(id);

    query_->prepare("update kit set name=:name, desc=:desc, nameClient=:nameClient, price=:price where id=:id");
    query_->bindValue(":name", name_);
    query_->bindValue(":desc", desc_);
    query_->bindValue(":nameClient", nameClient_);
    query_->bindValue(":price", price_);
    query_->bindValue(":id", kitId);
    query_->exec();
}

QString StoreBody::getKitName(int id) const{
    QString kitId = QString::number(id);

    query_->exec("select name from kit where id="+kitId);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();

        return query_->value(0).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

QString StoreBody::getKitNameClient(int id) const{
    QString kitId = QString::number(id);

    query_->exec("select nameClient from kit where id="+kitId);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();

        return query_->value(0).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

QString StoreBody::getKitDesc(int id) const{
    QString kitId = QString::number(id);

    query_->exec("select desc from kit where id="+kitId);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();

        return query_->value(0).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

QString StoreBody::getKitPrice(int id) const{
    QString kitId = QString::number(id);

    query_->exec("select price from kit where id="+kitId);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();

        return query_->value(0).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}
