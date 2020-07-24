#include <iostream>
using namespace std;

// for(initialization;condition;increment) {
//  statement;    
//}


int main()
{
    int a;

    for (a = 2; a <= 50; a = a + 2) {
        cout << a << "-";

    } 

    int user_value;
    for (;;) {
        cout << "\n 1 - Addition\n 2 - Exit Program\n";
        cout << "Insert a number: ";
        cin >> user_value;
        cin.ignore();

        if (user_value == 1){
            cout << "Your addition source code here\n\n";
        
        }else if (user_value == 2) {
            cout << "Bye\n";
            cout << "Press Enter to exit...";
            break;

        }else {
            cout << "wrong data\n\n";
        }
    }
    cin.ignore();
    return 0;
}