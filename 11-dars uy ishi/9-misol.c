#include <stdio.h>

int main() {
    int free_spaces = 20;
    int choice;

    while (1) {
        printf("\n--- Avtoturargoh Menyusi ---\n");
        printf("1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");
        printf("Tanlovingizni kiriting: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (free_spaces > 0) {
                    free_spaces--;
                    printf("Avtomobil kiritildi. Bo'sh joylar: %d\n", free_spaces);
                } else {
                    printf("Diqqat: Bo'sh joy qolmagan!\n");
                }
                break;
            case 2:
                if (free_spaces < 20) {
                    free_spaces++;
                    printf("Avtomobil chiqarildi. Bo'sh joylar: %d\n", free_spaces);
                } else {
                    printf("Avtoturargoh allaqachon to'liq bo'sh!\n");
                }
                break;
            case 3:
                printf("Hozirgi bo'sh joylar soni: %d ta\n", free_spaces);
                break;
            case 4:
                printf("Dasturdan chiqildi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov! 1 dan 4 gacha raqam tanlang.\n");
        }
    }

    return 0;
}
