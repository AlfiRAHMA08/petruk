#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

template <typename T>
class Kite {
    T diagonal1, diagonal2;
    
public:
    Kite(T myDiagonal1 = 10, T myDiagonal2 = 10) : diagonal1(myDiagonal1), diagonal2(myDiagonal2) {}
        
    void setDiagonal1(T new_diagonal1) {
        diagonal1 = new_diagonal1;
    }
    void setDiagonal2(T new_diagonal2) {
        diagonal2 = new_diagonal2;
    }
    T getDiagonal1() {
        return diagonal1;
    }
    T getDiagonal2() {
        return diagonal2;
    }
    
    T calculateArea() {
        return 0.5 * diagonal1 * diagonal2;
    }
    
    T calculatePerimeter() {
        // Menghitung sisi layang-layang menggunakan Pythagoras
        T side = sqrt(pow((diagonal1 / 2), 2) + pow((diagonal2 / 2), 2));
        return 2 * (side + side);
    }
};

