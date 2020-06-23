#ifndef PRODUCTION_WORKER_H_
#define PRODUCTION_WORKER_H_
#include "Employee.h"

class ProductionWorker:public Employee
{
    private:
        int shiftnum;
        double hpayrate;


    public:

    // default constructor
        ProductionWorker()
        {
            shiftnum = 0;
            hpayrate = 0.0;
        }
    //parameter constructors

        ProductionWorker(string name, int number, string date, int shift, double payrate)
        {
            shiftnum = shift;
            hpayrate = payrate;
        }


    //accessors
        int getShift()const
        {return shiftnum;}

        double getPayrate()const
        {return hpayrate;}
};

#endif
