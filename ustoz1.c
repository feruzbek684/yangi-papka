#include <stdio.h>

int main () {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    do
    {
        if (a % 7 ==0)
        {
            printf("%d ", a);
        }
        a ++;
        
    } while (a <= b);

    return 0;
    
}