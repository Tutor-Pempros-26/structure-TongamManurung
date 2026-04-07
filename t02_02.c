// 12S25007 - Tongam Prozona Manurung

#include <stdio.h>


struct MenuKesehatan {
    int level;
};

int main(int _argv, char **_argc) {
   
    struct MenuKesehatan pilih;

    
    if (scanf("%d", &pilih.level) != 1) return 0;

    
    if (pilih.level >= 5) printf("milk\n");
    if (pilih.level >= 4) printf("fruits\n");
    if (pilih.level >= 3) printf("vegetables\n");
    if (pilih.level >= 2) printf("side dishes\n");
    if (pilih.level >= 1) printf("staple food\n");

    
    switch (pilih.level) {
        case 1:
            printf("you need side dishes\n");
            break;
        case 2:
            printf("you need vegetables\n");
            break;
        case 3:
            printf("good\n");
            break;
        case 4:
            printf("very good\n");
            break;
        case 5:
            printf("perfect\n");
            break;
    }

    return 0;
}