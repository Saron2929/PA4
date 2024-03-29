#include <iostream> 
#include <iomanip>
#include <string>
#include "Employee.h"
#include "Employee.cpp"
#include "Manager.cpp"

using namespace std; 

int main() {
    // This program will take information of the managers hourly wage and bonus pay
    // it will then the calculate the highest paid manager and the average pay
    cout << "Enter number of managers: ";
    int numManagers;
    cin >> numManagers;
    cin.ignore(); 

    // we now create a dynamic array 
    const int maxManagers = 100;
    Manager** managers = new Manager*[numManagers];

    // input manager information and store to the array 
    for (int i = 0; i < numManagers; ++i) {
        string name;
        double wage, hours, bonus;
        cout << "Enter manager " << i << " name: ";
        getline(cin, name); 
        cout << "Enter manager " << i << " hourly wage: ";
        cin >> wage;
        cout << "Enter manager " << i << " hours worked: ";
        cin >> hours;
        cout << "Enter manager " << i << " bonus: ";
        cin >> bonus;

        // we will now create a manager object 
        managers[i] = new Manager(name, wage, hours, bonus);
        cin.ignore();
    }

    // Calculate total pay and find highest paid manager
    double totalPay = 0.0;
    Manager* highestPaidManager = managers[0];
    for (int i = 0; i < numManagers; ++i) {
        totalPay += managers[i]->calcPay();
        if (managers[i]->calcPay() > highestPaidManager->calcPay()) {
            highestPaidManager = managers[i];
        }
    }

    // Calculate average pay
    double averagePay = totalPay / numManagers;

    // disokay final
    cout << fixed << setprecision(2);
    cout << "Highest paid manager is " << highestPaidManager->getName() << " who is paid $" << highestPaidManager->calcPay() << endl;
    cout << "Average pay is $" << averagePay << endl;

    // Cleaning up the array 
    for (int i = 0; i < numManagers; ++i) {
        delete managers[i];
    }
    delete[] managers;

    return 0;
}
