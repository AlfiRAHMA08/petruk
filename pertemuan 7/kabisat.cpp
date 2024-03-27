#include <iostream>
using namespace std;

template<class T>
class perhitunganKabisat{
    private :
        T* tahun;

    public :
        perhitunganKabisat(T* tahun) : tahun(tahun){

        }
    T* getTahun() const{
        return tahun;
    }

    void setTahun(T* tahun){
        this->tahun = tahun;
    }

    bool HitungKabisat() const {
        if(*tahun %4 == 0){
            if(*tahun % 100 == 0){
                if(*tahun % 400 == 0){
                    return true;
                } else{
                    return false;
                }
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
};

int main(){
    int tahun;
    cout << "Masukkan tahun : ";
    cin >> tahun;

    perhitunganKabisat<int> Kabisat(&tahun);
    if(Kabisat.HitungKabisat()){
        cout << *Kabisat.getTahun() << " adalah tahun kabisat" << endl;
    }else{
        cout << *Kabisat.getTahun() << " bukan tahun kabisat" << endl;
    }

    return 0;
}