/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QTableWidget *urgentTaskTable;
    QTableWidget *regularTaskTable;
    QWidget *tab_3;
    QTableWidget *invtable;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *PayEmpButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditName;
    QLineEdit *lineEditQuant;
    QLineEdit *lineEditPrice;
    QVBoxLayout *verticalLayout_3;
    QPushButton *invButton;
    QWidget *tab_2;
    QPushButton *PayEmpButton;
    QTableWidget *payrolltable;
    QLabel *label_10;
    QLabel *label_17;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *lineEditEmployee;
    QLineEdit *lineEditSalary;
    QLineEdit *lineEditHours;
    QPushButton *payButton_3;
    QWidget *tab_4;
    QPushButton *clearButton;
    QLabel *label_23;
    QLabel *label_24;
    QTextBrowser *textBrowser;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_25;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditUrgent;
    QPushButton *urgentButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(858, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 801, 591));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        calendarWidget = new QCalendarWidget(tab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setEnabled(true);
        calendarWidget->setGeometry(QRect(515, 0, 281, 181));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(8);
        calendarWidget->setFont(font1);
        calendarWidget->setCursor(QCursor(Qt::ArrowCursor));
        calendarWidget->setGridVisible(false);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 81, 41));
        urgentTaskTable = new QTableWidget(tab);
        if (urgentTaskTable->columnCount() < 1)
            urgentTaskTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        urgentTaskTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        urgentTaskTable->setObjectName(QString::fromUtf8("urgentTaskTable"));
        urgentTaskTable->setGeometry(QRect(90, 80, 181, 192));
        regularTaskTable = new QTableWidget(tab);
        if (regularTaskTable->columnCount() < 1)
            regularTaskTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        regularTaskTable->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        regularTaskTable->setObjectName(QString::fromUtf8("regularTaskTable"));
        regularTaskTable->setGeometry(QRect(490, 250, 211, 192));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        invtable = new QTableWidget(tab_3);
        if (invtable->columnCount() < 4)
            invtable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        invtable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        invtable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        invtable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        invtable->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        invtable->setObjectName(QString::fromUtf8("invtable"));
        invtable->setGeometry(QRect(0, 220, 801, 281));
        sizePolicy.setHeightForWidth(invtable->sizePolicy().hasHeightForWidth());
        invtable->setSizePolicy(sizePolicy);
        invtable->setLayoutDirection(Qt::LeftToRight);
        invtable->setRowCount(0);
        invtable->setColumnCount(4);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 70, 411, 121));
        label_18->setWordWrap(true);
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 20, 211, 41));
        QFont font2;
        font2.setPointSize(20);
        label_19->setFont(font2);
        PayEmpButton_2 = new QPushButton(tab_3);
        PayEmpButton_2->setObjectName(QString::fromUtf8("PayEmpButton_2"));
        PayEmpButton_2->setGeometry(QRect(320, 510, 101, 31));
        widget = new QWidget(tab_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(460, 50, 313, 137));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_6->addWidget(lineEditName);

        lineEditQuant = new QLineEdit(widget);
        lineEditQuant->setObjectName(QString::fromUtf8("lineEditQuant"));

        verticalLayout_6->addWidget(lineEditQuant);

        lineEditPrice = new QLineEdit(widget);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        verticalLayout_6->addWidget(lineEditPrice);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        invButton = new QPushButton(widget);
        invButton->setObjectName(QString::fromUtf8("invButton"));

        verticalLayout_3->addWidget(invButton);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        PayEmpButton = new QPushButton(tab_2);
        PayEmpButton->setObjectName(QString::fromUtf8("PayEmpButton"));
        PayEmpButton->setGeometry(QRect(320, 510, 101, 31));
        payrolltable = new QTableWidget(tab_2);
        if (payrolltable->columnCount() < 5)
            payrolltable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        payrolltable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        payrolltable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        payrolltable->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        payrolltable->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        payrolltable->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        payrolltable->setObjectName(QString::fromUtf8("payrolltable"));
        payrolltable->setGeometry(QRect(0, 220, 801, 281));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 20, 181, 41));
        label_10->setFont(font2);
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 70, 411, 121));
        label_17->setWordWrap(true);
        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(459, 50, 311, 135));
        verticalLayout_9 = new QVBoxLayout(widget1);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_8->addWidget(label_11);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_8->addWidget(label_12);

        label_13 = new QLabel(widget1);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_8->addWidget(label_13);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        lineEditEmployee = new QLineEdit(widget1);
        lineEditEmployee->setObjectName(QString::fromUtf8("lineEditEmployee"));

        verticalLayout_12->addWidget(lineEditEmployee);

        lineEditSalary = new QLineEdit(widget1);
        lineEditSalary->setObjectName(QString::fromUtf8("lineEditSalary"));

        verticalLayout_12->addWidget(lineEditSalary);

        lineEditHours = new QLineEdit(widget1);
        lineEditHours->setObjectName(QString::fromUtf8("lineEditHours"));

        verticalLayout_12->addWidget(lineEditHours);


        horizontalLayout_2->addLayout(verticalLayout_12);


        horizontalLayout->addLayout(horizontalLayout_2);

        payButton_3 = new QPushButton(widget1);
        payButton_3->setObjectName(QString::fromUtf8("payButton_3"));

        horizontalLayout->addWidget(payButton_3);


        verticalLayout_9->addLayout(horizontalLayout);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        clearButton = new QPushButton(tab_4);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(190, 350, 141, 41));
        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 20, 271, 41));
        label_23->setFont(font2);
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 70, 411, 121));
        label_24->setWordWrap(true);
        textBrowser = new QTextBrowser(tab_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 220, 801, 281));
        widget2 = new QWidget(tab_4);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(460, 50, 311, 136));
        verticalLayout_10 = new QVBoxLayout(widget2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(widget2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_25);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_5->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditUrgent = new QLineEdit(widget2);
        lineEditUrgent->setObjectName(QString::fromUtf8("lineEditUrgent"));

        horizontalLayout_8->addWidget(lineEditUrgent);


        verticalLayout->addLayout(horizontalLayout_8);

        urgentButton = new QPushButton(widget2);
        urgentButton->setObjectName(QString::fromUtf8("urgentButton"));

        verticalLayout->addWidget(urgentButton);


        verticalLayout_10->addLayout(verticalLayout);

        tabWidget->addTab(tab_4, QString());
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 801, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(20);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 858, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(invButton, SIGNAL(clicked()), invtable, SLOT(update()));
        QObject::connect(payButton_3, SIGNAL(clicked()), payrolltable, SLOT(update()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome!!", nullptr));
        QTableWidgetItem *___qtablewidgetitem = urgentTaskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Urgent Tasks", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = regularTaskTable->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Regular Tasks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Home", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = invtable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = invtable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = invtable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Unit Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = invtable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Total Price", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\"", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Inventory Header", nullptr));
        PayEmpButton_2->setText(QCoreApplication::translate("MainWindow", "Remove Item", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Add an Item:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Item Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Quantity:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Price:", nullptr));
        invButton->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        PayEmpButton->setText(QCoreApplication::translate("MainWindow", "Pay", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = payrolltable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = payrolltable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Salary", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = payrolltable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Hours", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = payrolltable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Balance Owed", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = payrolltable->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "To Pay", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Payroll Header", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\"", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Add an Employee:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Rate:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Hours:", nullptr));
        payButton_3->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Payroll", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear All Tasks", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Task Manager Header", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\"", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Add a Task:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Task Name:   ", nullptr));
        lineEdit->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Urgent (Y/N):", nullptr));
        urgentButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Task Manager", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sprout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
