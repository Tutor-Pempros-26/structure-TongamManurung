// 12S25007 - Tongam Prozona Manurung

#include <stdio.h>

struct Kalkulator {
    char op;
    int total;
};

int main() {
    struct Kalkulator kal;
    int input;

    // 1. Ambil operator
    if (scanf(" %c", &kal.op) != 1) return 0;

    // 2. Set nilai awal
    if (kal.op == '*') {
        kal.total = 1;
    } else {
        kal.total = 0;
    }

    // 3. Loop input (Maksimal 4 kali)
    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &input) != 1) break;

        // Aturan Poltak: Jika -1, tampilkan 0 dan berhenti
        if (input == -1) {
            printf("0\n");
            return 0;
        }

        // 4. Logika Operasi sesuai Test Case
        if (kal.op == '+') {
            kal.total += input;
        } else if (kal.op == '-') {
            // Berdasarkan t03-03-02: Hasil adalah Input dikurangi Total sebelumnya
            kal.total = input - kal.total;
        } else if (kal.op == '*') {
            kal.total *= input;
        }

        // 5. Cetak hasil
        printf("%d\n", kal.total);
    }

    return 0;
}