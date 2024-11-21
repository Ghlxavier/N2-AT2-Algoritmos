#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Interface inicial; <- eu
//Reserva de lugar; <- Natan
//Impressão de bilhete; <- Rafa
//Cancelamento; <- Gustavo
//Finalização; <- Rafa
//e documentação <- Todos (gustavo)

void Interface();



int main(){
    int opc;

    Interface();
    scanf("%d", &opc);

    switch(opc){

        case 1:
            //Reservar lugar
        break;

        case 2:
            //Impressão de bilhetes
        break;

        case 3:
            //Cancelar compra
        break;

        case 4:
            printf("Obrigado por escolher a HollowMovie!!!\n");
            printf("Volte Sempre!");
        break;

        default:
            printf("Opcao invalida! O programa encerrara!");
    }


    return 0;
}

void Interface(){
    printf("-------------------------------------------------------------\n");
    printf("                   Bilheteria HollowMovie                    \n");
    printf("-------------------------------------------------------------\n\n");

    printf("Seja Bem-vindo ao melhor cinema de Hallownest!!!\n\n");
    printf("Escolha uma opcao da bilheteria:\n");
    printf("Reservar lugar - [1]\n");
    printf("Impressao de bilhete - [2]\n");
    printf("Cancelar compra - [3]\n");
    printf("Sair - [4]\n");
    printf("Escolha a opcao: ");
}