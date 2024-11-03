#include <stdio.h>

int main() {
    int son, bir = 0, on = 0, yuz = 0;
    int sum;
    do {
        printf("sonni kiriting ==> ");
        scanf("%d", &son);
        if (son < 100 || son > 999) {
            printf("bu uch xonali son emas!\n");
        }
    } while (son < 100 || son > 999);
    yuz = son / 100;
    on = (son % 100) / 10;
    bir = son % 10;
    sum = yuz * on;
    printf("Yuzlik xonasi ==> %d\n", yuz);
    printf("O'nlik xonasi ==> %d\n", on);
    printf("Yuzlik va onlik kopaytmasi ==> %d\n", sum);

    return 0;
}
