#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
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

    string* getArray() {
        return namaArr;
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

    string getJenisLayanan() {
        return jenisLayanan;
    }

    int getEstimasiHari() {
        return estimasiHari;
    }
};

class DataTransaksi {
private:
    string tabel[100][4];  
    int jumlah;

public:
    DataTransaksi() {
        jumlah = 0;
    }

    void tambahData(string nama, string layanan, double berat, double total) {

        tabel[jumlah][0] = nama;
        tabel[jumlah][1] = layanan;

        ostringstream berat_str, total_str;
        berat_str << berat;
        total_str << total;

        tabel[jumlah][2] = berat_str.str();
        tabel[jumlah][3] = total_str.str();

        jumlah++;

    }

    void tampilkanData() {

        cout << "\n===== DATA TRANSAKSI (ARRAY 2 DIMENSI) =====\n";
        cout << left << setw(4) << "No" << setw(20) << "Nama" << setw(15)
             << "Layanan" << setw(10) << "Berat" << setw(12) << "Total" << endl;
        cout << "-----------------------------------------------------------\n";

        for (int baris = 0; baris < jumlah; baris++) {

            cout << left << setw(4) << baris + 1;

            for (int kolom = 0; kolom < 4; kolom++) {

                if (kolom == 1) cout << setw(15) << tabel[baris][kolom];
                else if (kolom == 0) cout << setw(20) << tabel[baris][kolom];
                else if (kolom == 2) cout << setw(10) << tabel[baris][kolom];
                else cout << setw(12) << tabel[baris][kolom];

            }

            cout << endl;

        }

        cout << "=============================================================\n";

    }

    string getData(int baris, int kolom) {
        return tabel[baris][kolom];
    }

    int getJumlah() {
        return jumlah;
    }
};

class StatusTransaksi {
private:
    int matriks[100][3];  
    int jumlah;

public:
    StatusTransaksi() {
        jumlah = 0;
    }

    void tambahStatus(int estimasiHari) {

        for (int hari = 0; hari < 3; hari++) {
            matriks[jumlah][hari] = (hari < estimasiHari) ? 1 : 0;
        }

        jumlah++;

    }

    void tampilkanMatriks() {

        cout << "\n===== STATUS TRANSAKSI (MATRIKS) =====\n";
        cout << left << setw(4) << "No" << setw(12) << "Hari ke-1" << setw(12)
             << "Hari ke-2" << setw(12) << "Hari ke-3" << endl;
        cout << "-------------------------------------------\n";

        for (int baris = 0; baris < jumlah; baris++) {

            cout << left << setw(4) << baris + 1;

            for (int kolom = 0; kolom < 3; kolom++) {

                if (matriks[baris][kolom] == 1) cout << setw(12) << "Proses";
                else cout << setw(12) << "-";

            }

            cout << endl;

        }

        cout << "=============================================\n";

    }

    int getStatus(int baris, int kolom) {
        return matriks[baris][kolom];
    }

    int getJumlah() {
        return jumlah;
    }
};

class LaporanMatriks {
public:

    void tampilkanLaporan(DataTransaksi &DT, StatusTransaksi &ST) {

        int jumlah = DT.getJumlah();

        cout << "\n===== LAPORAN LENGKAP (GABUNGAN ARRAY 2 DIMENSI) =====\n";
        cout << left << setw(4) << "No" << setw(20) << "Nama" << setw(15)
             << "Layanan" << setw(10) << "Berat" << setw(12) << "Total"
             << setw(12) << "Hari ke-1" << setw(12) << "Hari ke-2" << setw(12) << "Hari ke-3" << endl;
        cout << "---------------------------------------------------------------------------------------\n";

        for (int baris = 0; baris < jumlah; baris++) {

            cout << left << setw(4) << baris + 1;
            cout << setw(20) << DT.getData(baris, 0);
            cout << setw(15) << DT.getData(baris, 1);
            cout << setw(10) << DT.getData(baris, 2);
            cout << setw(12) << DT.getData(baris, 3);

            for (int kolom = 0; kolom < 3; kolom++) {

                if (ST.getStatus(baris, kolom) == 1) cout << setw(12) << "Proses";
                else cout << setw(12) << "-";

            }

            cout << endl;

        }

        cout << "=========================================================================================\n";

    }

};

