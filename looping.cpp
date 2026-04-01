#include <iostream>
using namespace std;

int main() {
    return 0;
}

int angka;
int pilihan;

bool cekPrima(int n);
bool cekFibonacci(int n);

bool cekPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return a == n;
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

void tampilkanHasilPrima() {
    if (cekPrima(angka)) cout << "Hasil: " << angka << " adalah Bilangan Prima." << endl;
    else cout << "Hasil: " << angka << " BUKAN Bilangan Prima." << endl;
}

void tampilkanHasilFibonacci() {
    if (cekFibonacci(angka)) cout << "Hasil: " << angka << " adalah bagian dari deret Fibonacci." << endl;
    else cout << "Hasil: " << angka << " BUKAN bagian dari deret Fibonacci." << endl;
}

void menu() {
    cout << "\n--- MENU PENGECEKAN BILANGAN ---" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

int main() {
    bool berjalan = true;
    while (berjalan) {
        // Logika switch case akan masuk di sini
    }
    return 0;


//menu();

switch (pilihan) {
    case 1:
    inputAngka();
    tampilkanHasilPrima();
    break;

    case 2:
    inputAngka();
    tampilkanHasilFibonacci();
    break;

    case 0:
    cout << "Program selesai. Sampai jumpa!" << endl;
    berjalan = false;
    break;

    default:
    cout << "Pilihan tidak valid! Masukkan angka 0, 1, atau 2." << endl;
    break;
}