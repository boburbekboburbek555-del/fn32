#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting: ");
    scanf("%d", &son);

    if (son < 30 || son > 70) {
        printf("Son oraliqdan tashqarida\n");
    } else {
        printf("Son oraliqda\n");
    }

    return 0;
}
