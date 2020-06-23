#ifndef NUMBERS_H_
#define NUMBERS_H_

#include <string>
using std::string;

class Numbers
{
    private:
        int number;

        static string lessthanTwenty[20];
        static string greaterthanTwenty[10];
        static string hundred;
        static string thousand;

    public:
        Numbers(int);

        string createGreater(int);
        void print();

        int getNumber() const
        { return number; }
};

#endif
