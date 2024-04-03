#include <iostream>
using namespace std;

template<class T>
class perhitungantanggalbulantahun{
private:
    T tanggal;
    T bulan;
    T tahun;

public:
    perhitungantanggalbulantahun(T h, T b, T t) : tanggal(h), bulan(b), tahun(t) {}

    T getTanggal() const {
        return tanggal;
    }
    T getBulan() const {
        return bulan;
    }
    T getTahun() const {
        return tahun;
    }

    void hitungUmur(const perhitungantanggalbulantahun &tanggalSekarang) const {
        int umurTahun = tanggalSekarang.getTahun() - tahun;
        int umurBulan = tanggalSekarang.getBulan() - bulan;
        int umurHari = tanggalSekarang.getTanggal() - tanggal;

        if (umurHari < 0) {
            umurBulan--;
            umurHari += jumlahHariDalamBulan(tanggalSekarang.getBulan(), tanggalSekarang.getTahun());
        }
        if (umurBulan < 0) {
            umurTahun--;
            umurBulan += 12;
        }

        cout << "Umur Anda: " << umurTahun << " tahun, " << umurBulan << " bulan, " << umurHari << " hari" << endl;
    }

    int jumlahHariDalamBulan(T bulan, T tahun) const {
        if (bulan == 4) {
            if (tahunKabisat())
                return 28;
            else
                return 29;
        } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    bool tahunKabisat() const {
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

    // Masukkan tanggal sekarang
    perhitungantanggalbulantahun<int> tanggalSekarang(30, 3, 2024); // contoh: tanggal saat ini 30 Maret 2024

    perhitungantanggalbulantahun<int> tanggalLahir(tanggal, bulan, tahun);

    // Hitung umur
    tanggalLahir.hitungUmur(tanggalSekarang);

    // Contoh penggunaan metode untuk mengecek apakah tahun kabisat
    if (tanggalLahir.tahunKabisat()) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}
