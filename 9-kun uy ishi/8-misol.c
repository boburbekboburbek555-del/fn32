#include <stdio.h>

int main() {
    int parol;
    while (1) {
        printf("Parolni kiriting: ");
        scanf("%d", &parol);
        if (parol == 12345) {
            printf("Parol to'g'ri!\n");
            break;
        } else {
            printf("Parol noto'g'ri, qaytadan urinib ko'ring.\n");
        }
    }
    return 0;
}
