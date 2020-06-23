#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
using std::string;

class Employee
{
    private:
        string empName;                // Employee name
        int     empID;                    // Employee ID-number
        string empHireDate;            // Employee hire date

    public:
        // Default constructor
        Employee()
        {
            empName = " ";
            empID = 0;
            empHireDate = " ";
        }

        // Parameterized constructor
        Employee(string name, int number, string hireDate)
        {
            empName = name;
            empID = number;
            empHireDate = hireDate;
        }


        // Accessor functions
        string getEmpName() const
        { return empName; }

        int getEmpID() const
        { return empID; }

        string getEmpDateHired() const
        { return empHireDate; }
};

#endif
