/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string reverseInput(const string& input) {
    string reversed = input; 
    int n = input.length();

    for (int i = 0; i < n / 2; i++) {
        swap(reversed[i], reversed[n - i - 1]);
    }

    return reversed;
}

int main() {
    string input;

    cout << "Enter a character, number, word, or any sequence: ";
    cin >> input;

    string reversed = reverseInput(input);
    cout << "The reversed sequence is: " << reversed << endl;

    return 0;
}