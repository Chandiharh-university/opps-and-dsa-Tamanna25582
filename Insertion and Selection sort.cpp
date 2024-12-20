/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    cout << "\nInsertion Sort:\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;

            cout << "Swapped: " << arr[j + 1] << " and " << arr[j + 2] << endl;
        }
        arr[j + 1] = key;
        
        cout << "Array after insertion: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void selectionSort(int arr[], int n) {
    cout << "\nSelection Sort:\n";
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            cout << "Swapped: " << arr[i] << " and " << arr[minIndex] << endl;
        }

        cout << "Array after selection: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    int arrInsertion[n], arrSelection[n];
    
    for (int i = 0; i < n; i++) {
        arrInsertion[i] = arr[i];
    }
    insertionSort(arrInsertion, n);
    
    for (int i = 0; i < n; i++) {
        arrSelection[i] = arr[i];
    }
    selectionSort(arrSelection, n);

    return 0;
}