#include <stdio.h>

int ikki_son(int son, int son1){
    int sum = son + son1;
    return sum;
}
int main () {
int a, b;
printf("sonni kiritng: "); 
scanf("%d%d", &a, &b);
int c = ikki_son(a, b);
printf("yigindi == > %d", c);
return 0;
}

