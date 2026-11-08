#include <stdio.h>

int main() {
    int son;
    
    for (int i = 0; i < 10; i++) {
        printf("%d-sonni kiriting: ", i + 1);
        scanf("%d", &son);
        
        if (son < 0) {
            printf("Manfiy son kiritildi, sikl toxtatildi.\n");
            break;
        }
        
        printf("Kiritilgan son: %d\n", son);
    }
    
    return 0;
}
