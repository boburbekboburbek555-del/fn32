#include <stdio.h>

int main(void) {
    int narx, foiz;
    printf("Narx va chegirma foizini kiriting: ");
    scanf("%d %d", &narx, &foiz);
    
    int chegirma = (narx * foiz) / 100;
    printf("Chegirma summasi: %d, Yakuniy narx: %d\n", chegirma, narx - chegirma);
    return 0;
}
