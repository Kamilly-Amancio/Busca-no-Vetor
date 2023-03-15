// PESQUISA EM VETOR

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese"); 

	int vetor[10],i, num,v; //'i' - indice do vetor, 'num' - valor a ser pesquisado, 
	
	printf("----------PEDINDO VALORES DO VETOR----------");
	
	for(i=0;i<10;i++){
		
		printf("\nDigite os valores %i do  vetor:", i);
		scanf("%i", &vetor[i]);
		
	}
	
	system("cls");
		
		printf("\n----------PESQUISANDO VALORES DO VETOR----------");
		printf("\nDigite o valor a pesquisar:");
		scanf("%i", &num);
		
	while(vetor[i]!=num){
		v++;
	}if (vetor[i]==num){
		printf("\nNúmero encontrado, o seu número é [%i] na posição [%i]", num, i);
	}else{
		printf("\nNúmero NÃO encontrado, digite um número válido !");
	}
	
	getch();
	return 0;
}
