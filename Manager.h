#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

class Manager: public Employee {
private:
    double bonus;
public:
    // Constructor
    Manager(std::string theName, double theWage, double theHours, double theBonus);

    // Redefined calcPay method
    double calcPay() const;

    // Accessor for bonus
    double getBonus() const;
};