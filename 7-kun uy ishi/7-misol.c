#include <stdio.h>

int main(void) {
    int son;
    printf("Uch xonali son kiriting: ");
    scanf("%d", &son);
    
    int yuz = son / 100;
    int onlik = (son / 10) % 10;
    int birlik = son % 10;
    printf("Teskari son: %d%d%d\n", birlik, onlik, yuz);
    return 0;
}
