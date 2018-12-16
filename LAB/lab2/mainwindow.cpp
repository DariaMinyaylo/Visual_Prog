#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    QString c;
    c.setNum(ui->lineEdit->text().toInt()+ui->lineEdit_2->text().toInt());
    ui->lineEdit_3->setText(c);
}
