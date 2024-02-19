#include <iostream>
using namespace std;

class Polygon {
public:
    virtual float area() = 0; 
    

    // Function to display the area
    void displayArea() {
        cout << "Area: " << area() <<endl;
    }
};

class Triangle : public Polygon {
private:
    float base;
    float height;
public:
    Triangle(float b, float h) : base(b), height(h) {}

    float area() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Polygon {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() {
        return length * width;
    }
};

class Square : public Polygon {
private:
    float side;
public:
    Square(float s) : side(s) {}

    float area() {
        return side * side;
    }
};

int main() {
    float base, height, length, width, side;

    
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the side of the square: ";
    cin >> side;

    //  objects of different polygons
    Triangle triangle(base, height);
    Rectangle rectangle(length, width);
    Square square(side);

    
    cout << "Triangle ";
    triangle.displayArea();

    cout << "Rectangle ";
    rectangle.displayArea();

    cout << "Square ";
    square.displayArea();

    return 0;
}
