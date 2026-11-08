#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting: ");
    scanf("%d", &son);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", son, i, son * i);
    }
    return 0;
}
