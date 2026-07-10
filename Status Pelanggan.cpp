#include <iostream>
#include <string>
using namespace std;

class HargaLayanan {
public:
    double tentukanHarga(string &layanan) {

        while (layanan != "Cuci Kering" &&
               layanan != "cuci kering" &&
               layanan != "Cuci Setrika" &&
               layanan != "cuci setrika") {

            cout << "Jenis layanan tidak tersedia!\n";
            cout << "Masukkan kembali jenis layanan : ";
            getline(cin, layanan);
        }

        if (layanan == "Cuci Kering" || layanan == "cuci kering") {
            return 7000;
        }
        else {
            return 9000;
        }
    }
};

class Diskon {
public:
    double hitungDiskon(double berat, double totalHarga) {

        if (berat >= 10) {
            return totalHarga * 0.20;  
        }
        else if (berat >= 5) {
            return totalHarga * 0.10;   
        }
        else {
            return 0;                   
        }

    }
};

class StatusPelanggan {
public:
    string tentukanStatus(double beratKg) {

        if (beratKg <= 3) {
            return "Express";
        }
        else {
            return "Normal";
        }

    }
};

class DataLaundry {
private:
    string namaPelanggan;
    string jenisLayanan;
    string statusPelanggan;
    
    double beratKg;
    double hargaPerKg;
    double totalHarga;
    double diskon;
    double totalBayar;

public:
    void inputData() {

        cout << "===== INPUT DATA LAUNDRY =====\n";

        cout << "Nama Pelanggan : ";
        getline(cin, namaPelanggan);

        cout << "Jenis Layanan (Cuci Kering/Cuci Setrika) : ";
        getline(cin, jenisLayanan);

        cout << "Berat Pakaian (kg) : ";
        cin >> beratKg;
        cin.ignore();

        HargaLayanan H;
        hargaPerKg = H.tentukanHarga(jenisLayanan);

    }

    void prosesHitung() {

        totalHarga = beratKg * hargaPerKg;

        Diskon D;
        diskon = D.hitungDiskon(beratKg, totalHarga);

        totalBayar = totalHarga - diskon;
        
        StatusPelanggan S;
		statusPelanggan = S.tentukanStatus(beratKg);

    }

    void cetakStruk() {

        cout << "\n=====================================\n";
        cout << "========== STRUK LAUNDRY ==========\n";
        cout << "Nama Pelanggan : " << namaPelanggan << endl;
        cout << "Jenis Layanan  : " << jenisLayanan << endl;
        cout << "Berat          : " << beratKg << " kg" << endl;
        cout << "Harga per kg   : Rp" << hargaPerKg << endl;
        cout << "Total Harga    : Rp" << totalHarga << endl;
        cout << "Diskon         : Rp" << diskon << endl;
        cout << "Total Bayar    : Rp" << totalBayar << endl;
        cout << "Status Laundry : " << statusPelanggan <<endl;
        cout << "=====================================\n";

    }
};

int main() {

    cout << "======== SISTEM LAUNDRY ========\n\n";

    DataLaundry laundry;

    laundry.inputData();
    laundry.prosesHitung();
    laundry.cetakStruk();

    return 0;
}
