#include <stdio.h>

int main(void) {
    int son;
    printf("To'rt xonali son kiriting: ");
    scanf("%d", &son);
    
    int minglik = son / 1000;
    int yuzlik = (son / 100) % 10;
    int onlik = (son / 10) % 10;
    int birlik = son % 10;
    
    int yigindi = minglik + yuzlik + onlik + birlik;
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}
