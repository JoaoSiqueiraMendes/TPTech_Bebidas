/*!
 \file Store.h
 \brief This file contains the interface of a Farm for the GiroDeGado software.
*/

#ifndef STORE_H
#define STORE_H

#include <QtSql/QtSql>
#include "../api_global.h"
#include "./kit.h"

/** 
 * \brief
 * This Class represents a Store for the Peticos software.
*/
class LIB_EXPORT Store {
    public:

        /*!
            Returns the singleton Store.
            \param query the query of a database.
            \return Store* - the pointer to the singleton Store.
        */
        static Store* getStore(QSqlQuery* query = NULL);

        /*!
            This is the default destructor for the Store Class.
        */
        virtual ~Store(){}

        /*!
            Sets the query attribute in the Store Class.
            \param query the query of a database.
        */
        virtual void setQuery(QSqlQuery* query) = 0;

        /*!
            Returns the query attribute in the Store Class.
            \return QSqlQuery* - the content query attribute.  
        */
        virtual QSqlQuery* getQuery() const = 0;

        /*!
            Executes the exec() method of the query.
            \param command the command that will be executed by the query.
            \return bool - if the method was successful or not. 
        */
        virtual bool queryExec(QString command) = 0;

        /*!
            Executes the next() method of the query.
            \return bool - if the method was successful or not. 
        */
        virtual bool queryNext() = 0;

        /*!
            Executes the first() method of the query.
            \return bool - if the method was successful or not. 
        */
        virtual bool queryFirst() = 0;

        /*!
            Executes the value(pos).toString() methods of the query.
            \param pos the position of the field in the current record.
            \return QString - the value of the field in the current record, converted to a QString. 
        */
        virtual QString queryValue(int pos) = 0;
        
        /*!
            Creates a cattle and adds it to the database.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father's earring of the Cattle.
            \param mother the mother's earring of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
        */
        virtual void createKit(QString name = "",QString desc = "", QString nameClient = "", float price = 0) = 0;
        
        /*!        
           Deletes a cattle from the database.
           \param cattle_earring earring of the cattle that will be deleted.
        */ 
        virtual void deleteKit(int id) = 0;

        /*!
            Sets the earring of a registered Cattle in the database.
            \param actual_cattle_earring the earring of the Cattle.
            \param new_cattle_earring which will be set to the Cattle.
        */
        virtual void setKit(int id, std::string name, std::string desc, std::string nameClient, float price) = 0;


        virtual QString getKitName(int id) const = 0;
        virtual QString getKitNameClient(int id) const = 0;
        virtual QString getKitDesc(int id) const = 0;
        virtual QString getKitPrice(int id) const = 0;
        
};

#endif
