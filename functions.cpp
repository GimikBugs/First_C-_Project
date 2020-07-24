#include <iostream>
using namespace std;

// Function definition
int sum (int x, int y) {

    int z;
    z = x + y;
    return(z);

}

int main() 
{
    int a, b, result;
    cout << "Please enter two numbers: " <<endl;
    cin >> a;
    cin.ignore();
    cin >> b;
    cin.ignore();

// Function call
    result = sum(a,b);

    cout << "The result of " << a << " + " << b << " is " << result;
    cout << "\nPress Enter to exit...";

    cin.ignore();

}