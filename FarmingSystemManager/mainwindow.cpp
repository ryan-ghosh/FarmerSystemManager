#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTabWidget>

int k = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createTabMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createTabMenu(){
    QTabWidget *tabs = new QTabWidget();
    tabs->addTab(new QWidget(), "TAB 1");
    tabs->addTab(new QWidget(), "TAB 2");
}

void MainWindow::on_pushButton_clicked()
{
    k += 1;
    ui->labelaz->setText(QString::number(k));
}

void MainWindow::on_pushButton_2_clicked()
{
    storeInputString();
}

void MainWindow::storeInputString(){
    QString submittedString = ui->lineEdit->text();
    ui->textBrowser->setText(submittedString);
}
