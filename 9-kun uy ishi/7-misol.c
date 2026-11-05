#include <stdio.h>

int main() {
    int son, birlik, o_nlik;
    printf("Ikki xonali son kiriting: ");
    scanf("%d", &son);

    birlik = son % 10;
    o_nlik = son / 10;

    printf("Teskari tartibda: %d%d\n", birlik, o_nlik);
    return 0;
}
