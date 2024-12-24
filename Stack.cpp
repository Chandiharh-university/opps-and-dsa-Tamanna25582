/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Stack {
private:
    int* items;    
    int size;      
    int front;    
    int rear;     

public:
    
    Stack(int stackSize) {
        size = stackSize;
        items = new int[size];
        front = -1; 
        rear = -1;
    }

    ~Stack() {
        delete[] items;
    }

    void push(int value) {
        if (rear == size - 1) {
            cout << "Stack overflow! Cannot push " << value << endl;
            return;
        }

        if (front == -1) {
            front = 0; 
        }

        items[++rear] = value;
        cout << "Pushed: " << value << endl;
    }
    int pop() {
        if (rear == -1) {
            cout << "Stack underflow! Cannot pop." << endl;
            return -1; 
        }

        int poppedItem = items[rear--];

        if (rear == -1) {
            front = -1; 
        }

        return poppedItem;
    }

    int peek() {
        if (rear == -1) {
            cout << "Stack is empty!" << endl;
            return -1; 
        }

        return items[rear];
    }

    bool isEmpty() {
        return rear == -1;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void display() {
        if (rear == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Stack contents: ";
        for (int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int stackSize;
    cout << "Enter the size of the stack: ";
    cin >> stackSize;

    Stack stack(stackSize);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    cout << "Popped: " << stack.pop() << endl;
    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    stack.push(40);
    stack.display();

    return 0;
}
