
#include "Homework5.h"

//CONSTRUCTORS---------
Employee::Employee(string Name1, int ID, string Department, string position1)
{
    name = Name1;
    idNumber = ID;
    department = Department;
    position = position1;
}


Employee::Employee(string Name1, int ID)
{
    name = Name1;
    idNumber = ID;
    department = " ";
    position = " ";
}



Employee::Employee()
{
    name = " ";
    idNumber = 0;
    department = " ";
    position = " ";
}


//MUTATORS BELOW--------------
void Employee::setName(string Name1)
{
    name = Name1;
}


void Employee::setIdNumber(int ID)
{
    idNumber = ID;
}


void Employee::setDepartment(string empDep)
{
    department = empDep;
}



void Employee::setPosition(string position1)
{
    position = position1;
}



//ACCESSORS---------------
string Employee::getName() const
{
    return name;
}



int Employee::getIdNumber() const
{
    return idNumber;
}



string Employee::getDepartment() const
{
    return department;
}



string Employee::getPosition() const
{
    return position;
}











//EXECUTION------

#include <iostream>
#include <iomanip>
#include "Homework5.h"

void update(Employee &, Employee &);
void display(const Employee);

int main()
{
    Employee susan("Susan Mayers", 47899, "Accounting", "Vice President");
    Employee mark("Mark Jones", 39119);
    Employee joy;


    update(mark, joy);

    display(susan);
    display(mark);
    display(joy);

    std::cout << "\nPress enter to continue...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}


void update(Employee &mark, Employee &joy)
{

    mark.setDepartment("IT");
    mark.setPosition("Programmer");


    joy.setName("Joy Rogers");
    joy.setIdNumber(81774);
    joy.setDepartment("Manufacturing");
    joy.setPosition("Engineer");
}


void display(const Employee empData)
{
    std::cout << "\nEmployee Name: " << std::setw(15) << empData.getName() << "\n"
                 << "ID Number:     "    << std::setw(15) << empData.getIdNumber() << "\n"
                 << "Department:    "   << std::setw(15) << empData.getDepartment() << "\n"
                 << "Position:      "   << std::setw(15) << empData.getPosition() << "\n";
}
