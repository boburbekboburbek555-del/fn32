#include <stdio.h>

int main() {
    int jami = 0, qism;
    while (jami < 100000) {
        printf("Jamg'argan pulingizni kiriting: ");
        scanf("%d", &qism);
        jami += qism;
    }
    printf("Tabriklaymiz! Jami yig'ilgan pul: %d so'm\n", jami);
    return 0;
}
