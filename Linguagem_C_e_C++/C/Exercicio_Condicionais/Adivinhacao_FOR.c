#include<stdio.h>
/*Jogo de adivinhação com laço "for". Jogo com tentativas escolhidas.*/
int main(){
    int escolha;
    int tentativas;
    int numero = 42;
    int i;

    printf("*********************************\n");
    printf("******JOGO DE ADIVINHAÇÃO********\n");
    printf("*********************************\n\n");
     printf("\nDeseja adivinhar quantos com quantas tentativas?\n");
    scanf("%d", &tentativas);
    if(tentativas<=0){
        while(tentativas<=0){
            if(tentativas<0){
                printf("Você nos deve tentativas, não podemos jogar por você\n");
                printf("FIM DE JOGO\n");
                printf(".\n.\n.\n");
                printf("Brincadeira! Escolha números que não sejam negativos ou nulos!");
            }
            else if(tentativas==0){
                printf("Você tem %d tentativas.\n", tentativas);
                printf("FIM DE JOGO\n");
                printf(".\n.\n.\n");
                printf("Brincadeira! Escolha números que não sejam negativos ou nulos!\n");
            }
            printf("\nDeseja adivinhar com quantas tentativas?\n");
            scanf("%d", &tentativas);
            if(tentativas>0){
                break;
            }

                
        }
        
    }
    printf("Você escolheu %d tentativas.\n", tentativas);
    printf("Boa Sorte!\n");

    for(i = 1; i <= tentativas; i++){
        printf("Tentativa %d de %d. Digite um número: ", i, tentativas);
        scanf("%d", &escolha);
        if(escolha>numero){
            printf("Número esolhido é maior.\n");
        }
        if(escolha<numero){
            printf("Número escolhido é menor.\n");
        }
        else if(escolha==numero){
            printf("Acertou!\n");
            printf("Você é um excelente jogador. Continue jogando!");
            break;
        }

    }

    return 0;
}