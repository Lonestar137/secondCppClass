#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee
{
    private:
        string EmployeeName;
        int     EmployeeID;
        string HireDate;

    public:
        // Default constructor
        Employee()
        {
            EmployeeName = " ";
            EmployeeID = 0;
            HireDate = " ";
        }
        //Constructor with Parameters
        Employee(string name, int number, string hireDate)
        {
            EmployeeName = name;
            EmployeeID = number;
            HireDate = hireDate;
        }


        // Accessors
        string getEmpName() const
        { return EmployeeName; }

        int getEmpID() const
        { return EmployeeID; }

        string getEmpDateHired() const
        { return HireDate; }
};

#endif
