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

class HitungTotalRekursif {
public:

    double hitungTotal(double totalArr[], int n) {

        if (n <= 0) {
            return 0;
        }

        return totalArr[n - 1] + hitungTotal(totalArr, n - 1);
    }

};

class HitungBeratRekursif {
public:

    double hitungBerat(double beratArr[], int n) {

        if (n <= 0) {
            return 0;
        }

        return beratArr[n - 1] + hitungBerat(beratArr, n - 1);
    }

};

class HitungJumlahPelanggan {
public:

    int hitungJumlah(int n) {

        if (n <= 0) {
            return 0;
        }

        return 1 + hitungJumlah(n - 1);
    }

};

class ArrayNama {
private:
    string namaArr[100];
    int jumlah;

public:
    ArrayNama() {
        jumlah = 0;
    }

    void tambahData(string nama) {
        namaArr[jumlah] = nama;
        jumlah++;
    }

    void tampilkanData() {
        cout << "\nDaftar Nama Pelanggan\n";
        cout << "-------------------------\n";
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << namaArr[i] << endl;
        }
    }

    string getNama(int index) {
        return namaArr[index];
    }

    int getJumlah() {
        return jumlah;
    }
};

class ArrayBerat {
private:
    double beratArr[100];
    int jumlah;

public:
    ArrayBerat() {
        jumlah = 0;
    }

    void tambahData(double berat) {
        beratArr[jumlah] = berat;
        jumlah++;
    }

    void tampilkanData() {
        cout << "\nDaftar Berat Cucian\n";
        cout << "-------------------------\n";
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << beratArr[i] << " kg" << endl;
        }
    }

    double getBerat(int index) {
        return beratArr[index];
    }

    int getJumlah() {
        return jumlah;
    }
    
    double* getArray() {
        return beratArr;
    }
};

class ArrayTotal {
private:
    double totalArr[100];
    int jumlah;

public:
    ArrayTotal() {
        jumlah = 0;
    }

    void tambahData(double total) {
        totalArr[jumlah] = total;
        jumlah++;
    }

    void tampilkanData() {
        cout << "\nDaftar Total Pembayaran\n";
        cout << "-------------------------\n";
        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". Rp" << totalArr[i] << endl;
        }
    }

    double getTotal(int index) {
        return totalArr[index];
    }

    int getJumlah() {
        return jumlah;
    }

    double* getArray() {
        return totalArr;
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

    double getTotalBayar() {
        return totalBayar;
    }

    double getBeratKg() {
        return beratKg;
    }

    string getNamaPelanggan() {
        return namaPelanggan;
    }
};

class InputBanyak {
private:
    ArrayNama AN;
    ArrayBerat AB;
    ArrayTotal AT;

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

            AN.tambahData(laundry.getNamaPelanggan());
            AB.tambahData(laundry.getBeratKg());
            AT.tambahData(laundry.getTotalBayar());
        }

        HitungTotalRekursif HTR;
        double grandTotal = HTR.hitungTotal(AT.getArray(), AT.getJumlah());

        HitungBeratRekursif HBR;
        double totalBerat = HBR.hitungBerat(AB.getArray(), AB.getJumlah());

        HitungJumlahPelanggan HJP;
        int jumlahPelanggan = HJP.hitungJumlah(jumlah);

        AN.tampilkanData();
        AB.tampilkanData();
        AT.tampilkanData();

        cout << "\n=====================================\n";
        cout << "   REKAP TOTAL TRANSAKSI (REKURSIF)\n";
        cout << "=====================================\n";
        cout << "Jumlah Pelanggan   : " << jumlahPelanggan << " orang\n";
        cout << "Total Berat Cucian : " << totalBerat << " kg\n";
        cout << "Total Pendapatan   : Rp" << grandTotal << endl;
        cout << "=====================================\n";
    }

    ArrayNama& getArrayNama() {
        return AN;
    }

    ArrayBerat& getArrayBerat() {
        return AB;
    }

    ArrayTotal& getArrayTotal() {
        return AT;
    }
};

class CariPelanggan {
public:

