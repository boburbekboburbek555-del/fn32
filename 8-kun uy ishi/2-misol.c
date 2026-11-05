#include <stdio.h>

int main() {
    int yosh;
    printf("Yoshingizni kiriting: ");
    scanf("%d", &yosh);

    if (yosh >= 7) {
        printf("Maktabga borishi mumkin\n");
    } else {
        printf("Hali kichik\n");
    }

    return 0;
}
