#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ikkita son kiriting: ");
    scanf("%d %d", &num1, &num2);

    if (num1 != num2) {
        printf("Sonlar har xil\n");
    } else {
        printf("Sonlar teng\n");
    }

    return 0;
}
