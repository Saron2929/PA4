#include <string>
#include <cstdlib>
#include "Employee.h"
using namespace std;

Employee::Employee (string theName, double theWage, double theHours) {
    name = theName;
    wage = theWage;
    hours = theHours;
}
double Employee::calcPay() const
{
    return wage * hours;
}
string Employee::getName () const
{
    return name;
}