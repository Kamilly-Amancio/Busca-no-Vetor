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
		printf("\nN�mero encontrado, o seu n�mero � [%i] na posi��o [%i]", num, i);
	}else{
		printf("\nN�mero N�O encontrado, digite um n�mero v�lido !");
	}
	
	getch();
	return 0;
}
