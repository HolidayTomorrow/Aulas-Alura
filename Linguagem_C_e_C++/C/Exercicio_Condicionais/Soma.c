#include<stdio.h>
/*Programa que imprime a soma de todos os números de 1 até 100.*/
int main(){
    int soma=0;
    int i;
        printf("A soma de 1 a 100 é:\n");
    for(i=1;i<=100;i++){
        soma = soma+i;
        printf("%d", i);
        if(i<=99){
            printf("\n+\n"); 
        }
    }
    printf("\nA soma de todos os números de 1 até 100 é: %d", soma);
    return 0;
}