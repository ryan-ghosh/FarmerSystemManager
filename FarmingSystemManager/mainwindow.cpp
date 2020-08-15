#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ReqClasses.cpp"

#include <iostream>
#include <QTabWidget>


TaskManager taskManager = TaskManager();
Inventory inventory = Inventory();

QString itemName;  // item name
int itemQuant;    // item quant
float itemPrice; // item price

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

//START of Ahmed's Portion

void MainWindow::on_goButton_clicked()
{
    storeInputString();
    displayTasks();
    ui->lineEdit->clear();
}

void MainWindow::on_clearButton_clicked()
{
    clearTasks();
}

void MainWindow::storeInputString(){
    QString submittedString = ui->lineEdit->text();

    if (submittedString.isEmpty()) {
        return;                             //cannot insert empty text into textBrowser
    }

    Task task = Task(submittedString);
    taskManager.addTask(submittedString);

    return;
}

void MainWindow::displayTasks() {
    if (not ui->textBrowser->toPlainText().isEmpty()){
        ui->textBrowser->clear();           //clear textBrowser if not empty
    }

    int taskLength = (int)taskManager.tasks.size();

    for (int i = 0; i < taskLength; i++) {
        ui->textBrowser->append(QString::number(i + 1) + ". " + taskManager.tasks[taskLength - i - 1].task);
    }

    return;
}

void MainWindow::clearTasks() {
    if(not taskManager.tasks.empty()){
        taskManager.tasks.clear();
    }

    ui->textBrowser->clear();
    return;
}


//END of Ahmed's Portion
//
//
//
//START of Inventory Portion

void MainWindow::on_invButton_clicked()
{
    itemQuant = InvQuantClick();
    ui->lineEditQuant->clear();

    itemName = InvNameClick();
    ui->lineEditName->clear();

    itemPrice = InvPriceClick();
    ui->lineEditPrice->clear();

    Item item = Item(itemName,itemPrice);
    inventory.addItem(item, itemQuant);

    displayInv();
}

QString MainWindow::InvNameClick(){
    QString submittedString = ui->lineEditName->text();

    if (submittedString.isEmpty()) {
        return "";                             //cannot insert empty text into textBrowser
    }

    return submittedString;
}

int MainWindow::InvQuantClick(){
    return ui->lineEditQuant->text().toInt();
}

float MainWindow::InvPriceClick(){
    return ui->lineEditPrice->text().toFloat();
}

void MainWindow::displayInv(){
    if (not ui->textBrowserInv->toPlainText().isEmpty()){
        ui->textBrowserInv->clear();           //clear textBrowser if not empty
    }

    for(pair<QString, int> i:inventory.inventory){
        ui->textBrowserInv->append(i.first + ": " + QString::number(i.second) + " $" + QString::number(inventory.prices[i.first]));
    }
    return;
}

//END of inventory portion
