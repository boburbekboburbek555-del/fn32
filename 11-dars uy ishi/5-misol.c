#include <stdio.h>

int main() {
    int start, end;
    int only_3 = 0, only_5 = 0, both = 0;

    printf("Boshlang'ich sonni kiriting: ");
    scanf("%d", &start);
    printf("Oxirgi sonni kiriting: ");
    scanf("%d", &end);

    printf("\n3 ga ham, 5 ga ham bo'linadigan sonlar:\n");
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            both++;
        } else if (i % 3 == 0) {
            only_3++;
        } else if (i % 5 == 0) {
            only_5++;
        }
    }

    printf("\n\nFaqat 3 ga bo'linadigan sonlar soni: %d", only_3);
    printf("\nFaqat 5 ga bo'linadigan sonlar soni: %d", only_5);
    printf("\nIkkalasiga ham bo'linadigan sonlar soni: %d\n", both);

    return 0;
}
