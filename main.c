/*Algortimo que calcula tempo para se ler um livro*/

#include <stdio.h>
#include <string.h>

int main(){
	int numPaginas;
	int tempoPorPagina;
	char nomeLivro[100];
	
	/*Faz o recolhimento de dados sobre o nome do livro*/

	printf("Qual o nome do seu livro? \n");
	fgets(nomeLivro,100,stdin);
	
	/*Verifica se o nome do livro é muito curto*/
	
	if(strlen(nomeLivro) <= 3){
		while(strlen(nomeLivro) <= 3){
			printf("Nome de livro inválido, tente novamente: \n");
			fgets(nomeLivro,100,stdin);
		}
	}
	
	/*Faz o recolhimento de dados refernete a quantidade de páginas*/

	printf("Quantos minutos você demora em média para se ler uma página? \n");
	scanf("%d", &tempoPorPagina);
	
	/*Verifica se o tempo digitado foi muito curto ou longo*/

	if(tempoPorPagina <= 0){
		while(tempoPorPagina <= 0){
                        printf("Você inseriu um tempo muito inválido, tente novamente: \n");
                        scanf("%d", &tempoPorPagina);
		}
	}

	if(tempoPorPagina > 60){
		while(tempoPorPagina > 60){
			printf("Você inseriu um tempo muito longo, tente novamente: \n");
			scanf("%d", &tempoPorPagina);
		}	
	}
	
	/*Faz o recolhimento de dados referente a quantidade de páginas do livro*/

	printf("Quantas páginas o livro que deseja ler possui? \n");
	scanf("%d", &numPaginas);
	
	/*Verifica se o número de páginas é muito curto*/

	if(numPaginas <= 0){
                while(numPaginas <= 0){
                        printf("Você inseriu um número de páginas inválido, tente novamente: \n");
                        scanf("%d", &numPaginas);
        	}
	}

	/*Faz operação de calcular o número de páginas e imprime o valor ao usuário*/

	float totalDeTempo = tempoPorPagina * numPaginas;
	float tempoEmHoras = totalDeTempo / 60; 

	printf("Você levará em média de %1.1f ", tempoEmHoras);
	printf("horas para o ler o livro %s ", nomeLivro);
	
	return 0;
}
