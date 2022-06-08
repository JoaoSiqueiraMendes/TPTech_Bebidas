#ifndef KITMANAGEMENT_H
#define KITMANAGEMENT_H

#include <QMainWindow>
#include "kitregister.h"
#include "kitedit.h"
#include "../../api/includes/store.h"

QT_BEGIN_NAMESPACE
namespace Ui { class KitManagement; }
QT_END_NAMESPACE

class KitManagement : public QMainWindow
{
    Q_OBJECT

public:
    KitManagement(QWidget *parent = nullptr, Store * s = nullptr);
    ~KitManagement();
    Store * getStore();
    void fireTableUpdate();
private slots:
    void on_btnCadastrarKit_clicked();

    void on_btnRemoverKit_clicked();

    void on_btnEditarKit_clicked();

private:
    Ui::KitManagement *ui;
    Store *store_;
};
#endif // KITMANAGEMENT_H
