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

class KonfirmasiTransaksi {
public:
    bool konfirmasi() {

        char jawab;

        while (true) {

            cout << "\nApakah data sudah benar? (Y/T) : ";
            cin >> jawab;
            cin.ignore();

            if (jawab == 'Y' || jawab == 'y') {
                return true;
            }
            else if (jawab == 'T' || jawab == 't') {
                return false;
            }
            else {
                cout << "Pilihan tidak valid! Masukkan Y atau T.\n";
            }

        }

    }
};

class EstimasiIteratif {
public:
    int hitungEstimasi(string status) {

        int estimasi = 0;

        if (status == "Express") {

            for (int i = 1; i <= 1; i++) {
                estimasi++;
            }

        }
        else {

            for (int i = 1; i <= 3; i++) {
                estimasi++;
            }

        }

        return estimasi;
    }
};

class EstimasiRekursif {
public:

    int hitungEstimasi(int hari) {

        if (hari == 0) {
            return 0;
        }

        return 1 + hitungEstimasi(hari - 1);

    }

    int estimasiHari(string status) {

        if (status == "Express") {
            return hitungEstimasi(1);
        }
        else {
            return hitungEstimasi(3);
        }

    }
};

class PerbandinganEstimasi {
public:

    void prosesIteratif(int hari) {

        for (int i = 1; i <= hari; i++) {
            cout << "Hari ke-" << i << endl;
        }

    }

    void prosesRekursif(int hari) {

        if (hari == 0) {
            return;
        }

        cout << "Hari ke-" << hari << endl;
        prosesRekursif(hari - 1);

    }

    void tampilkanPerbandingan(int estimasiIteratif, int estimasiRekursif) {

        cout << "\n===== PERBANDINGAN METODE =====\n";

        cout << "\nProses Iteratif\n";
        cout << "-------------------------\n";
        prosesIteratif(estimasiIteratif);

        cout << "\nProses Rekursif\n";
        cout << "-------------------------\n";
        prosesRekursif(estimasiRekursif);

        cout << "\nHasil Iteratif : "
             << estimasiIteratif << " Hari" << endl;

        cout << "Hasil Rekursif : "
             << estimasiRekursif << " Hari" << endl;

        cout << "\nKesimpulan :\n";

        if (estimasiIteratif == estimasiRekursif) {

            cout << "- Iteratif menggunakan perulangan (for)." << endl;
            cout << "- Rekursif menggunakan pemanggilan fungsi." << endl;
            cout << "- Kedua metode menghasilkan estimasi yang sama."
                 << endl;

        }
        else {

            cout << "- Hasil kedua metode berbeda." << endl;

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
    int estimasiHari;
    int estimasiHariRekursif;

public:
    void inputData() {

    bool benar = false;

    while (!benar) {

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

        KonfirmasiTransaksi K;
        benar = K.konfirmasi();

        if (!benar) {
            cout << "\nSilakan masukkan kembali data pelanggan.\n\n";
        }

    }

}

    void prosesHitung() {

        totalHarga = beratKg * hargaPerKg;

        Diskon D;
        diskon = D.hitungDiskon(beratKg, totalHarga);

        totalBayar = totalHarga - diskon;
        
        StatusPelanggan S;
		statusPelanggan = S.tentukanStatus(beratKg);
		
		EstimasiIteratif EI;
		estimasiHari = EI.hitungEstimasi(statusPelanggan);
		
		EstimasiRekursif ER;
		estimasiHariRekursif = ER.estimasiHari(statusPelanggan);

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
		cout << "Estimasi Selesai : " << estimasiHari << " Hari" << endl;
		cout << "Estimasi Rekursif : " << estimasiHariRekursif << " Hari" << endl;
        cout << "=====================================\n";
        
        PerbandinganEstimasi PE;
		PE.tampilkanPerbandingan(estimasiHari, estimasiHariRekursif);

    }
};

class InputBanyak {
public:
    void inputTransaksiBanyak() {

        int jumlah;

        cout << "\n===== INPUT BANYAK TRANSAKSI =====\n";
        cout << "Masukkan jumlah transaksi : ";
        cin >> jumlah;
        cin.ignore();

        for (int i = 1; i <= jumlah; i++) {

            cout << "\n=====================================\n";
            cout << "        TRANSAKSI KE-" << i << endl;
            cout << "=====================================\n";

            DataLaundry laundry;

            laundry.inputData();
            laundry.prosesHitung();
            laundry.cetakStruk();
        }
    }
};

class MenuLaundry {
public:
    void menu() {

        int pilih;

        do {

            cout << "\n===== MENU LAUNDRY =====\n";
            cout << "1. Input Data Laundry\n";
            cout << "2. Input Banyak Transaksi\n";
            cout << "3. Keluar\n";
            cout << "Pilih Menu : ";
            cin >> pilih;
            cin.ignore();

            if (pilih == 1) {

                DataLaundry laundry;

                laundry.inputData();
                laundry.prosesHitung();
                laundry.cetakStruk();

            }
            else if (pilih == 2) {

                InputBanyak input;

                input.inputTransaksiBanyak();

            }
            else if (pilih == 3) {

                cout << "\nTerima kasih telah menggunakan Sistem Laundry.\n";

            }
            else {

                cout << "\nMenu tidak tersedia!\n";

            }

        } while (pilih != 3);

    }
};

int main() {

    cout << "======== SISTEM LAUNDRY ========\n";

    MenuLaundry menu;
    menu.menu();

    return 0;
}
