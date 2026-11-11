#include <stdio.h>

int main() {
    int num, temp;
    int digits_count = 0;
    int even_count = 0;
    int odd_count = 0;
    int total_sum = 0;

    printf("Musbat butun son kiriting: ");
    scanf("%d", &num);

    temp = num;
    if (temp == 0) {
        digits_count = 1;
    } else {
        while (temp > 0) {
            int digit = temp % 10;
            total_sum += digit;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            digits_count++;
            temp /= 10;
        }
    }

    printf("Raqamlar soni: %d\n", digits_count);
    printf("Juft raqamlar: %d ta\n", even_count);
    printf("Toq raqamlar: %d ta\n", odd_count);
    printf("Raqamlar yig'indisi: %d\n", total_sum);

    return 0;
}
