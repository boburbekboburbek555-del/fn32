#include <stdio.h>

int main() {
    int yigindi = 0;

    for (int i = 1; i <= 50; i++) {
        if (i % 3 != 0) {
            continue;
        }
        yigindi += i;
    }

    printf("1 dan 50 gacha 3 ga bo'linadigan sonlar yig'indisi: %d\n", yigindi);
    return 0;
}
