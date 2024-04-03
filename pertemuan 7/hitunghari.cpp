#include <iostream>
using namespace std;

template<class T>
class PerhitunganUmur {
private:
    T tanggal;
    T bulan;
    T tahun;

public:
    PerhitunganUmur(T tanggal, T bulan, T tahun) : tanggal(tanggal), bulan(bulan), tahun(tahun) {}

    T getTanggal() const {
        return tanggal;
    }

    void setTanggal(T tanggal) {
        tanggal = tanggal;
    }

    T getBulan() const {
        return bulan;
    }

    void setBulan(T bulan) {
        bulan = bulan;
    }

    T getTahun() const {
        return tahun;
    }

    void setTahun(T tahun) {
        tahun = tahun;
    }

    void hitungUmur(int hariSekarang, int bulanSekarang, int tahunSekarang) const {

        int umurTahun = tahunSekarang - tahun;
        int umurBulan = bulanSekarang - bulan;
        int umurHari = hariSekarang - tanggal;

        if (umurHari < 0) {
            umurBulan--;
            umurHari += jumlahHariDalamBulan(bulan, tahun);
        }
        if (umurBulan < 0) {
            umurTahun--;
            umurBulan += 12;
        }

        cout << "Umur Anda saat ini: " << umurTahun << " tahun, " << umurBulan << " bulan, " << umurHari << " hari" << endl;
    }

    int jumlahHariDalamBulan(T bulan, T tahun) const {
        if (bulan == 2) {
            if (tahunKabisat(tahun))
                return 29;
            else
                return 28;
        } else if (bulan == 4 || bulan== 6 || bulan == 9 || bulan == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    bool tahunKabisat(T tahun) const {
        if (tahun % 4 == 0) {
            if (tahun % 100 == 0) {
                if (tahun % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return true;
            }
        } else {
            return false;
        }
    }
};

int main() {
    int tanggal, bulan, tahun;
    cout << "Masukkan tanggal lahir (tanggal bulan tahun): ";
    cin >> tanggal >> bulan >> tahun;

    int hariSekarang = 2, bulanSekarang = 4, tahunSekarang = 2024;

    PerhitunganUmur<int> umur(tanggal, bulan, tahun);
    umur.hitungUmur(hariSekarang, bulanSekarang, tahunSekarang);

    if (umur.tahunKabisat(tahun)) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}
