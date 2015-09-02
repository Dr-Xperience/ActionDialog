#include "modelessdialog.h"
#include "ui_modelessdialog.h"

ModelessDialog::ModelessDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelessDialog)
{
    ui->setupUi(this);
}

ModelessDialog::~ModelessDialog()
{
    delete ui;
}
