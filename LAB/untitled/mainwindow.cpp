#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QIODevice"
#include "QFile"
#include "QTextDocumentWriter"


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

void MainWindow::on_pushButton_2_clicked()
{
    QTextDocumentWriter writer("c:/1/filename.txt", "plaintext");
    writer.write(ui->textEdit->document());


    QMessageBox msgBox;
    msgBox.setText("Hello Here");
    msgBox.exec();
}
