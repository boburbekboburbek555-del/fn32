#include <stdio.h>

int main() {
    long long summa;
    printf("Xarid summasini kiriting (so'mda): ");
    scanf("%lld", &summa);

    if (summa >= 200000) {
        printf("Chegirma mavjud\n");
    } else {
        printf("Chegirma mavjud emas\n");
    }

    return 0;
}
