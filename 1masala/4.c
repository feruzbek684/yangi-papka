#include <stdio.h>

int ikki_son(int son, int son1, int son2 ) {
    if (son >= son1 && son >= son2)
    {
        return son;
    }else if (son1 >= son && son1 >= son2){
        return son1;
    }else if (son2 >= son && son2 >= son1){
        return son2;
    }
    
}
int main () {
    int a, b, c;
    printf("3 ta son : ");
    scanf("%d%d%d", &a, &b, &c);
    int k = ikki_son(a, b, c);
    printf("katta son ==> %d", k);
}