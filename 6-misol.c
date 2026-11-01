#include <stdio.h>

int main(void) {
    int son;
    printf("Ikki xonali son kiriting: ");
    scanf("%d", &son);
    
    int onlik = son / 10;
    int birlik = son % 10;
    printf("Ko'paytma: %d * %d = %d\n", onlik, birlik, onlik * birlik);
    return 0;
}
