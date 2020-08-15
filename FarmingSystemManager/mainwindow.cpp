#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTabWidget>
#include "ReqClasses.cpp"

int k = 0;
QStringList taskList = {};
Inventory inventory = Inventory();
QString holla;  // item name
int boi;    // item quant
float bruh; // item price
//PayRollSystem payroll = PayRollSystem(10000.00);


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

// inventory screen

void MainWindow::on_pushButton_4_clicked()  // inventory item name
{
    holla = InvNameClick();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_5_clicked()  // item quant
{
    boi = InvQuantClick();
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_6_clicked()  // item price
{
    bruh = InvPriceClick();
    Item item = Item(holla,bruh);
    inventory.addItem(item, boi);
    ui->lineEdit->clear();
    displayInv();
}

QString MainWindow::InvNameClick(){
    QString submittedString = ui->lineEdit->text();
    if (submittedString.isEmpty()) {
        return "";                             //cannot insert empty text into textBrowser
    }

    return submittedString;
}

int MainWindow::InvQuantClick(){
    int quant = ui->lineEdit->text().toInt();
    return quant;
}
float MainWindow::InvPriceClick(){
    float price = ui->lineEdit->text().toFloat();
    return price;
}

void MainWindow::displayInv(){
    if (not ui->textBrowser->toPlainText().isEmpty()){
        ui->textBrowser->clear();           //clear textBrowser if not empty
    }

    for(pair<QString, int> i:inventory.inventory){
        ui->textBrowser->append(i.first + ": " + i.second + " $" + inventory.prices[i.first]);
    }
    return;
}
