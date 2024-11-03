#include <stdio.h>
void chiqar () {
    printf("yaxshimisizlar\n");
    printf("mening ismim .......\n");
    printf("men najot talim da oqiyman\n");
}

void salomlash () {
    printf("assalomu alekum\n");
}

void raqamlar () {
    for (size_t i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    puts("");
    
}


void yigindi(int son1, int son2) {
    int sum;
    sum = son1 + son2;
    printf("yigindi == > %d\n", sum);
}
int main () {
    salomlash();
    chiqar();
    raqamlar();

    int son1, son2;
    printf("\n\n 2 ta sonni kiriting: ");
    scanf("%d%d", &son1, &son2);
    yigindi(son1, son2);

    return 0;
}