#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int segundos = time(0);
    srand(segundos);
    int numero = rand()%100;
    printf("%d", numero);
}