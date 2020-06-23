#include <iostream>
#include "ProductionWorker.h"
#include <string>


using namespace std;


void outputData(const ProductionWorker &);

int main()
{

    //create object
    ProductionWorker Employee1("John Jones", 123, 1/1/2006, 2, 18.00);

    outputData(Employee1);




    return 0;
}



void outputData(const &Employee1)
{
    cout << "Name: " << Employee1.getEname() << endl;
    cout << "ID-number: " << Employee1.getEid() << endl;
    cout << "Date Hired: " << Employee1.getHhired() << endl;

    if(Employee1.getShift()==1)
    cout << "Shift: First" << endl;
    if(Employee1.getshift()==2)
    cout << "Shift: Second" << endl;

    cout << "Payrate: $" << Employee1.getPayrate() << endl;
}
