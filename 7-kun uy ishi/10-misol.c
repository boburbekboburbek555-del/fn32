#include <stdio.h>

int main(void) {
    int daromad, xarajat;
    printf("Oylik daromad va xarajatni kiriting: ");
    scanf("%d %d", &daromad, &xarajat);
    
    int bir_oy = daromad - xarajat;
    printf("Bir oyda tejaldi: %d, 12 oyda: %d\n", bir_oy, bir_oy * 12);
    return 0;
}
