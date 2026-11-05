#include <stdio.h>

int main() {
    int i = 1;
    int narx = 5000;
    while (i <= 10) {
        printf("%d dona daftar - %d so'm\n", i, i * narx);
        i++;
    }
    return 0;
}
