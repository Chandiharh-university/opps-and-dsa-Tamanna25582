/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void printTable(int number, int range) {
    cout << "Multiplication Table for " << number << ":\n";
    for (int i = 1; i <= range; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int number, range;

    cout << "Enter the number to generate its multiplication table: ";
    cin >> number;

    cout << "Enter the range for the table (e.g., up to 10): ";
    cin >> range;

    printTable(number, range);

    return 0;
}