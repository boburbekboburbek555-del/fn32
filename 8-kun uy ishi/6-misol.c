#include <stdio.h>

int main() {
    int yosh, bal;
    printf("Yoshingiz va balingizni kiriting: ");
    scanf("%d %d", &yosh, &bal);

    if (yosh >= 16 && bal >= 50) {
        printf("Imtihonga kirishi mumkin\n");
    } else {
        printf("Imtihonga kira olmaydi\n");
    }

    return 0;
}
