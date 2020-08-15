#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ReqClasses.cpp"

#include <iostream>
#include <string>
#include <QTabWidget>
#include <QTableWidget>
#include <QTableWidgetItem>



TaskManager taskManager = TaskManager();
Inventory inventory = Inventory();

QString itemName;  // item name
int itemQuant;    // item quant
float itemPrice; // item price


//PayRollSystem payroll = PayRollSystem(10000.00);

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createTabMenu();
    //QTableWidget *invtable = new QTableWidget();
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


//START of Inventory Portion

void MainWindow::on_invButton_clicked()
{
    itemQuant = InvQuantClick();
    ui->lineEditQuant->clear();

    itemName = InvNameClick();
    ui->lineEditName->clear();

    itemPrice = InvPriceClick();
    ui->lineEditPrice->clear();

    //QTableWidgetItem *iq = new QTableWidgetItem(QString::number(InvQuantClick()));
    //std::cout << itemQuant << std::endl;
    //ui->invtable->setItem(1,1,iq);

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
    /*if (not ui->textBrowserInv->toPlainText().isEmpty()){
        ui->textBrowserInv->clear();           //clear textBrowser if not empty
    }

    for(pair<QString, int> i:inventory.inventory){
        ui->textBrowserInv->append(i.first + ": " + QString::number(i.second) + " $" + QString::number(inventory.prices[i.first]));
    }*/

    std::unordered_map<QString, int>::iterator it = inventory.inventory.begin();

    QTableWidgetItem *in = new QTableWidgetItem(it->first, 0);
    QTableWidgetItem *iq = new QTableWidgetItem(QString::number(it->second), 0);
    QTableWidgetItem *ip = new QTableWidgetItem(QString::number(inventory.prices[it->first]), 0);
    QTableWidgetItem *itp = new QTableWidgetItem(QString::number(it->second * inventory.prices[it->first]), 0);
    ui->invtable->insertRow( ui->invtable->rowCount() );
    ui->invtable->setItem(ui->invtable->rowCount()-1,0,in);
    ui->invtable->setItem(ui->invtable->rowCount()-1,1,iq);
    ui->invtable->setItem(ui->invtable->rowCount()-1,2,ip);
    ui->invtable->setItem(ui->invtable->rowCount()-1,3,itp);
    ui->invtable->update();
    it++;
    return;
}

//END of inventory portion
