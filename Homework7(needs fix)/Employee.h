#ifndef Employee_H_
#define Employee_H_
#include <string>
using namespace std;
//Employee and ProductionWorker Classes

class Employee
{
    private:
        string Ename;
        int Eid;
        string Hdate;

    public:
        //constructors and accessors declarations
        Employee() // default constructor
        {
            Ename = " ";
            Eid = 0;
            Hdate = " ";
        }

        Employee(string name, int id, string date) //parameter constructor
        {
            Ename = name;
            Eid = id;
            Hdate = date;
        }

        //accessors
        string getEname() const
        { return Ename; }

        string getEid() const
        { return Eid; }

        string getHdate() const
        { return Hdate; }


};



#endif
