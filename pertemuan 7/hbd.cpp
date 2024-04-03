//ZAHRA AGRIPHINNA (2357051022)

#include <iostream>
using namespace std;

template<class T>

class PerhitunganUmur{
    private:
        T tanggalLahir, bulanLahir, tahunLahir;

    public:
        PerhitunganUmur(T tanggal, T bulan, T tahun) : tanggalLahir(tanggal), bulanLahir(bulan), tahunLahir(tahun){
        }

        T getTanggalLahir() const{
            return tanggalLahir;
        }
        T getBulanLahir() const{
            return bulanLahir;
        }
        T getTahunLahir() const{
            return tahunLahir;
        }

        void setTanggalLahir(T tanggal){
            tanggalLahir = tanggal;
        }
        void setBulanLahir(T bulan){
            bulanLahir = bulan;
        }
        void setTahunLahir(T tahun){
            tahunLahir = tahun;
        }

    void MenghitungUmur(T tanggalSekarang, T bulanSekarang, T tahunSekarang){
        T tahun = tahunSekarang - tahunLahir;
        T bulan = bulanSekarang - bulanLahir;
        T hari = tanggalSekarang - tanggalLahir;

        if (hari < 0){
            bulan--;
            hari += jumlahHariDalamBulan(bulanLahir, tahunLahir);
        }
        if (bulan < 0){
            tahun--;
            bulan += 12;
        }
        cout << "Umur Anda adalah " << tahun << " tahun " << bulan << " bulan " << hari << " hari" << endl;
    }

    T jumlahHariDalamBulan(T bulan, T tahun){
        if (bulan == 2){
            return TahunKabisat(tahun) ? 29 : 28;
        } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
            return 30;
        } else {
            return 31;
        }
    }
    bool TahunKabisat(T tahun){
        return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
    }
};

int main(){
    int tanggalLahir, bulanLahir, tahunLahir;
    cout << "Masukkan tanggal, bulan, dan tahun lahir anda : ";
    cin >> tanggalLahir >> bulanLahir >> tahunLahir;

    int tanggalSekarang = 31, bulanSekarang = 3, tahunSekarang = 2024;

    PerhitunganUmur<int> PerhitunganUmur(tanggalLahir, bulanLahir, tahunLahir);
    PerhitunganUmur.MenghitungUmur(tanggalSekarang, bulanSekarang, tahunSekarang);

    return 0;
}