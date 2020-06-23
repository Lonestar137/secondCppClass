#include <iostream>

using namespace std;

void sort1(float* point, int num); //declare voids

void average1(int num, float total);



int main()
{
    float *point;
    int num;
    float total = 0;

cout << "How many test scores will be entered? ";
cin >> num;
cout << endl;
while(num <= 0)
{
    cout << endl << "The amount of test scores cannot be less than 1." << endl;
    cout << "Enter another number: ";
    cin >> num;
}
point = new float[num];


cout << "Please enter a score  "<< endl;

for (int count = 0;  count < num; count++)
{

	    cout << "Score "<< count + 1 << ": ";
	    cin  >> point[count];
	    while(point[count] <= 0)
        {
            cout << "Scores must be above zero." << endl;
            cout << "Enter another number: ";
            cin >>point[count];
        }
		total = total + point[count];
        cout << endl;

}
average1(num, total);
cout << endl << "Scores are listed in ascending order below." << endl << endl;
sort1(point, num);

 for(int loop = 0; loop < num; loop++)
     {
            cout << point[loop];
            if(loop < num-1)
            cout << ", ";
            else
            cout << ".";
     }

cout << endl << endl <<endl;
return 0;
}



void average1(int num, float total) //get the average
{
    float average;
    average = total / num;
    cout << "The average of all tests scores is " << average << ".";
}



void sort1(float* point, int num) //sort in ascending order
{
    int pos = num - 1;
    int swap = 1;
    float hold;

    while(swap)
    {
        swap = 0;
        for(int cnt = 0; cnt < pos; cnt++)
         if(point[cnt] > point[cnt + 1])
        {
            hold = point[cnt];
            point[cnt] = point[cnt + 1];
            point[cnt + 1] = hold;
            swap = 1;

        }
        pos--;
    }
}
/*
Assignment
Test Scores:

Write a program that dynamically allocates an array large enough to hold a user-defined number of test scores. Once all the scores are entered,
the array should be passed to a function that sorts them
in ascending order. Another function should be called that calculates the average score.
The program should display the sorted list of scores and averages with appropriate headings.
Use pointer notation rather than array notation whenever possible.

The book only states "Input Validation: Do not accept negative numbers for test scores." We also need to have input validation for the number of scores.
If it is negative including 0, the program halts.
We should consider this situation for 'counter' not to be negative while we have a loop to enter numbers.
So negative numbers should be rejected for the number of scores and the values of scores.
*/
