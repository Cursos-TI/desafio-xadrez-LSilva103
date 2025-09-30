#include <stdio.h>

int main (){
int Bispo_Passos = 5;
int Torre_Passos = 5;
int Rainha_Passos = 8; 

    printf("Movimentacao do Bispo:\n");
    for (int i = 1; i<= Bispo_Passos; i++){
        printf("Passo %d: Cima + Direita\n", i);
    }
    printf("\n")
    printf("Movimentacao da Torre:\n");
    int TorrePasso = 1;
    while (TorrePasso <= Torre_Passos){
        printf("Passo %d: Direita\n", TorrePasso);
        TorrePasso++
    }
printf("\n");
printf(Movimentacao da Rainha:\n");
    int RainhaPasso = 1;
    do{
    printf("Passo %d: Esquerda\n", RainhaPasso);
    RainhaPasso++
} while (RainhaPasso ,= Rainha_Passos);
 printf("\n");
 
 return 0;
 }
