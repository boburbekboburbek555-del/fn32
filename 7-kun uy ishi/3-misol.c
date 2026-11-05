#include <stdio.h>

int main(void) {
    float c;
    printf("Selsiy bo'yicha haroratni kiriting: ");
    scanf("%f", &c);
    
    float f = c * 9 / 5 + 32;
    printf("Farengeyt: %.1f\n", f);
    return 0;
}
