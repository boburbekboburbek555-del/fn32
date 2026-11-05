#include <stdio.h>

int main() {
    int son, musbat = 0, manfiy = 0;
    printf("Sonlarni kiriting (to'xtatish uchun 0 kiriting):\n");
    while (1) {
        scanf("%d", &son);
        if (son == 0) {
            break;
        }
        if (son > 0) {
            musbat++;
        } else {
            manfiy++;
        }
    }
    printf("Musbat sonlar soni: %d\n", musbat);
    printf("Manfiy sonlar soni: %d\n", manfiy);
    return 0;
}
