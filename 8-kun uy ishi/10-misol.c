#include <stdio.h>

int main() {
    int login, parol;
    printf("Login raqami va parolni kiriting: ");
    scanf("%d %d", &login, &parol);

    if (login == 777 && parol == 1234) {
        printf("Tizimga xush kelibsiz\n");
    } else {
        printf("Login yoki parol noto'g'ri\n");
    }

    return 0;
}
