#include <stdio.h>

int q(int son){
    int k = 1;
    for (size_t i = 1; i <= son; i++)
    {
        k = k * i;
    }
    return k;
    
    
}
int main () {
    int n;
    printf("sonni kiritng: ");
    scanf("%d", &n);
    int faktorial = q(n);
    printf("%d ni faktoriali ==> %d\n", n, faktorial);
}