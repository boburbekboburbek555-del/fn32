#include <stdio.h>

int main() {
    int taom;
    printf("1 - Osh\n2 - Lag'mon\n3 - Manti\n4 - Sho'rva\n5 - Somsa\n");
    printf("Taom raqamini tanlang: ");
    scanf("%d", &taom);

    switch (taom) {
        case 1: 
            printf("Tanlandingiz: Osh\n"); 
            break;
        case 2: 
            printf("Tanlandingiz: Lag'mon\n"); 
            break;
        case 3: 
            printf("Tanlandingiz: Manti\n"); 
            break;
        case 4: 
            printf("Tanlandingiz: Sho'rva\n"); 
            break;
        case 5: 
            printf("Tanlandingiz: Somsa\n"); 
            break;
        default: 
            printf("Bunday taom mavjud emas!\n");
    }
    return 0;
}
