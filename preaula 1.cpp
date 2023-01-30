#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float nota,notar,med;
int num,num2,i,j,qtd;

	printf("\nBem Vindo ao sistema de cálculo de notas!\n",i);

	num = 1;
	qtd = 0;
	
	for (i = 0; i < 5; i++){
	
	num2 = 1;
	notar = 0;
	nota = 0;	
	
	printf("\nDigite as nota do %i aluno!\n",num);
	
	for(j = 0; j < 3; j++){
	
		printf("\nDigite a nota da %i VA: ",num2);
		scanf("%f",&nota);
			
		notar = notar + nota;
		num2 = num2+1;		
	}
		med = notar/3;
		
		if(med>=60){
		printf("\nAluno %i passou de ano.\n",num);
		qtd = qtd+1;
		}else{
		printf("\nAluno %i não passou de ano.\n",num);
		}
	num = num+1;	
	}
	printf("\nA quantidade de alunos que passou de ano foi: %i.\n",qtd);

return 0;

}
