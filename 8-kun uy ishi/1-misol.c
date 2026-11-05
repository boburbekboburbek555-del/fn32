#include <stdio.h>

int main() {
    int num1, num2;
    printf("Ikkita son kiriting: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("Birinchi son katta\n");
    } else {
        printf("Birinchi son katta emas\n");
    }

    return 0;
}
