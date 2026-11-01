#include <stdio.h>

int main(void) {
    int x;
    printf("Bitta son kiriting: ");
    scanf("%d", &x);
    
    x++; x++; x++; // 3 marta oshirish
    x--; x--;      // 2 marta kamaytirish
    
    printf("Yakuniy natija: %d\n", x);
    return 0;
}
