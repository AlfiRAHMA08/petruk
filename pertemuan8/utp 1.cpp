#include <iostream>
using namespace std;

template <class T>
class Trapezoid {
public:
    T base1, base2, height;

    Trapezoid(T b1 = 0, T b2 = 0, T h = 0) : base1(b1), base2(b2), height(h) {}

    void display() {
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << endl;
    }
};