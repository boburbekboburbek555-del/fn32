#include <stdio.h>

int main() {
    int alo = 0, yaxshi = 0, qoniqarli = 0, qoniqarsiz = 0;
    int score;

    for (int i = 1; i <= 15; i++) {
        printf("%d-o'quvchining bahosini kiriting (0-100): ", i);
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            printf("Noto'g'ri baho, hisobga olinmadi.\n");
            continue;
        }

        if (score >= 90) {
            alo++;
        } else if (score >= 75) {
            yaxshi++;
        } else if (score >= 60) {
            qoniqarli++;
        } else {
            qoniqarsiz++;
        }
    }

    printf("\n--- Imtihon natijalari statistikasi ---\n");
    printf("A'lo (90-100): %d ta\n", alo);
    printf("Yaxshi (75-89): %d ta\n", yaxshi);
    printf("Qoniqarli (60-74): %d ta\n", qoniqarli);
    printf("Qoniqarsiz (0-59): %d ta\n", qoniqarsiz);

    return 0;
}
