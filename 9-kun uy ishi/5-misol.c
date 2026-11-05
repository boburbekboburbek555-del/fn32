#include <stdio.h>

int main() {
    int i = 10, yigindi = 0;
    while (i <= 30) {
        yigindi += i;
        i++;
    }
    printf("10 dan 30 gacha sonlar yig'indisi: %d\n", yigindi);
    return 0;
}
