#include <stdio.h>

int main() {
    int day;

    while (1) {
        printf("\n1 dan 7 gacha son kiriting (Chiqish uchun 0): ");
        scanf("%d", &day);

        if (day == 0) {
            printf("Dastur tugatildi.\n");
            break;
        }

        switch (day) {
            case 1:
                printf("Dushanba\n");
                break;
            case 2:
                printf("Seshanba\n");
                break;
            case 3:
                printf("Chorshanba\n");
                break;
            case 4:
                printf("Payshanba\n");
                break;
            case 5:
                printf("Juma\n");
                break;
            case 6:
                printf("Shanba\n");
                break;
            case 7:
                printf("Yakshanba\n");
                break;
            default:
                printf("Bunday hafta kuni mavjud emas\n");
        }
    }

    return 0;
}
