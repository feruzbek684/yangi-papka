#include <stdio.h>
int main () {
    int a = 40, b = 180;
    do
    {
        if (a % 7 == 0 && a % 2 == 0)
        {
            printf("%d ", a);
        }
        a ++;
        
    } while (a <= b);
     
}