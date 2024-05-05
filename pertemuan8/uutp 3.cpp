#include <iostream>
#include <cmath>
using namespace std;

template <class T>
class Trapezoid{
private:
    T base1, base2, height;

public:
    Trapezoid() : base1(10), base2(10), height(10) {} 

    Trapezoid(T b1, T b2, T h) : base1(b1), base2(b2), height(h) {} 

    void setBase1(T b) { base1 = b; }
    void setBase2(T b) { base2 = b; }
    void setHeight(T h) { height = h; }

    T getBase1() const { return base1; }
    T getBase2() const { return base2; }
    T getHeight() const { return height; }

    void display() {
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << endl;
    }

    T calculateArea() const {
        return (base1 + base2) * height / 2;
    }

    T calculatePerimeter() const {
        T side1 = base1;
        T side2 = base2;
        T side3 = sqrt(pow((base2 - base1) / 2, 2) + pow(height, 2));
        return side1 + side2 + 2 * side3;
    }
};

