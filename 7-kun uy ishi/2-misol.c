#include <stdio.h>

int main(void) {
    int km;
    printf("Masofani kilometrda kiriting: ");
    scanf("%d", &km);
    
    printf("Metr: %d, Santimetr: %d\n", km * 1000, km * 100000);
    return 0;
}
