#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Interface inicial; <- eu
//Reserva de lugar; <- Natan
//ImpressÃ£o de bilhete; <- Rafa
//Cancelamento; <- Gustavo
//FinalizaÃ§Ã£o; <- Rafa
//e documentaÃ§Ã£o <- Gustavo

void Interface();

void Reserva();

void impressao();
int pegarBilhete();
void exibirBilhete();
typedef struct {
	int quantidadeBilhete;
	int numeroAssento;
	char tipoIngresso[15];
	int incluiCombo;
} Bilhete;

void Cancelar();

int main(){
    int opc;

    do{
    	Interface();
    	scanf("%d", &opc);
    	
    	switch(opc){

	        case 1:
	            //Reservar lugar
	        break;
	
	        case 2:
				impressao();
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
	        break;
    	}
    }while(opc < 4 && opc != 0);

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

void impressao(){
	Bilhete bilhetes[] = {
		{1, 10, "Inteiro", 1},
		{2, 15, "Meia-entrada", 0},
		{3, 20, "Inteiro", 1}
	};
	int tamanho = sizeof(bilhetes) / sizeof(bilhetes[0]);		
	int numeroEncontrado;

	printf("Digite o numero do bilhete que deseja buscar: ");
	scanf("%d", &numeroEncontrado);
				
	int indice = pegarBilhete(bilhetes, tamanho, numeroEncontrado);
				
	if (indice != -1) {
					
		printf("\nInformacoes do bilhete:\n");
		exibirBilhete(bilhetes[indice]);
					
	} else {
					
		printf("\nDesculpe, bilhete nao foi achado.\n");
					
	}			
}

int pegarBilhete(Bilhete bilhetes[], int tamanho, int numeroEncontrado) {
	int i;
	for (i = 0; i < tamanho; i++) {
		if (bilhetes[i].quantidadeBilhete == numeroEncontrado) {
			return i;
		}
	}
	return -1;
}

void exibirBilhete(Bilhete bilhete) {
	printf("Numero do assento: %d\n", bilhete.numeroAssento);
	printf("Tipo de ingresso: %s\n", bilhete.tipoIngresso);
	printf("Combo incluido: %s\n", bilhete.incluiCombo ? "Sim" : "Nao");
}
