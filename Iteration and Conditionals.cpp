#include <iostream>
using namespace std;

// Global Variables Here

int main()
{
// Local Variables Here

    int user_value;

    cout << "Insert a number: ";
    cin >> user_value;
    cin.ignore();

// If else statment

    if(user_value < 10)
    {
        cout << "The value is less than 10.";
    }else{
        cout << "The value is greater than 10." << endl;
    }

    cout << "Press Enter to exit...";

    cin.ignore();
    return 0;

}