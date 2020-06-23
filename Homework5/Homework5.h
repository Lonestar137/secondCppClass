/* Employee.h - Specification file for the Employee class */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using std::string;

class Employee
{
    private:
        string name;            // Holds the employee's name
        int idNumber;            // Holds the employee's ID number
        string department;    // Holds the name of the deparment where the employee works
        string position;        // Holds the employee's job title

    public:
        Employee(string, int, string, string);
        Employee(string, int);
        Employee();

        void setName(string);
        void setIdNumber(int);
        void setDepartment(string);
        void setPosition(string);

        string getName() const;
        int    getIdNumber() const;
        string getDepartment() const;
        string getPosition() const;
};

#endif
