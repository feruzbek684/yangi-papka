#include <stdio.h>

int juft(int son, int son1){
    int sum;
    for (size_t i = son; i <= son1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        return sum;
        
    }
    
}
int main () {
    int a, b;
    printf("sonni kiriting: ");
    scanf("%d%d", &a, &b);

    int juft_sonlar = juft(a, b);
    printf("\njuft sonlar ==> %d", juft_sonlar);

}