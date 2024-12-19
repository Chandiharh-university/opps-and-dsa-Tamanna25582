/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter a positive integer to calculate the sum of natural numbers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        int sum = sumOfNaturalNumbers(n);
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}