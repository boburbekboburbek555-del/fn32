#include <stdio.h>

int main() {
    int temp;
    int hot_days = 0;

    for (int i = 1; i <= 7; i++) {
        printf("%d-kun uchun havo haroratini kiriting: ", i);
        scanf("%d", &temp);

        if (temp > 30) {
            printf("Issiq\n");
            hot_days++;
        } else if (temp >= 15 && temp <= 30) {
            printf("Iliq\n");
        } else {
            printf("Sovuq\n");
        }
    }

    printf("\n30 dan yuqori bo'lgan kunlar soni: %d ta\n", hot_days);
    return 0;
}
