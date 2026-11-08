#include <stdio.h>

int main() {
    for (int i = 1; i <= 30; i++) {
        if (i == 15) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
