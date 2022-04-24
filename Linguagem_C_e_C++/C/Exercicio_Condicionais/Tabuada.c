#include<stdio.h>

int main(){
    int i;
    int numero;
    int multiplica;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Você escolheu o número %d\n", numero);
    for(i=1;i<=10;i++){
        multiplica = numero*i;
        printf("%d X %d = %d.\n", numero, i, multiplica);
    }
}