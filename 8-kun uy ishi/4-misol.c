#include <stdio.h>

int main() {
    int harorat;
    printf("Havo haroratini kiriting: ");
    scanf("%d", &harorat);

    if (harorat > 20 && harorat < 35) {
        printf("Havo iliq\n");
    } else {
        printf("Havo salqin yoki issiq\n");
    }

    return 0;
}
