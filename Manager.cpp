#include "Manager.h"
#include <string>

// Manager class implementation
Manager::Manager(std::string theName, double theWage, double theHours, double theBonus)
    : Employee(theName, theWage, theHours), bonus(theBonus) {}

double Manager::calcPay() const {
    // Calculate pay by adding bonus to employee's regular pay
    return Employee::calcPay() + bonus;
}

double Manager::getBonus() const {
    return bonus;
};
