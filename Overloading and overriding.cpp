/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
    
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
    
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    cout << "Addition of 2 integers: " << math.add(10, 20) << endl;
    cout << "Addition of 3 integers: " << math.add(10, 20, 30) << endl;
    cout << "Addition of 2 floats: " << math.add(10.5f, 20.5f) << endl;

    Shape *shape;
    
    Circle circle;
    Square square;

    shape = &circle;
    shape->draw(); 

    shape = &square;
    shape->draw();  

    return 0;
}