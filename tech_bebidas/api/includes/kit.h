/**
 * @file kit.h
 * 
 * @brief 
 * @version 0.1
 * @date 2022-01-03
 * 
 */

#ifndef KIT_H
#define KIT_H


#include <string>
#include <QtSql/QtSql>
#include "../api_global.h"

using namespace std;

class LIB_EXPORT Kit {
  public:
    virtual ~Kit(){}

    /**
     * @brief Set the Preco object
     * 
     * @param preco 
     */
    virtual void setPreco(QSqlQuery* sql, int id, float preco) = 0;

    /**
     * @brief Get the Preco object
     * 
     * @return float
     */
    virtual QString getPreco(QSqlQuery* query, int id) = 0;

    /**
     * @brief Set the Nome Usuario object
     * 
     * @param nome 
     */
    virtual void setNomeUsuario(QSqlQuery* query, QString nome, int id) = 0;

    /**
     * @brief Get the Nome Usuario object
     * 
     * @return string 
     */
    virtual QString getNomeUsuario(QSqlQuery* query, int id) = 0;

    /**
     * @brief Set the Nome Kit object
     * 
     * @param nome 
     */
    virtual void setNomeKit(QSqlQuery* query, QString nome, int id) = 0;

    /**
     * @brief Get the Nome Kit object
     * 
     * @return string 
     */
    virtual QString getNomeKit(QSqlQuery* query, int id) = 0;

    /**
     * @brief Get the Descricao object
     * 
     * @param query 
     * @param id 
     * @return QString 
     */
    virtual QString getDescricao(QSqlQuery* query, int id) = 0;

    /**
     * @brief Set the Descricao object
     * 
     * @param query 
     * @param id 
     * @param desc 
     */
    virtual void setDescricao(QSqlQuery* query, int id, QString desc) = 0;
};

#endif
