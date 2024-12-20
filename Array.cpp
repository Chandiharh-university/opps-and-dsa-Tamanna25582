/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    
    cout << "Enter 10 values for the array: " << endl ;
    
    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            arr[i] = 0;  
            cout << "The Fourth element (index 3) is set to empty (null)." << endl ;
        } else {
            cout << "Enter value for element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    cout << "\nArray elements: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "";
    }

    return 0;
}