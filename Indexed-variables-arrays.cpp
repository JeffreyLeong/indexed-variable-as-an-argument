// Illustrates the use of an indexed variable as an argument. 
// Adds 5 to each employee's allowed number of vacation days.

#include<iostream>
using namespace std;

const int NUMBER_OF_EMPLOYEES = 3;
int adjust_days(int old_days); // Returns old_days plus 5

int main()
{
    int vacation[NUMBER_OF_EMPLOYEES], number;
    // user input
    cout << "Enter allowed vacation days for employees 1 through " << NUMBER_OF_EMPLOYEES << ":\n";

    // loop and store input
    for(number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cin >> vacation[number - 1];
    for(number = 0; number < NUMBER_OF_EMPLOYEES; number++)
        vacation[number] = adjust_days(vacation[number]);
    
    // output
    cout << "The revised number of vacation days are:\n";
    for(number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
        cout << "Employee number " << number << " vacation days = " << vacation[number-1] << endl;
    return 0;
}

int adjust_days(int old_days)
{
    return (old_days + 5);
}