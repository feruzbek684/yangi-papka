#include <stdio.h>
void chiqar(int a, int b) {
    if (a > b)
    {
        printf("katta %d", a);
    }else{
        printf("katta %d", b);
    }
    
    
}
int main () {
    int a, b;
    printf("2 ta son ");
    scanf("%d%d", &a, &b);
    chiqar(a, b);
}