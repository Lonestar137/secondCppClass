#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char reply;

    do
    {

        int loc=0;
        char pass [] = "Null";



        cout << "Password must have:" << endl;
        cout << "   at least 6 characters," << endl;
        cout << "   at least one lower case character," << endl;
        cout << "   at least one upper case character," << endl;
        cout << "   at least one numeric digit." << endl;

        cout << endl << "Please enter a password: ";
        cin >> pass;

        cout << endl;

     while(loc == 0)
    {
        int alpha=0, lower=0, upper=0, numbers=0, length=0;
        for(int count = 0; count < strlen(pass); count++)
        {
            if(isalpha(pass[count]))
            alpha++;
            if(isupper(pass[count]))
            upper++;
            if(islower(pass[count]))
            lower++;
            if(isdigit(pass[count]))
            numbers++;
            if(isprint(pass[count]))
            length++;
        }

        //cout <<" Upper: " << upper << " Lower: " << lower << " Num: " << numbers << " Length: " << length << endl;





        if(upper < 1)
            {
            cout << "The password must contain at least one upper case character." << endl;
            }
        if(lower < 1)
            {
            cout << "The password must contain at least one lower case character." << endl;
            }
        if(numbers < 1)
            {
            cout << "The password must contain at least one number." << endl;
            }
        if(length < 6)
            {
            cout << "The password must be at least 6 characters long." << endl;

            }
        if(upper > 0 && lower > 0 && numbers > 0 && length > 5)
        loc++;
        else
        {
        cout << "Try again: ";
        cin >> pass;}


        }
        cout << "The password is valid." << endl;
        cout << "Would you like to enter a new password? (y/n)";
        cin >> reply;



    } while (reply == 'Y' || reply == 'y');

    if(reply != 'Y' || 'y')
    cout << endl << endl <<"Process completed.";

    return 0;

}
