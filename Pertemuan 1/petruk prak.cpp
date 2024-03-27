#include <iostream>
#include <cmath>
using namespace std;

double integrate (int k, double a, double b){
    int n=1000;
    double f,h, sum;
    
    h= (b-a)/n;
    sum= h* (b*b + a*a)/2;
    
    for(int i =1; i<n; i++){
        k= a + i*h;
        f = k*k;
        sum = sum+ h*f;
    }
    return sum;
    }

