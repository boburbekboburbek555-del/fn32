#include <stdio.h>

int main() {
    int valyuta;
    double som;
    // Misol uchun kurslar: 1 USD = 12800 so'm, 1 EUR = 13500 so'm, 1 RUB = 130 so'm
    double usd_kurs = 12800.0, eur_kurs = 13500.0, rub_kurs = 130.0;

    printf("1 — Dollar (USD)\n2 — Yevro (EUR)\n3 — Rubl (RUB)\n");
    printf("Valyuta turini tanlang: ");
    scanf("%d", &valyuta);
    printf("So'm miqdorini kiriting: ");
    scanf("%lf", &som);

    switch (valyuta) {
        case 1: 
            printf("Natija: %.2f USD\n", som / usd_kurs); 
            break;
        case 2: 
            printf("Natija: %.2f EUR\n", som / eur_kurs); 
            break;
        case 3: 
            printf("Natija: %.2f RUB\n", som / rub_kurs); 
            break;
        default: 
            printf("Noto'g'ri valyuta turi tanlandi!\n");
    }
    return 0;
}
