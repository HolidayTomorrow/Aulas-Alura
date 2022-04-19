#include<stdio.h>

int main(){
    printf("**********************************\n");
    printf("*Bem vindo ao jogo de adivinhacao*\n");
    printf("**********************************\n");

    int numeroSecreto = 42;
    int chute;

    printf("Qual é o seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if(chute==numeroSecreto){
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else{
        printf("Você errou!\n");
        printf("Mas não desanime, jogue de novo.\n");
    }
}