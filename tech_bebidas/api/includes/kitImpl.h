/**
 * @file kitImpl.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef KIT_IMPL_H
#define KIT_IMPL_H

#include "./kit.h"
#include "api_global.h"
#include "./handleBody.h"

class LIB_EXPORT KitBody : public Body {

  private:
    KitBody (const KitBody& kit);

    KitBody& operator=(const KitBody& kit);
  
  public:
    KitBody();

    virtual ~KitBody();

    void setPreco(QSqlQuery* query, int id, float preco);
    
    QString getPreco(QSqlQuery* query, int id) const;
    
    void setNomeUsuario(QSqlQuery* query, QString nome, int id);
    
    QString getNomeUsuario(QSqlQuery* query, int id) const;
    
    void setNomeKit(QSqlQuery* query, QString nome, int id);
    
    QString getNomeKit(QSqlQuery* query, int id) const;

    void setDescricao(QSqlQuery* query, int id, QString desc);

    QString getDescricao(QSqlQuery* query, int id) const;

};

class LIB_EXPORT KitHandle : public Handle<KitBody>, public Kit {
  public:
    KitHandle(){}

    virtual ~KitHandle(){}

    void setPreco(QSqlQuery* query, int id, float preco) {
      pImpl_->setPreco(query, id, preco);
    }

    QString getPreco(QSqlQuery* query, int id) const {
      return pImpl_->getPreco(query, id);
    }

    void setNomeUsuario(QSqlQuery* query, QString nome, int id) {
      pImpl_->setNomeUsuario(query, nome, id);
    }

    QString getNomeUsuario(QSqlQuery* query, int id) const {
      return pImpl_->getNomeUsuario(query, id);
    }

    void setNomeKit(QSqlQuery* query, QString nome, int id) {
      pImpl_->setNomeKit(query, nome, id);
    }

    QString getNomeKit(QSqlQuery* query, int id) const {
      return pImpl_->getNomeKit(query, id);
    }

    void setDescricao(QSqlQuery* query, int id, QString desc) {
      pImpl_->setDescricao(query, id, desc);
    }

    QString getDescricao(QSqlQuery* query, int id) const {
      return pImpl_->getDescricao(query, id);
    }


};

#endif
