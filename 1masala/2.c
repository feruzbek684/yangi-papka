#include <stdio.h>
void orta (float a, float b){
    float sum;
    sum = (a + b) / 2;
    printf("orta arifmetigi == > %.2f", sum); 
}

float ikkita_son(float son , float son1){
    float orta;
    orta = son + son1; 
    orta = orta / 2;
    return orta;
}
int main () {
    int a, b;
    printf("2 ta son ");
    scanf("%d%d", &a, &b);
    orta(a, b);


    float f = ikkita_son(a, b);
    printf("\nreturn yigindi %.2f\n", f);

}