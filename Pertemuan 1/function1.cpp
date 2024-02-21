#include <iostream>
 
using namespace std;
 
int tambah(int a, int b) {
    return a + b;
}
 
int kurang(int a, int b) {
    return a - b;
}
 
int kali(int a, int b) {
    return a * b;
}
 
double bagi(int a, int b) {
    return a / b;
}
 
int main() {
    int x, y;
 
    cin >> x >> y;
 
    cout << "Hasil penjumlahan " << x << " dan " << y << " adalah " << tambah(x, y) << endl;
    cout << "Hasil pengurangan " << x << " dan " << y << " adalah " << kurang(x, y) << endl;
    cout << "Hasil perkalian " << x << " dan " << y << " adalah " << kali(x, y) << endl;
    cout << "Hasil pembagian " << x << " dan " << y << " adalah " << bagi(x, y) << endl;
}
