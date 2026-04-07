// 12S25007 - Tongam Prozona Manurung


#include <stdio.h>


struct Nota {
    int qty;      
    double harga;   
};

int main() {
    struct Nota beli;
    double total, diskon = 0;

   
    scanf("%d", &beli.qty);
    scanf("%lf", &beli.harga);

   
    total = beli.qty * beli.harga;

    if (total > 500000) {
        diskon = total * 0.15;
    } else if (total >= 100000) {
        diskon = total * 0.10;
    } else if (total > 50000) {
        diskon = total * 0.05;
    }

   
    if (diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2f\n", diskon);
    }
    
    
    printf("%.2f\n", total - diskon);

    return 0;
}