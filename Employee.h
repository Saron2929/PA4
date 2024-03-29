#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string> 

class Employee{
    protected:
        std::string name;
        double wage;
        double hours;
    public:
     Employee(std::string theName, double theWage, double theHours);
        // Calculate the employee’s pay.
        double calcPay() const;
  std::string getName () const;
};
#endif // EMPLOYEE_H
