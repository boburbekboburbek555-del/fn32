#include <stdio.h>

int main() {
    int n;
    long long faktorial = 1; 
    
    printf("Musbat butun son kiriting: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }
    
    printf("%d! = %lld\n", n, faktorial);
    return 0;
}
