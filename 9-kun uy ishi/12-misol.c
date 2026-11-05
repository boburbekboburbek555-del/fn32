#include <stdio.h>

int main() {
    int fasl;
    printf("1 — Bahor\n2 — Yoz\n3 — Kuz\n4 — Qish\n");
    printf("Fasl raqamini kiriting: ");
    scanf("%d", &fasl);

    switch (fasl) {
        case 1: printf("Bahor fasli\n"); break;
        case 2: printf("Yoz fasli\n"); break;
        case 3: printf("Kuz fasli\n"); break;
        case 4: printf("Qish fasli\n"); break;
        default: printf("1 dan 4 gacha son kiriting!\n");
    }
    return 0;
}
