//write a program to create a class rectangle and pass two rectangle objects to functions to find which has greater area.//write a program to create a class Rectangle and pass two rectangle objects to functions to find which has greater area. 
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }
};

void greaterArea(Rectangle r1, Rectangle r2) {
    if (r1.area() > r2.area())
        cout << "Rectangle 1 has greater area." << endl;
    else if (r2.area() > r1.area())
        cout << "Rectangle 2 has greater area." << endl;
    else
        cout << "Both rectangles have equal area." << endl;
}

int main() {
    Rectangle r1, r2;

    cout << "Enter details of Rectangle 1:" << endl;
    r1.getData();

    cout << "Enter details of Rectangle 2:" << endl;
    r2.getData();

    greaterArea(r1, r2);

    return 0;
}