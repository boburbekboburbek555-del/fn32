#include <stdio.h>

int main(void) {
    float km, litr;
    printf("Masofa (km) va sarflangan litrni kiriting: ");
    scanf("%f %f", &km, &litr);
    
    float sarf = (litr * 100) / km;
    printf("100 km uchun sarf: %.2f litr\n", sarf);
    return 0;
}
