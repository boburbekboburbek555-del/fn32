#include <stdio.h>

int main(void) {
    int soat1, daq1, soat2, daq2;
    printf("Boshlanish vaqti (soat daqiqa): ");
    scanf("%d %d", &soat1, &daq1);
    
    printf("Tugash vaqti (soat daqiqa): ");
    scanf("%d %d", &soat2, &daq2);
    
    int jami1 = soat1 * 60 + daq1;
    int jami2 = soat2 * 60 + daq2;
    int farq = jami2 - jami1;
    
    printf("Oradagi farq: %d daqiqa\n", farq);
    return 0;
}
