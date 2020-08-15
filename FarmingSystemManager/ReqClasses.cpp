#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "mainwindow.h"

#define pb push_back

using namespace std;

class Item{
    public:
    float price;
    QString name;
    Item(QString n, float p){
        name = n;
        price = p;
    }
};

class Inventory{
public:
    unordered_map<QString,int> inventory;
    unordered_map<QString, float> prices;

    void addItem(Item item, int quantity){
        if (inventory.find(item.name)==inventory.end()){
            inventory[item.name] = quantity;
            prices[item.name] = item.price;
        }else{
            inventory[item.name] += quantity;
        }
    }

    void reduceItem(QString item, int quantity){
        if (quantity <= inventory[item]){
            inventory[item] -= quantity;
        }else{
            cout << "There is only " << inventory[item] << "in stock";
        }
    }

    void removeItem(QString item){
        inventory.erase(item);
        prices.erase(item);
    }

    float totalPrice(QString item){
        // to find total price of an item in the inventory
        float ans = prices[item] * inventory[item];  // price multiplied by quantity
        return ans;
    }

    float totalInventoryValue(){
        float ans = 0.0;
        for (auto &i : inventory){
            ans += totalPrice(i.first);
        }
        return ans;
    }
    void showInventory(){
        for(pair<QString, int> i : inventory){
            cout << i.first.toStdString() << ": " << i.second<<endl;
        }
    }

};


class Employee{
public:
    QString name;
    float salary;
    float hours;
    float deductions; //tax, late, missed over sick days

    Employee(QString a, float s, float h) : name(a) , salary(s), hours(h){}

    void employeeDeductions(float incomeTax, float federalTax){
        float first = incomeTax*salary;
        float second = federalTax*salary;
        deductions = salary - first - second;
    }
};

class PayRollSystem{
public:
    float cash;
    vector<Employee> employees;

    void payday(){
        for(Employee i : employees){
            cash -= i.salary + i.deductions;
        }
    }
};

class Task{
    public:
    QString task;
    bool isDone = false;
    Task(QString t){
        task = t;
    }
};

class TaskManager{
    public:
    vector<Task> tasks;

    void addTask(Task task){
        tasks.pb(task);
    }

    void finishTask(string title){
        for (Task c : tasks){
            if(c.task.toStdString()==title){
                c.isDone=true;
            }
        }
    }
};


// int main(){
//     Inventory inventory;
//     Item apples = Item("apples", 0.50);
//     Item bananas = Item("bananas", 0.67);
//     Item cheetos = Item("cheetos", 4.00);
//     Item fuck = Item("fuck", 0.00);
//     inventory.addItem(apples, 10);
//     inventory.showInventory();
//     inventory.addItem(bananas, 30);
//     inventory.addItem(cheetos, 500);
//     inventory.addItem(fuck, 0);
//     inventory.showInventory();
//     cout << inventory.totalPrice("bananas") << endl;
//     cout << inventory.totalInventoryValue();
//     return 0;
// }
