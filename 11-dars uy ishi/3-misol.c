#include <stdio.h>

int main() {
    long long num;
    int sum = 0;

    printf("Musbat son kiriting: ");
    scanf("%lld", &num);

    printf("Raqamlari: ");
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        printf("%d ", digit);
        num /= 10;
    }

    printf("\nRaqamlar yig'indisi: %d\n", sum);
    return 0;
}
