#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

#define pb push_back

using namespace std;

class Inventory{
public:
    unordered_map<string,int> inventory;

    void addItem(string item, int quantity){
        if (inventory.find(item)==inventory.end()){
            inventory[item] = quantity;
        }else{
            inventory[item] += quantity;
        }
    }

    void reduceItem(string item, int quantity){
        if (quantity <= inventory[item]){
            inventory[item] -= quantity;
        }else{
            cout << "There is only " << inventory[item] << "in stock";
        }
    }

    void removeItem(string item){
        inventory.erase(item);
    }

    void showInventory(){
        for(pair<string, int> i : inventory){
            cout << i.first << ": " << i.second<<endl;
        }
    }

};

class Employee{
public:
    string name;
    int salary;
    int sickdays;
    int deductions; //tax, late, missed over sick days

    Employee(string a, int s){
        name = a;
        salary = s;
    }
};

class PayRollSystem{
public:
    int money;
    vector<Employee> employees;

    PayRollSystem(int bank){
        money = bank;
    }

    void payday(){
        for(Employee i : employees){
            money -= i.salary + i.deductions;
        }
    }
};

/* int main(){
    Inventory inventory;
    inventory.addItem("apples", 10);
    inventory.showInventory();
    inventory.addItem("bananas", 30);
    inventory.addItem("cheetos", 500);
    inventory.addItem("fuck", 0);
    inventory.showInventory();
    return 0;
} */
