#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ReqClasses.cpp"

#include <iostream>
#include <QTabWidget>

int k = 0;
TaskManager taskManager = TaskManager();

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
