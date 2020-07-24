// This is my first program in C++

#include <iostream>
using namespace std;

// This is a global variable

int global_variable = 4;


int main ()
{
// These are local varialbes 
    int a = 0;
    int b = 2;
    int sum = a + b;
    int userval;

// Calling the local variables

    cout << "The value of variable sum is: " << sum << endl;

    a = 3;

    sum = a + b;

    cout << "The value of variable sum is: " << sum << endl;

//Calling the global variable

    cout << "This is the value of the global variable: " << global_variable << endl;

// Getting user input

    cout << "Please enter a number: ";
    cin >> userval;

// Repeating user value and adding 10

    cout << "The number you entered was: " << userval;
    cout << " and your number, plus 10 is: " << userval + 10 << endl;

// Cleaning bugger and reading return value
    cin.ignore();
    cout << "Press Enter to exit...";

// Preventing console from closing ^^
    cin.ignore();
    return 0;

}


