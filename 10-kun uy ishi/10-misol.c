#include <stdio.h>

int main() {
    int maxfiy_son = 7;
    int taxmin;
    int topildi = 0; 

    for (int i = 0; i < 5; i++) {
        printf("%d-urinish. Sonni kiriting: ", i + 1);
        scanf("%d", &taxmin);

        if (taxmin == maxfiy_son) {
            printf("Tabriklaymiz, topdingiz!\n");
            topildi = 1;
            break;
        } else {
            printf("Notog'ri, qayta urinib ko'ring\n");
        }
    }

    if (!topildi) {
        printf("Afsuski, 5 ta urinishda topa olmadingiz. Maxfiy son: %d\n", maxfiy_son);
    }

    return 0;
}
