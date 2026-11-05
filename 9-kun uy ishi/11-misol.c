#include <stdio.h>

int main() {
    int tanlov;
    printf("1 — Avtomobil\n2 — Avtobus\n3 — Poyezd\n4 — Samolyot\n");
    printf("Transport raqamini tanlang: ");
    scanf("%d", &tanlov);

    switch (tanlov) {
        case 1: printf("Siz Avtomobilni tanladingiz.\n"); break;
        case 2: printf("Siz Avtobusni tanladingiz.\n"); break;
        case 3: printf("Siz Poyezdni tanladingiz.\n"); break;
        case 4: printf("Siz Samolyotni tanladingiz.\n"); break;
        default: printf("Noto'g'ri raqam kiritildi!\n");
    }
    return 0;
}
