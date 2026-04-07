// 12S25007 - Tongam Prozona Manurung
#include <stdio.h>

// Menggunakan struct sesuai permintaan
struct Nota {
    int qty;      
    double harga;   
};

int main() {
    struct Nota beli;
    double totalAwal, diskon = 0;

    // 1. Membaca input
    if (scanf("%d", &beli.qty) != 1) return 0;
    if (scanf("%lf", &beli.harga) != 1) return 0;

    // 2. Hitung total sebelum diskon
    totalAwal = (double)beli.qty * beli.harga;

    // 3. Logika diskon sesuai aturan Ucok & Butet
    if (totalAwal > 500000) {
        diskon = totalAwal * 0.15;
    } else if (totalAwal >= 100000) {
        diskon = totalAwal * 0.10;
    } else if (totalAwal > 50000) {
        diskon = totalAwal * 0.05;
    } else {
        diskon = 0;
    }

    // 4. Output Baris Pertama (Diskon atau ---)
    if (diskon > 0) {
        printf("%.2f\n", diskon);
    } else {
        printf("---\n");
    }

    // 5. Output Baris Kedua (Total Bayar)
    printf("%.2f\n", totalAwal - diskon);

    return 0;
}