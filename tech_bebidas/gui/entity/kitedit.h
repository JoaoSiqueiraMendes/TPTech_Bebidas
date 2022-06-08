#ifndef KITEDIT_H
#define KITEDIT_H

#include <QDialog>
#include "kitmanagement.h"
#include "../../api/includes/store.h"
namespace Ui {
class KitEdit;
}

class KitEdit : public QDialog
{
    Q_OBJECT

public:
    explicit KitEdit(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Store * s = nullptr, QString id = "");
    ~KitEdit();
    void inicializa();
    Store * getStore();

private slots:
    void on_btnCancelEditKit_clicked();

    void on_btnEditKit_clicked();

private:
    Ui::KitEdit *ui;
    QWidget * backScreen_;
    Store* store_; /*!< This attribute contains the Store. */
    QString id;
};

#endif // KITEDIT_H
