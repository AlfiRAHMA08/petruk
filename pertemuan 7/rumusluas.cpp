#include <iostream>
#include <cmath>
using namespace std;

class  luas{
    private:
      int panjang;
      int lebar;
      int alas;
      int tinggi;
      int r;
      int a;
      int b;
      
    public:
    int pi = M_PI;
    int d1, d2;
    void setpanjang(int panjang){
        this->panjang = panjang;
    }
    void setlebar(int lebar){
        this-> lebar = lebar;
    }
    void setalas(int alas){
        this->alas = alas;
    }
    void settinggi(int tinggi){
        this->tinggi = tinggi;
    }
    void setr(int r){
        this->r = r;
    }
    void seta(int a){
        a = a;
    }
    void setb(int b){
        b = b;
    }

    int getpanjang(){
        return panjang;
    }
    int getlebar(){
        return lebar;
    }
    int getalas(){
        return alas;
    }
    int gettinggi(){
        return tinggi;
    }
    int getr(){
        return r;
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
    int luasPersegiPjg(){
        return panjang * lebar;
    }
    int luasPersegi(){
        return panjang*panjang;
    }
    int luasSegitiiga(){
        int segitiga;
        segitiga = 0.5 * alas * tinggi;
        return segitiga;
    }
    int luasTrapesium(){
        int trapesium = 0.5 * a * b * tinggi;
        return trapesium;
    }
    int luasLingkaran(){
        int lingkaran = r * r * pi;
        return lingkaran;
    }
    int luasJJGJ(){
        int JJGJ = alas * tinggi;
        return JJGJ;
    }
    int luasKTP(){
        int ktp = 0.5 * d1*d2;
        return ktp;
    }
    int luasLYG(){
        int lyg = 0.5 * d1 * d2;
        return lyg;
    }
};

int main(){
    luas luas;
    luas.setpanjang(10);
    luas.setlebar(5);
    luas.setalas(4);
    luas.settinggi(10);
    luas.seta(5);
    luas.setb(12);
    luas.setr(14);
    int d1 = 10;
    int d2 = 12;

    cout<<"Luas persegi panjang: "<<luas.luasPersegiPjg()<<endl;
    cout<<"Luas segitiga: "<<luas.luasSegitiiga()<<endl;
    cout<<"Luas trapesium: "<<luas.luasTrapesium()<<endl;
    cout<<"Luas persegi "<<luas.luasPersegi()<<endl;
}