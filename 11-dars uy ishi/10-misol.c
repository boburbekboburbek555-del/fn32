#include <stdio.h>

int main() {
    double numbers[100];
    int count = 0;
    int choice;
    double num;

    while (1) {
        printf("\n--- Sonli Statistika Menyusi ---\n");
        printf("1. Son kiritish\n");
        printf("2. Kiritilgan sonlar sonini ko'rish\n");
        printf("3. Sonlar yig'indisini ko'rish\n");
        printf("4. Eng katta sonni ko'rish\n");
        printf("5. Eng kichik sonni ko'rish\n");
        printf("6. Dasturdan chiqish\n");
        printf("Tanlovingizni kiriting: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Yangi son kiriting: ");
                scanf("%lf", &num);
                numbers[count] = num;
                count++;
                printf("Son qo'shildi.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("Hali birorta son kiritilmagan!\n");
                } else {
                    printf("Kiritilgan sonlar soni: %d ta\n", count);
                }
                break;
            case 3:
                if (count == 0) {
                    printf("Hali birorta son kiritilmagan!\n");
                } else {
                    double sum = 0;
                    for (int i = 0; i < count; i++) {
                        sum += numbers[i];
                    }
                    printf("Sonlar yig'indisi: %.2f\n", sum);
                }
                break;
            case 4:
                if (count == 0) {
                    printf("Hali birorta son kiritilmagan!\n");
                } else {
                    double max = numbers[0];
                    for (int i = 1; i < count; i++) {
                        if (numbers[i] > max) {
                            max = numbers[i];
                        }
                    }
                    printf("Eng katta son: %.2f\n", max);
                }
                break;
            case 5:
                if (count == 0) {
                    printf("Hali birorta son kiritilmagan!\n");
                } else {
                    double min = numbers[0];
                    for (int i = 1; i < count; i++) {
                        if (numbers[i] < min) {
                            min = numbers[i];
                        }
                    }
                    printf("Eng kichik son: %.2f\n", min);
                }
                break;
            case 6:
                printf("Dastur tugatildi.\n");
                return 0;
            default:
                printf("Noto'g'ri tanlov! Qaytadan urinib ko'ring.\n");
        }
    }

    return 0;
}
