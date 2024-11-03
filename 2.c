#include <stdio.h>
int main () {
    int a = 1, b = 10;
    do
    {
        if (a % 2 == 0)
        {
            
            printf("%d ", a);
        }
        a ++;
        
    } while (a <= b);
    
}