class RekapLaundry {
private:
    string rekap[100][3];  
    int jumlah;

public:
    RekapLaundry() {
        jumlah = 0;
    }

    void bangunRekap(ArrayNama &AN, ArrayBerat &AB, ArrayTotal &AT) {

        jumlah = AN.getJumlah();

        for (int baris = 0; baris < jumlah; baris++) {

            ostringstream berat_str, total_str;
            berat_str << AB.getBerat(baris);
            total_str << AT.getTotal(baris);

            rekap[baris][0] = AN.getNama(baris);
            rekap[baris][1] = berat_str.str();
            rekap[baris][2] = total_str.str();

        }

    }

    void tampilkanRekap() {

        cout << "\n===== REKAP LAUNDRY (GABUNGAN ARRAY 1D KE ARRAY 2D) =====\n";
        cout << left << setw(4) << "No" << setw(20) << "Nama" << setw(12)
             << "Berat" << setw(12) << "Total" << endl;
        cout << "-------------------------------------------------------\n";

        for (int baris = 0; baris < jumlah; baris++) {

            cout << left << setw(4) << baris + 1;

            for (int kolom = 0; kolom < 3; kolom++) {

                if (kolom == 0) cout << setw(20) << rekap[baris][kolom];
                else cout << setw(12) << rekap[baris][kolom];

            }

            cout << endl;

        }

        cout << "===========================================================\n";

    }

    string getRekap(int baris, int kolom) {
        return rekap[baris][kolom];
    }

    int getJumlah() {
        return jumlah;
    }
};

class StatistikLaundry {
public:

    void tampilkanStatistik(ArrayBerat &AB, ArrayTotal &AT) {

        int jumlah = AT.getJumlah();

        double totalBerat = 0;
        double totalPendapatan = 0;
        double totalTertinggi = AT.getTotal(0);
        double totalTerendah = AT.getTotal(0);

        for (int i = 0; i < jumlah; i++) {

            totalBerat += AB.getBerat(i);
            totalPendapatan += AT.getTotal(i);

            if (AT.getTotal(i) > totalTertinggi) {
                totalTertinggi = AT.getTotal(i);
            }

            if (AT.getTotal(i) < totalTerendah) {
                totalTerendah = AT.getTotal(i);
            }

        }

        double rataBerat = totalBerat / jumlah;
        double rataPendapatan = totalPendapatan / jumlah;

        cout << "\n===== STATISTIK LAUNDRY =====\n";
        cout << "Jumlah Transaksi     : " << jumlah << " transaksi\n";
        cout << "Total Berat Cucian   : " << totalBerat << " kg\n";
        cout << "Total Pendapatan     : Rp" << totalPendapatan << endl;
        cout << "Rata-rata Berat      : " << rataBerat << " kg\n";
        cout << "Rata-rata Pendapatan : Rp" << rataPendapatan << endl;
        cout << "Transaksi Tertinggi  : Rp" << totalTertinggi << endl;
        cout << "Transaksi Terendah   : Rp" << totalTerendah << endl;
        cout << "==============================\n";

    }

};

class PointerNama {
public:

    void tampilkanViaPointer(ArrayNama &AN) {

        int jumlah = AN.getJumlah();
        string *p = AN.getArray();  

        cout << "\n===== NAMA PELANGGAN (AKSES VIA POINTER) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << *(p + i) << endl;
        }

        cout << "===================================================\n";

    }

    int cariViaPointer(ArrayNama &AN, string kunci) {

        int jumlah = AN.getJumlah();
        string *p = AN.getArray();

        for (int i = 0; i < jumlah; i++) {

            if (*p == kunci) {
                return i;
            }

            p++;  

        }

        return -1;

    }

};

class PointerBerat {
public:

