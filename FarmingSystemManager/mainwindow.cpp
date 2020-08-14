#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabWidget>

int k = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createTabMenu();

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_clicked()));
    textdisp();
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

void MainWindow::textdisp(){
    ui->labelaz->setText(QString::number(k));
}

void MainWindow::on_pushButton_clicked()
{
    ++k;
    textdisp();
}
