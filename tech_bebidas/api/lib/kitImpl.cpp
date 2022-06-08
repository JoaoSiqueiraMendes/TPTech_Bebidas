#include "../includes/kitImpl.h"
#define BUILDING_DLL

KitBody::KitBody() {}

KitBody::~KitBody() {}

void KitBody::setPreco(QSqlQuery* query, int id, float preco) {
  QString kitId = QString::number(id);
  QString novoPreco = QString::number(preco);

  query->exec("update kit set price=" + novoPreco + " where id=" + kitId);
}

QString KitBody::getPreco(QSqlQuery* query, int id) const {
  QString kitId = QString::number(id);

  query->exec("select price from kit where id="+ kitId);
  
  int count = 0;
  while (query->next()) {
    count++;
  }

  if(count > 0) {
    query->first();
    return query->value(0).toString();
  } else {
    QString empty("");
    return empty;
  }
}

void KitBody::setNomeUsuario(QSqlQuery* query, QString nome, int id) {
  QString kitId = QString::number(id);

  query->exec("update kit set nameClient=" + nome + " where id=" + kitId);
}

QString KitBody::getNomeUsuario(QSqlQuery* query, int id) const {
  QString kitId = QString::number(id);

  query->exec("select nameClient from kit where id="+ kitId);
  
  int count = 0;
  while (query->next()) {
    count++;
  }

  if(count > 0) {
    query->first();
    return query->value(0).toString();
  } else {
    QString empty("");
    return empty;
  }
}

void KitBody::setNomeKit(QSqlQuery* query, QString nome, int id) {
  QString kitId = QString::number(id);

  query->exec("update kit set nameClient=" + nome + " where id=" + kitId);
}

QString KitBody::getNomeKit(QSqlQuery* query, int id) const {
  QString kitId = QString::number(id);

  query->exec("select name from kit where id="+ kitId);
  
  int count = 0;
  while (query->next()) {
    count++;
  }

  if(count > 0) {
    query->first();
    return query->value(0).toString();
  } else {
    QString empty("");
    return empty;
  }
}

void KitBody::setDescricao(QSqlQuery* query, int id, QString desc) {
  QString kitId = QString::number(id);

  query->exec("update kit set desc=" + desc + " where id=" + kitId);
}

QString KitBody::getDescricao(QSqlQuery* query, int id) const {
  QString kitId = QString::number(id);

  query->exec("select desc from kit where id="+ kitId);
  
  int count = 0;
  while (query->next()) {
    count++;
  }

  if(count > 0) {
    query->first();
    return query->value(0).toString();
  } else {
    QString empty("");
    return empty;
  }
}
