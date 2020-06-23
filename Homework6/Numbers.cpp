#include "Numbers.h"
#include <iomanip>
#include <iostream>
#include <locale>
using std::cout;
using std::cin;





//static variables------------------------------
string Numbers::lessthanTwenty[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

string Numbers::greaterthanTwenty[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";



//Constructor-------------
Numbers::Numbers(int pos)
{
    number = pos;
}






//Accessor for strings
string Numbers::createGreater(int pos)
{
    string Temps = "";

    if (pos < 20)
    {
        return Temps = lessthanTwenty[pos];
    }
    else if (pos >= 20 && pos % 10 == 0)
    {
        return Temps = greaterthanTwenty[pos / 10];
    }
    else
    {
        return Temps = greaterthanTwenty[pos / 10] + " " + lessthanTwenty[pos % 10];
    }
}

//Print function
void Numbers::print()
{
    string temp = "";

    if (getNumber() < 100)
    {
        temp.append(createGreater(getNumber()));
    }
    else if (getNumber() < 1000)
    {
        temp.append(lessthanTwenty[(getNumber() / 100)] + " " + hundred + " " +
                                 createGreater(getNumber() % 100));
    }
    if (getNumber() > 999)
    {
        temp.append(lessthanTwenty[getNumber() / 1000] + " " + thousand + " ");

        if (getNumber() % 1000 < 100)
        {
            temp.append(createGreater(getNumber() % 1000));
        }
        else
        {
            temp.append(lessthanTwenty[(getNumber() % 1000) / 100] + " " + hundred + " and " +
                                     createGreater(getNumber() % 100));
        }
    }

    temp[0]=toupper(temp[0]);
    cout << "Word Conversion: " << temp << " dollar(s)\n";
}




int main()
{
    char reply = ' ';
    int num = 0;

    cout << "\tDollar Number's Converter\n";
    cout << std::endl << "Description: This program will convert a numerical dollar amount to a word format.  Ex: 10 is converted to ten."
                    << std::endl << "Enter a negative number to terminate the program";
    cout << "\nEnter a dollar amount between 0 and 9999\n" << std::endl;
    do
    {

        cout << "\nEnter numerical amount: ";
        cin >> num;

        while (num > 9999)
        {
            cout << "\nError!\n";
            cout << "Please enter a dollar amount in the range of 0 through 9999: ";
            cin >> num;
        }
        if(num < 0)
            break;

        Numbers number(num);
        number.print();

       // cout << "\nDo you wish to convert another dollar amount? Type Y to try again or N to exit...";
       // cin >> reply;


    } while (num >= 0);

    cout << "Program terminated...";
    cin >> num;
    cin.get();
    cin.ignore();
    return 0;
}



