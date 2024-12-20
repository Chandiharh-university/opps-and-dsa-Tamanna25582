/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            
                cout << "Swapped " << arr[j + 1] << " and " << arr[j] << ": ";
                for (int k = 0; k < n; k++) {
                    cout << arr[k] << " "; 
                }
                cout << endl;
            }
        }
    }
}

int main() {
    int n;
    
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}