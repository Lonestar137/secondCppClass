#include "ProductionWorker.h"
#include <iomanip>
#include <iostream>


using namespace std;
void output(const ProductionWorker &); //output function declaration

int main()
{
    ProductionWorker EmployeeOne("Garrett Jones", 123453, "01/01/1996", 1, 48.89);

    cout << "Employee Database Info:" << endl;
    output(EmployeeOne);


    cout << "Press any key to continue...";
    cin.get();
    cin.ignore();
    return 0;
}
//output function-- uses accessor functions to retrieve employee data.
void output(const ProductionWorker &EmployeeOne)
{
    cout << "Name: "<< EmployeeOne.getEmpName() << endl
         << "ID-Number: " << EmployeeOne.getEmpID() << endl
         << "Date Hired: " << EmployeeOne.getEmpDateHired() << endl;
    if(EmployeeOne.getShift()==1)
        cout << "Shift: Day" << endl << "Shift Number: 1" << endl;
    if(EmployeeOne.getShift()==2)
        cout << "Shift: Night" << endl << "Shift Number: 2" << endl;

    cout << fixed << setprecision(2);
    cout << "Payrate: $"<< right << EmployeeOne.getHourlyPR() << "\n\n";
}