    void tampilkanViaPointer(ArrayBerat &AB) {

        int jumlah = AB.getJumlah();
        double *p = AB.getArray();  
        
        cout << "\n===== BERAT CUCIAN (AKSES VIA POINTER) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". " << *(p + i) << " kg" << endl;
        }

        cout << "=================================================\n";

    }

    double totalViaPointer(ArrayBerat &AB) {

        int jumlah = AB.getJumlah();
        double *p = AB.getArray();
        double total = 0;

        for (int i = 0; i < jumlah; i++) {
            total += *p;
            p++;  
        }

        return total;

    }

};

class PointerTotal {
public:

    void tampilkanViaPointer(ArrayTotal &AT) {

        int jumlah = AT.getJumlah();
        double *p = AT.getArray();  

        cout << "\n===== TOTAL PEMBAYARAN (AKSES VIA POINTER) =====\n";

        for (int i = 0; i < jumlah; i++) {
            cout << i + 1 << ". Rp" << *(p + i) << endl;
        }

        cout << "=====================================================\n";

    }

    double tertinggiViaPointer(ArrayTotal &AT) {

        int jumlah = AT.getJumlah();
        double *p = AT.getArray();
        double tertinggi = *p;

        for (int i = 0; i < jumlah; i++) {

            if (*(p + i) > tertinggi) {
                tertinggi = *(p + i);
            }

        }

        return tertinggi;

    }

    double terendahViaPointer(ArrayTotal &AT) {

        int jumlah = AT.getJumlah();
        double *p = AT.getArray();
        double terendah = *p;

        for (int i = 0; i < jumlah; i++) {

            if (*(p + i) < terendah) {
                terendah = *(p + i);
            }

        }

        return terendah;

    }

};

