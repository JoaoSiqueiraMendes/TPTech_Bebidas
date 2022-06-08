/*!
 \file StoreImpl.h
 \brief This file contains the handle/body of a Store for the GiroDeGado software.
*/

#ifndef STOREIMPL_H
#define STOREIMPL_H

#include "./store.h"
#include "../includes/kitImpl.h"
#include "./handleBody.h"
#include "api_global.h"

/** 
 * \brief
 * This Class represents the body of a Handle/Body idiom of a Store for the GiroDeGado software.
*/
class LIB_EXPORT StoreBody : public Body{

    protected:
        static Store* store_; /*!< The singleton store. */
        QSqlQuery* query_; /*!< The query of the GiroDeGado's database. */

    private:
        // No copy allowed

        /*!
            This is the copy constructor for the StoreBody Class.
            \param Store the StoreBody that is going to be cloned.
        */
        StoreBody (const StoreBody& store);

        /*!
            This is the overloaded assignment operator for the StoreBody Class.
            \param Store the StoreHandle that is going to be cloned.
        */
        StoreBody& operator=(const StoreBody& store);

    public:
        /*!
            This is the default constructor for the StoreBody Class.
            \param query the query of a database.
            \return StoreBody - a StoreBody Class object.
        */
        StoreBody(QSqlQuery* query = NULL);

        /*!
            This is the default destructor for the StoreBody Class.
        */
        virtual ~StoreBody();

        /*!
            Returns the singleton Store.
            \param query the query of a database.
            \return Store* - the pointer to the singleton Store.
        */
        static Store* getStore(QSqlQuery* query = NULL);

        /*!
            Sets the query attribute in the Store Class.
            \param query the query of a database.
        */
        void setQuery(QSqlQuery* query);

        /*!
            Returns the query attribute in the Store Class.
            \return QSqlQuery* - the content query attribute.  
        */
        QSqlQuery* getQuery() const;

        /*!
            Executes the exec() method of the query.
            \param command the command that will be executed by the query.
            \return bool - if the method was successful or not. 
        */
        bool queryExec(QString command);

        /*!
            Executes the next() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryNext();

        /*!
            Executes the first() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryFirst();

        /*!
            Executes the value(pos).toString() methods of the query.
            \param pos the position of the field in the current record.
            \return QString - the value of the field in the current record, converted to a QString. 
        */
        QString queryValue(int pos);
        
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
        void createKit(QString name = "",
                       QString desc = "", QString nameClient = "",
                       float price = 0);
        

        /*!
            Creates a Store and returns it's pointer.
            \return Store - a Store Class object.
        */
        static Store* createStore(QSqlQuery* query = NULL);

        /*!        
           Deletes a cattle from the database.
           \param cattle_earring earring of the cattle that will be deleted.
        */ 
        void deleteKit(int id);

        /*!
            Sets the earring of a registered Cattle in the database.
            \param actual_cattle_earring the earring of the Cattle.
            \param new_cattle_earring which will be set to the Cattle.
        */
        void setKit(int id, std::string name, std::string desc, std::string nameClient, float price);

        QString getKitName(int id) const;
        QString getKitNameClient(int id) const;
        QString getKitDesc(int id) const;
        QString getKitPrice(int id) const;

};

/** 
 * \brief
 * This Class represents the handle of a Handle/Body idiom of a Store for the GiroDeGado software implemented in this code.
*/
class LIB_EXPORT StoreHandle : public Handle<StoreBody>, public Store{

    protected:

        /*!
            This is the default constructor for the StoreHandle Class.
            \param query the query of a database.
            \return StoreHandle - a StoreHandle Class object.
        */
        StoreHandle(QSqlQuery* query = NULL){
            pImpl_->setQuery(query);
        };

        // No copy allowed

        /*!
            This is the copy constructor for the StoreHandle Class.
            \param Store the StoreHandle that is going to be cloned.
        */
        StoreHandle(StoreHandle& store) = delete;

        /*!
            This is the overloaded assignment operator for the StoreHandle Class.
            \param Store the StoreHandle that is going to be cloned.
        */
        StoreHandle& operator=(const StoreHandle& store) = delete;

    public:
        friend class StoreBody;

        /*!
            This is the default destructor for the StoreHandle Class.
        */
        virtual ~StoreHandle(){};

        /*!
            Returns the singleton Store.
            \param query the query of a database.
            \return Store* - the pointer to the singleton Store.
        */
        static Store* getStore(QSqlQuery* query = NULL){
            return StoreBody::getStore(query);
        }

        /*!
            Sets the query attribute in the Store Class.
            \param query the query of a database.
        */
        void setQuery(QSqlQuery* query){
            pImpl_->setQuery(query);
        }

        /*!
            Returns the query attribute in the Store Class.
            \return QSqlQuery* - the content query attribute.  
        */
        QSqlQuery* getQuery() const{
            return pImpl_->getQuery();
        }

        /*!
            Executes the exec() method of the query.
            \param command the command that will be executed by the query.
            \return bool - if the method was successful or not. 
        */
        bool queryExec(QString command){
            return pImpl_->queryExec(command);
        }

        /*!
            Executes the next() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryNext(){
            return pImpl_->queryNext();
        }

        /*!
            Executes the first() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryFirst(){
            return pImpl_->queryFirst();
        }

        /*!
            Executes the value(pos).toString() methods of the query.
            \param pos the position of the field in the current record.
            \return QString - the value of the field in the current record, converted to a QString. 
        */
        QString queryValue(int pos){
            return pImpl_->queryValue(pos);
        }
        
        void createKit(QString name = "",
                       QString desc = "", QString nameClient = "",
                       float price = 0){
            pImpl_->createKit(name, desc, nameClient, price);
        }

        /*!
            Calls the createStore() method implemented in the StoreBody Class.
            \return Store - a Store Class object.
        */
        static Store* createStore(QSqlQuery* query = NULL){
            return StoreBody::createStore(query);
        }

        /*!        
           Calls the deleteCattle() method implemented in the StoreBody Class.
           \param cattle_earring earring of the cattle that will be deleted.
        */ 
        void deleteKit(int id){
            pImpl_->deleteKit(id);
        }

        /*!
            Calls the setCattleEarring() method implemented in the StoreBody Class.
            \param actual_cattle_earring the earring of the Cattle.
            \param new_cattle_earring which will be set to the Cattle.
        */
        void setKit(int id, std::string name, std::string desc, std::string nameClient, float price){
            pImpl_->setKit(id, name, desc, nameClient, price);
        }


        QString getKitName(int id) const {
            return pImpl_->getKitName(id);
        }
        QString getKitNameClient(int id) const {
            return pImpl_->getKitNameClient(id);
        }
        QString getKitDesc(int id) const {
            return pImpl_->getKitDesc(id);
        }
        QString getKitPrice(int id) const {
            return pImpl_->getKitPrice(id);
        }

};

#endif
