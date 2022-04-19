#include<stdio.h>

int main(){
    int x, y, z;
    printf("Por favor, digite dois valores numéricos a seguir.\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &y);
    z=x*y;
    printf("\nOs valores digitados são %d e %d. O resultado da multiplicação entre eles é: %d", x, y, z);
}