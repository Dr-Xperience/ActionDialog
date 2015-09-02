#ifndef MODELESSDIALOG_H
#define MODELESSDIALOG_H

#include <QDialog>

namespace Ui {
class ModelessDialog;
}

class ModelessDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModelessDialog(QWidget *parent = 0);
    ~ModelessDialog();
    
private:
    Ui::ModelessDialog *ui;
};

#endif // MODELESSDIALOG_H
