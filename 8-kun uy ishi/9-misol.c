#include <stdio.h>

int main() {
    int son;
    printf("Bitta son kiriting: ");
    scanf("%d", &son);

    if (!(son == 0)) {
        printf("Son nol emas\n");
    } else {
        printf("Son nolga teng\n");
    }

    return 0;
}
