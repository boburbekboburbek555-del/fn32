#include <stdio.h>

int main() {
    int total_sum = 0;
    int choice, qty;

    while (1) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlovingizni kiriting: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Olma miqdorini kiriting: ");
                scanf("%d", &qty);
                total_sum += qty * 5000;
                break;
            case 2:
                printf("Banan miqdorini kiriting: ");
                scanf("%d", &qty);
                total_sum += qty * 12000;
                break;
            case 3:
                printf("Apelsin miqdorini kiriting: ");
                scanf("%d", &qty);
                total_sum += qty * 10000;
                break;
            case 4:
                printf("Joriy hisob: %d so'm\n", total_sum);
                break;
            case 5:
                printf("Xarid yakunlandi. Yakuniy hisob: %d so'm\n", total_sum);
                return 0;
            default:
                printf("Noto'g'ri tanlov! Qaytadan urinib ko'ring.\n");
        }
    }

    return 0;
}
