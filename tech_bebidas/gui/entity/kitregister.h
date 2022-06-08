#ifndef KITREGISTER_H
#define KITREGISTER_H

#include <QDialog>
#include "kitmanagement.h"
#include "../../api/includes/store.h"

namespace Ui {
class KitRegister;
}

class KitRegister : public QDialog
{
    Q_OBJECT

public:
    explicit KitRegister(QWidget *parent = nullptr, QWidget *backscreen = nullptr, Store * s = nullptr);
    ~KitRegister();
    Store * getStore();
private slots:
    void on_btnCancelRegisterKit_clicked();

    void on_btnRegisterKit_clicked();

private:
    Ui::KitRegister *ui;
    QWidget * backScreen_;
    Store* store_; /*!< This attribute contains the Store. */
};

#endif // KITREGISTER_H
