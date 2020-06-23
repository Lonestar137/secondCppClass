#ifndef PRODUCTION_WORKER_H_
#define PRODUCTION_WORKER_H_

#include "Employee.h"

// ProductionWorker class derived from the Employee class
class ProductionWorker : public Employee
{
    private:
        int shiftNumber;                    // The shift number (1 = day, 2 = night)
        double hourlyPayRate;            // The hourly pay rate

    public:
        // Default constructor
        ProductionWorker() : Employee()
        {
            shiftNumber = 0;
            hourlyPayRate = 0.0;
        }

        // Parameterized Constructor - passes name, number and hireDate
        // to the Employee base class
        ProductionWorker(string name, int number, string hireDate, int shift, double payRate) :
                  Employee(name, number, hireDate)
        {
            shiftNumber = shift;
            hourlyPayRate = payRate;
        }

        // Mutator functions

        // Accessor functions
        int getShift() const
        { return shiftNumber; }

        double getHourlyPayRate() const
        { return hourlyPayRate; }
};

#endif
