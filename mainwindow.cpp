#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modeldialog.h"
#include "modelessdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    ModelDialog *vModel = new ModelDialog(this);
    vModel->setModal(true);
    vModel->exec();


}

void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionOpen_hovered()
{
    ModelessDialog *vModeless = new ModelessDialog(this);

    vModeless->show();

}
