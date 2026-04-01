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