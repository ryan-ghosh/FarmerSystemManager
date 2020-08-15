#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTabWidget>

int k = 0;
QStringList taskList = {};

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
    displayTasks();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_3_clicked()
{
    clearTasks();
}

void MainWindow::storeInputString(){
    QString submittedString = ui->lineEdit->text();

    if (submittedString.isEmpty()) {
        return;                             //cannot insert empty text into textBrowser
    }

    taskList.append(submittedString);
    return;
}

void MainWindow::displayTasks() {
    if (not ui->textBrowser->toPlainText().isEmpty()){
        ui->textBrowser->clear();           //clear textBrowser if not empty
    }

    for (int i = 0; i < taskList.length(); i++) {
        ui->textBrowser->append(QString::number(i + 1) + ". " + taskList.at(taskList.length() - i - 1));
    }

    return;
}

void MainWindow::clearTasks() {
    if(not taskList.isEmpty()){
        taskList.clear();
    }

    ui->textBrowser->clear();
    return;
}
