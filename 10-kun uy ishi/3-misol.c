#include <stdio.h>

int main() {
    int yigindi = 0;
    for (int i = 1; i <= 100; i++) {
        yigindi += i;
    }
    printf("1 dan 100 gacha sonlar yig'indisi: %d\n", yigindi);
    return 0;
}
