#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cctype>

using namespace std;

struct weatherstats
{
    int totalRain;
    int hight;
    int lowt;
};


int main()
{

    weatherstats months [12];
    string input;
    char input1;
    int x = 13;

    string monthNames [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string check;


    cout << "Weather Statistics";
    cout << endl << endl;


        cout << "Please enter the relevant information for each month.";
        cout << endl << "Temperatures are in Fahrenheit." << endl;



            for(x=0; x<12; x++)
            {
                cout << monthNames[x] << endl;
                cout << endl << "       Enter total rainfall: ";
                cin >> months[x].totalRain;


                cout << endl << "       Enter highest monthly temperature: ";
                cin >> months[x].hight;
                while(months[x].hight < -100 || months[x].hight > 140)
                {
                    cout << "ERROR: Temperatures must be between -100 and 140 degrees Fahrenheit.";
                    cin >> months[x].hight;
                    cout << endl;

                }

                cout << endl << "       Enter lowest monthly temperature: ";
                cin >> months[x].lowt;
                 while(months[x].lowt < -100 || months[x].lowt > 140)
                {
                    cout << "ERROR: Temperatures must be between -100 and 140 degrees Fahrenheit.";
                    cin >> months[x].lowt;
                    cout << endl;

                }

                cout << endl << "       The average monthly temperature is: " << (months[x].hight + months[x].lowt)/2 << endl;

            }


/*
        cout << endl << "Type S if you would like to change a specific month or press any other key to continue... ";
        cin >> input1;






        while(input1 == 's' || input1 == 'S')//specific month
        {
            x =0;
            cout << endl << "Please select a month: " << endl;
            for(x=0; x<12; x++)
            {
                cout << monthNames[x];
                if(x<11)
                cout << ", ";
                if(x==11)
                cout << ".";
            }
            cin.ignore();
            cout << endl << "Enter: ";
            getline(cin, input);
            input[0] = toupper(input[0]);

            for(x=0; x<12; x++)
            {
                if(input == monthNames[x])
                {
                    cout << monthNames[x];
                    cout << endl << "       Enter total rainfall: ";
                    cin >> months[x].totalRain;

                    cout << endl << "       Enter highest monthly temp: ";
                    cin >> months[x].hight;
                     while(months[x].hight < -100 || months[x].hight > 140)
                {
                    cout << "ERROR: Temperatures must be between -100 and 140 degrees Fahrenheit.";
                    cin >> months[x].hight;
                    cout << endl;

                }

                    cout << endl << "       Enter lowest monthly temperature: ";
                    cin >> months[x].lowt;
                    while(months[x].lowt < -100 || months[x].lowt > 140)
                {
                    cout << "ERROR: Temperatures must be between -100 and 140 degrees Fahrenheit.";
                    cin >> months[x].lowt;
                    cout << endl;

                }

                    cout << endl << "       The average monthly temperature is " << (months[x].hight + months[x].lowt)/2 << endl;
                }
            }

            cout << "Type S to enter another month or anything else to continue... ";
            cin >> input1;
        }//specific month closing bracket

*/



x = 0;
cout << endl;
cout << "Statistics for each month: " << endl;
int hold = 0, hold1 = 0, hold2 = 0, hold3 = 0;
int hightemp = months[0].hight, lowtemp = months[0].lowt;
for(x=0; x < 12; x++)
{
    hold = months[x].totalRain + hold;
    hold1 = months[x].hight + hold1;
    hold2 = months[x].lowt + hold2;

    if(hightemp < months[x].hight)
        hightemp = months[x].hight;
    if(lowtemp > months[x].lowt)
        lowtemp = months[x].lowt;

}
hold1 = hold1/12;
hold2 = hold2/12;
int averagetemp = (hold1+hold2)/2;
    cout << "   Total Rainfall: " << hold << endl;
    cout << "   Average monthly rain: " << hold/12 << endl;
    cout << "   Average Monthly Temperature: " << averagetemp << endl;
    cout << "   Highest Temperature: " << hightemp << endl;
    cout << "   Lowest Temperature: " << lowtemp << endl;

char val;
cout << "Press any key to close the program...";
cin >> val;
cout << "Process complete.";


return 0;
}


/*
The program should output :

total rainfall
Average Monthly Rain: The average monthly rain is  total rain of 12 months then divided by 12.
Average Monthly Average Temperature:
The monthly average Temp is (monthly high temp + monthly low temp)/2.

The average monthly average temp is to add all 12 months' monthly average Temp and then divided by 12.

Highest Temp and Lowest Temp during the year and the months they occurred in.




Please use an array of 12 elements of the defined structure and loop to input the records. Also note the temperature input validation in the question.  (It is not required to validate highT >=LowT).

 */
