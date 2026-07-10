#include <iostream>
#include <string>
using namespace std;

class DataLaundry {
private:
    string namaPelanggan;
    string jenisLayanan;   
    double beratKg;
    double hargaPerKg;
    double totalHarga;

public:
    void inputData() {
        cout << "===== INPUT DATA LAUNDRY =====\n";
        cout << "Nama Pelanggan     : ";
        getline(cin, namaPelanggan);
        cout << "Jenis Layanan (Cuci Kering/Cuci Setrika) : ";
        getline(cin, jenisLayanan);
        cout << "Berat Pakaian (kg) : ";
        cin >> beratKg;
        cin.ignore();
        hargaPerKg = 7000; 
    }
    
    void prosesHitung() {
        totalHarga = beratKg * hargaPerKg;
    }

    void cetakStruk() {
    	cout << "===================================\n";
        cout << "\n========= STRUK LAUNDRY =========\n";
        cout << "Nama Pelanggan   : " << namaPelanggan << endl;
        cout << "Jenis Layanan    : " << jenisLayanan << endl;
        cout << "Berat            : " << beratKg << " kg\n";
        cout << "Harga per kg     : Rp" << hargaPerKg << endl;
        cout << "Total Harga      : Rp" << totalHarga << endl;
        cout << "==================================\n";
    }
};

int main() {
    cout << "======== SISTEM LAUNDRY ========\n";
    DataLaundry laundry;
    laundry.inputData();      
    laundry.prosesHitung();   
    laundry.cetakStruk();     

    return 0;
}
