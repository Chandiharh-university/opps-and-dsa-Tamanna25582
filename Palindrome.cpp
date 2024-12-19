/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& input) {
    int start = 0;
    int end = input.length() - 1;

    while (start < end) {
        if (input[start] != input[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}

int main() {
    string input;

    cout << "Enter a word, phrase, or number to check if it's a palindrome: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome!" << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}