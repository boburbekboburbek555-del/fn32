#include <stdio.h>

int main(void) {
    int jami_kun;
    printf("Kunlar sonini kiriting: ");
    scanf("%d", &jami_kun);
    
    int yil = jami_kun / 365;
    int qoldiq = jami_kun % 365;
    int hafta = qoldiq / 7;
    int kun = qoldiq % 7;
    printf("Yil: %d, Hafta: %d, Kun: %d\n", yil, hafta, kun);
    return 0;
}