class InputBanyak {
private:
    ArrayNama AN;
    ArrayBerat AB;
    ArrayTotal AT;
    DataTransaksi DT;
    StatusTransaksi ST;
    RekapLaundry RL;

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
            DT.tambahData(laundry.getNamaPelanggan(), laundry.getJenisLayanan(),
                           laundry.getBeratKg(), laundry.getTotalBayar());
            ST.tambahStatus(laundry.getEstimasiHari());
        }

        RL.bangunRekap(AN, AB, AT);

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

    DataTransaksi& getDataTransaksi() {
        return DT;
    }

    StatusTransaksi& getStatusTransaksi() {
        return ST;
    }

    RekapLaundry& getRekapLaundry() {
        return RL;
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

class LaporanLengkap {
public:

    void tampilkanLaporan(InputBanyak &input) {

        cout << "\n===================================================================\n";
        cout << "                     LAPORAN LENGKAP LAUNDRY\n";
        cout << "===================================================================\n";

        cout << "\n----- 1. Daftar Array 1 Dimensi -----\n";
        input.getArrayNama().tampilkanData();
        input.getArrayBerat().tampilkanData();
        input.getArrayTotal().tampilkanData();

        cout << "\n----- 2. Data Transaksi (Array 2 Dimensi) -----\n";
        input.getDataTransaksi().tampilkanData();

        cout << "\n----- 3. Status Transaksi (Matriks) -----\n";
        input.getStatusTransaksi().tampilkanMatriks();

        cout << "\n----- 4. Rekap Laundry (Gabungan Array 1D ke Array 2D) -----\n";
        input.getRekapLaundry().tampilkanRekap();

        cout << "\n----- 5. Laporan Matriks Gabungan -----\n";
        LaporanMatriks LM;
        LM.tampilkanLaporan(input.getDataTransaksi(), input.getStatusTransaksi());

        cout << "\n----- 6. Statistik Laundry -----\n";
        StatistikLaundry SL;
        SL.tampilkanStatistik(input.getArrayBerat(), input.getArrayTotal());

        cout << "\n===================================================================\n";
        cout << "                    AKHIR LAPORAN LENGKAP\n";
        cout << "===================================================================\n";

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
            cout << "6. Tampilkan Data Transaksi (Tabel)\n";
            cout << "7. Tampilkan Status Transaksi (Matriks)\n";
            cout << "8. Laporan Lengkap (Matriks Gabungan)\n";
            cout << "9. Rekap Laundry (Gabungan Array 1D ke Array 2D)\n";
            cout << "10. Statistik Laundry (Total Transaksi & Pendapatan)\n";
            cout << "11. Laporan Lengkap (Seluruh Data)\n";
            cout << "12. Tampilkan Nama Pelanggan via Pointer\n";
            cout << "13. Cari Pelanggan via Pointer\n";
            cout << "14. Tampilkan Berat Cucian via Pointer\n";
            cout << "15. Tampilkan Total Pembayaran via Pointer\n";
            cout << "16. Keluar\n";
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

                if (input.getDataTransaksi().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    input.getDataTransaksi().tampilkanData();

                }

            }
            else if (pilih == 7) {

                if (input.getStatusTransaksi().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    input.getStatusTransaksi().tampilkanMatriks();

                }

            }
            else if (pilih == 8) {

                if (input.getDataTransaksi().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    LaporanMatriks LM;
                    LM.tampilkanLaporan(input.getDataTransaksi(), input.getStatusTransaksi());

                }

            }
            else if (pilih == 9) {

                if (input.getRekapLaundry().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    input.getRekapLaundry().tampilkanRekap();

                }

            }
            else if (pilih == 10) {

                if (input.getArrayTotal().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    StatistikLaundry SL;
                    SL.tampilkanStatistik(input.getArrayBerat(), input.getArrayTotal());

                }

            }
            else if (pilih == 11) {

                if (input.getArrayNama().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    LaporanLengkap LL;
                    LL.tampilkanLaporan(input);

                }

            }
            else if (pilih == 12) {

                if (input.getArrayNama().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    PointerNama PN;
                    PN.tampilkanViaPointer(input.getArrayNama());

                }

            }
            else if (pilih == 13) {

                if (input.getArrayNama().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    string kunci;
                    cout << "\nMasukkan nama pelanggan yang dicari : ";
                    getline(cin, kunci);

                    PointerNama PN;
                    int idx = PN.cariViaPointer(input.getArrayNama(), kunci);

                    cout << "\n===== HASIL PENCARIAN (VIA POINTER) =====\n";

                    if (idx != -1) {
                        cout << "Data ditemukan pada urutan ke-" << idx + 1 << endl;
                        cout << "Nama  : " << input.getArrayNama().getNama(idx) << endl;
                        cout << "Berat : " << input.getArrayBerat().getBerat(idx) << " kg" << endl;
                        cout << "Total : Rp" << input.getArrayTotal().getTotal(idx) << endl;
                    }
                    else {
                        cout << "Data pelanggan \"" << kunci << "\" tidak ditemukan.\n";
                    }

                    cout << "===========================================\n";

                }

            }
            else if (pilih == 14) {

                if (input.getArrayBerat().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    PointerBerat PB;
                    PB.tampilkanViaPointer(input.getArrayBerat());

                    double totalBerat = PB.totalViaPointer(input.getArrayBerat());
                    cout << "\nTotal Berat Cucian (dihitung via pointer) : " << totalBerat << " kg\n";

                }

            }
            else if (pilih == 15) {

                if (input.getArrayTotal().getJumlah() == 0) {

                    cout << "\nBelum ada data transaksi. Silakan input banyak transaksi terlebih dahulu.\n";

                }
                else {

                    PointerTotal PT;
                    PT.tampilkanViaPointer(input.getArrayTotal());

                    double tertinggi = PT.tertinggiViaPointer(input.getArrayTotal());
                    double terendah = PT.terendahViaPointer(input.getArrayTotal());

                    cout << "\nTotal Tertinggi (via pointer) : Rp" << tertinggi << endl;
                    cout << "Total Terendah  (via pointer) : Rp" << terendah << endl;

                }

            }
            else if (pilih == 16) {

                cout << "\nTerima kasih telah menggunakan Sistem Laundry.\n";

            }
            else {

                cout << "\nMenu tidak tersedia!\n";

            }

        } while (pilih != 16);

    }
};

int main() {

    cout << "======== SISTEM LAUNDRY ========\n";

    MenuLaundry menu;
    menu.menu();

    return 0;
}
