#include <iostream>
using namespace std;

int main()
{
    int base, height;
    cout << "Insert base: ";
    cin >> base;
    cout << "Insert the height: ";
    cin >> height;
    cin.ignore();
    cout << endl;

    for(int i = 0; height; i++){
        for(int j = 0; j < base; j++) {
            cout << " *";
        }
    cout << endl;

    }
    cin.ignore();
    return 0;
}