    void cariLinear(ArrayNama &AN, ArrayBerat &AB, ArrayTotal &AT, string kunci) {

        int jumlah = AN.getJumlah();
        bool ketemu = false;

        cout << "\n===== HASIL PENCARIAN (LINEAR SEARCH) =====\n";

        for (int i = 0; i < jumlah; i++) {

            if (AN.getNama(i) == kunci) {

                cout << "Data ditemukan pada urutan ke-" << i + 1 << endl;
                cout << "Nama  : " << AN.getNama(i) << endl;
                cout << "Berat : " << AB.getBerat(i) << " kg" << endl;
                cout << "Total : Rp" << AT.getTotal(i) << endl;
                ketemu = true;
                break;

            }

        }

        if (!ketemu) {
            cout << "Data pelanggan \"" << kunci << "\" tidak ditemukan.\n";
        }

        cout << "=============================================\n";

    }

};

class UrutNama {
public:

    void urutkanAscending(ArrayNama &AN) {

        int jumlah = AN.getJumlah();
        string temp[100];

        for (int i = 0; i < jumlah; i++) {
            temp[i] = AN.getNama(i);
        }

        for (int i = 0; i < jumlah - 1; i++) {

            for (int j = 0; j < jumlah - 1 - i; j++) {

                if (temp[j] > temp[j + 1]) {

                    string t = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = t;

                }

            }

        }

        cout << "\n===== DAFTAR NAMA PELANGGAN (ASCENDING) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << temp[i] << endl;
        }

        cout << "===============================================\n";

    }

};

class UrutTotal {
public:

    void urutkanAscending(ArrayTotal &AT) {

        int jumlah = AT.getJumlah();
        double temp[100];

        for (int i = 0; i < jumlah; i++) {
            temp[i] = AT.getTotal(i);
        }

        for (int i = 0; i < jumlah - 1; i++) {

            for (int j = 0; j < jumlah - 1 - i; j++) {

                if (temp[j] > temp[j + 1]) {

                    double t = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = t;

                }

            }

        }

        cout << "\n===== TOTAL PEMBAYARAN (ASCENDING) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". Rp" << temp[i] << endl;
        }

        cout << "===========================================\n";

    }

    void urutkanDescending(ArrayTotal &AT) {

        int jumlah = AT.getJumlah();
        double temp[100];

        for (int i = 0; i < jumlah; i++) {
            temp[i] = AT.getTotal(i);
        }

        for (int i = 0; i < jumlah - 1; i++) {

            for (int j = 0; j < jumlah - 1 - i; j++) {

                if (temp[j] < temp[j + 1]) {

                    double t = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = t;

                }

            }

        }

        cout << "\n===== TOTAL PEMBAYARAN (DESCENDING) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". Rp" << temp[i] << endl;
        }

        cout << "============================================\n";

    }

};

class MenuLaundry {
private:
    InputBanyak input;

public:
    void menu() {

        int pilih;

        do {

            cout << "\n===== MENU LAUNDRY =====\n";
            cout << "1. Input Data Laundry\n";
            cout << "2. Input Banyak Transaksi\n";
            cout << "3. Cari Pelanggan (Linear Search)\n";
            cout << "4. Urutkan Nama Pelanggan (Ascending)\n";
            cout << "5. Urutkan Total Pembayaran (Ascending/Descending)\n";
            cout << "6. Keluar\n";
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

                input.inputTransaksiBanyak();

            }
            else if (pilih == 3) {

                if (input.getArrayNama().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    string kunci;
                    cout << "\nMasukkan nama pelanggan yang dicari : ";
                    getline(cin, kunci);

                    CariPelanggan CP;
                    CP.cariLinear(input.getArrayNama(), input.getArrayBerat(), input.getArrayTotal(), kunci);

                }

            }
            else if (pilih == 4) {

                if (input.getArrayNama().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    UrutNama UN;
                    UN.urutkanAscending(input.getArrayNama());

                }

            }
            else if (pilih == 5) {

                if (input.getArrayTotal().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    char urutan;
                    cout << "\nUrutkan secara Ascending atau Descending? (A/D) : ";
                    cin >> urutan;
                    cin.ignore();

                    UrutTotal UT;

                    if (urutan == 'A' || urutan == 'a') {
                        UT.urutkanAscending(input.getArrayTotal());
                    }
                    else if (urutan == 'D' || urutan == 'd') {
                        UT.urutkanDescending(input.getArrayTotal());
                    }
                    else {
                        cout << "\nPilihan tidak valid!\n";
                    }

                }

            }
            else if (pilih == 6) {

                cout << "\nTerima kasih telah menggunakan Sistem Laundry.\n";

            }
            else {

                cout << "\nMenu tidak tersedia!\n";

            }

        } while (pilih != 6);

    }
};

int main() {

    cout << "======== SISTEM LAUNDRY ========\n";

    MenuLaundry menu;
    menu.menu();

    return 0;
}
