#include <stdio.h>

int main(void) {
    int a;
    printf("Kubning tomonini kiriting: ");
    scanf("%d", &a);
    
    printf("Hajm: %d, Sirt yuzasi: %d\n", a * a * a, 6 * a * a);
    return 0;
}
