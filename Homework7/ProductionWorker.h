#ifndef PRODUCTION_WORKER_H_
#define PRODUCTION_WORKER_H_
#include "Employee.h"

// ProductionWorker class derived from the Employee class
class ProductionWorker : public Employee
{
    private:
        int shiftNum;
        double hourlyPR;

    public:
        ProductionWorker() : Employee()
        {
            shiftNum = 0;
            hourlyPR = 0.0;
        }


        ProductionWorker(string name, int number, string hireDate, int shift, double PR) :
                  Employee(name, number, hireDate)
        {
            shiftNum = shift;
            hourlyPR = PR;
        }

        // Accessors
        int getShift() const
        { return shiftNum; }

        double getHourlyPR() const
        { return hourlyPR; }
};

#endif
