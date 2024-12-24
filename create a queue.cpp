/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 #include <iostream>
using namespace std;

class Queue {
private:
    int front;       
    int rear;        
    int size;       
    int* items;      

public:
    Queue(int s) {
        size = s;
        front = -1;
        rear = -1;
        items = new int[size]; 
    }

    ~Queue() {
        delete[] items;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == size - 1;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full. Cannot add " << element << ".\n";
            return;
        }
        if (front == -1) front = 0;  
        items[++rear] = element;
        cout << "Inserted " << element << " into the queue.\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Nothing to remove.\n";
            return -1;
        }
        int removedElement = items[front++];
        if (front > rear) {  
            front = -1;
            rear = -1;
        }
        return removedElement;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int queueSize = 5;
    Queue q(queueSize);

    q.enqueue(10);
    q.enqueue(35);
    q.enqueue(30);
    q.enqueue(25);
    q.enqueue(15);
    q.enqueue(60);  

    q.display();

    cout << "Removed element: " << q.dequeue() << endl;
    q.display();

    q.enqueue(60);  
    q.display();

    return 0;
}