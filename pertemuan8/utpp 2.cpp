#include <iostream>
using namespace std;

template <class T>
class Trapezoid{
    private:
    T base1, base2, height;

    public:
    Trapezoid () : base1(10), base2(10), height(10){}
    Trapezoid (T b1, T b2, T h) : base1(b1), base2(b2), height(h){}

    T getBase1()const {return base1; }
    T getBase2()const {return base2;}
    T getHeight()const { return height; }

    void setBase1(T b) {base1 = b;}
    void setBase2(T b) {base2 = b; }
    void setHeight(T h) {height = h;}
    
};

