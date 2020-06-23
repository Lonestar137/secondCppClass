#include "ProductionWorker.h"

#include <iomanip>
using std::setprecision;
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::left;
using std::right;
using std::fixed;

void outputData(const ProductionWorker &);

int main()
{
    // Create a ProductionWorker object
    ProductionWorker worker("John Jones", 123, "01/01/2000", 2, 18);

    // Output data
   cout << "Employee Database Info:" << std::endl;
    outputData(worker);


    cin.get();
    cin.ignore();
    return 0;
}

void outputData(const ProductionWorker &worker)
{
    cout << left  << setw(12) << "Name: "
          << right << worker.getEmpName() << "\n"
          << left  << setw(12) << "ID-Number: "
          << right << worker.getEmpID() << "\n"
          << left  << setw(11) << "Date Hired: "
          << right << worker.getEmpDateHired() << "\n\n";

    worker.getShift() == 1 ? cout << "Assigned Shift: Day\n" :
                                     cout << "Assigned Shift: Night\n";

    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Payrate: $ "
          << right << worker.getHourlyPayRate() << "\n\n";
}
