// 12S25007 - Tongam Prozona Manurung

#include <stdio.h>


struct Kalkulator {
    char op;
    int riwayat[5];
    int jumlahInput;
    int hasilAwal;
};

int main() {
  
    struct Kalkulator kal;
    kal.jumlahInput = 0;

    
    if (scanf(" %c", &kal.op) != 1) return 0;

   
    if (kal.op == '*') {
        kal.hasilAwal = 1;
    } else {
        kal.hasilAwal = 0;
    }

 
    for (int i = 0; i < 4; i++) {
        int inputSekarang;
        if (scanf("%d", &inputSekarang) != 1) break;

        
        if (inputSekarang == -1) {
            printf("%c\n", kal.op);
            int tempTotal = kal.hasilAwal;
            for (int j = 0; j < kal.jumlahInput; j++) {
                printf("%d\n", kal.riwayat[j]);
                if (kal.op == '+') tempTotal += kal.riwayat[j];
                else if (kal.op == '-') tempTotal -= kal.riwayat[j];
                else if (kal.op == '*') tempTotal *= kal.riwayat[j];
                printf("%d\n", tempTotal);
            }
            printf("-1\n0\n");
            return 0;
        }

        
        kal.riwayat[kal.jumlahInput] = inputSekarang;
        kal.jumlahInput++;

       
        printf("%c\n", kal.op);
        int runningTotal = kal.hasilAwal;
        for (int j = 0; j < kal.jumlahInput; j++) {
            printf("%d\n", kal.riwayat[j]);
            
            if (kal.op == '+') runningTotal += kal.riwayat[j];
            else if (kal.op == '-') runningTotal -= kal.riwayat[j];
            else if (kal.op == '*') runningTotal *= kal.riwayat[j];
            
            printf("%d\n", runningTotal);
        }
    }

    return 0;
}