#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

void jokes(ifstream &);

void punch(ifstream &);

int main()
{
    ifstream joke, pline;
    string str1, str2;
    char temp;
    cout << "This program will print a joke and its punch line.";

    cout << endl << endl;
    cout << "Enter the name of the file holding the joke (joke.txt): ";
    getline(cin, str1);
    cout << endl;

     cout << "Enter the name of the file holding the punchline (punchline.txt): ";
    getline(cin, str2);
    cout << endl;

   joke.open(str1, ios::in);
   pline.open(str2, ios::in);

   if(joke.fail())
   {
       cout << "Could not open " << str1 << " file. Press any key to continue...";
       cin >> temp;
       exit(1);
   }
   if(pline.fail())
   {
       cout << "Could not open " << str2 << " file. Press any key to continue...";
       cin >> temp;
       exit(1);
   }


jokes(joke);
punch(pline);




    pline.close();
    joke.close();

    cout << endl << "Program completed. Press any key to continue... ";
    cin >> temp;

    return 0;
}



void jokes(ifstream &joke)
{
        string line;
        string s1 = ".";


    while(joke >> line)
    {
        cout << line << " ";
        if(line.find(s1) != string::npos)
            cout << endl;
    }

}



void punch(ifstream &pline)
{

    char ch;
    int x = -1, y = 1, pos = 50;
    char arr [50];
    int size = 1;

   pline.seekg(0, ios::end);

while(pos > 0)
{
    pline.seekg(x, ios::end);

    pline.get(arr[pos]);
    pos--;
    x--;

}

pos=50;//end of array


char flip[50];
int loc = 50, cnt;
pos = 50;
while(pos > 0 && arr[pos] != '\n')
{

    flip[pos] = arr[pos];


    pos--;
}

loc = pos+1;
cout << endl << endl;
while(loc<50)
{
    if(isprint(flip[loc]))
    cout << flip[loc];

    loc++;

}
}




/*
Write a program that reads and prints a joke and its punch line from two different files.
The first file contains a joke, but not its punch line.
 The second file has the punch line as its last line, preceded by “garbage.”
The main function of your program should open the two files then call two functions, passing each one the file it needs.
The first function should read and display each line in the file it is passed (the joke file).
The second function should display only the last line of the file it is passed (the punch line file).
 It should find this line by seeking to the end of the file and then backing up to the beginning of the last line.
 Data to test your program can be found in the joke.txt and punchline.txt files.
 */
