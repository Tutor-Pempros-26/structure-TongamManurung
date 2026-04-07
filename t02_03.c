// 12S25007 - Tongam Prozona Manurung

#include <stdio.h>


struct Kalkulator {
    char op;
    int total;
};

int main() {
    struct Kalkulator kal;
    int input;

    
    if (scanf(" %c", &kal.op) != 1) return 0;

    
    if (kal.op == '*') {
        kal.total = 1;
    } else {
        kal.total = 0;
    }

    
    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &input) != 1) break;

        
        if (input == -1) {
            printf("0\n");
            return 0;
        }

        
        if (kal.op == '+') {
            kal.total += input;
        } else if (kal.op == '-') {
            
            if (i == 0 && kal.total == 0) {
                kal.total = input;
            } else {
                kal.total -= input;
            }
        } else if (kal.op == '*') {
            kal.total *= input;
        }

        
        printf("%d\n", kal.total);
    }

    return 0;
}