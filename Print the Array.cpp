/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 4) {
        cout << "The array must have at least 4 elements to start printing from index 3." << endl;
        return 1; 
    }

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Elements starting from index 3: ";
    for (int i = 3; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}