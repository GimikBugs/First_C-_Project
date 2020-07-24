#include <iostream>
using namespace std;

int main()
{
    int userval = 0;
    while(userval != 3);
    {
        cout << " 1 - Addition\n";
        cout << " 2 - Subtraction\n";
        cout << " 3 - Exit Program\n";
        cout << "Insert a numer: ";
        cin >> userval;
        cin.ignore();

        switch (userval) {

            case 1:
                cout << "Addition code\n";
                break;

            case 2:
                cout << "Subtraction code\n";
                break;
        }
    }

    cout << "Bye!";
    cin.ignore();
    return 0;
}