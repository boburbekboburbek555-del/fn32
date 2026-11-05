#include <stdio.h>

int main() {
    int son;
    printf("Bitta son kiriting: ");
    scanf("%d", &son);

    if (son % 5 == 0 || son % 10 == 0) {
        printf("Mos keladi\n");
    } else {
        printf("Mos kelmaydi\n");
    }

    return 0;
}
