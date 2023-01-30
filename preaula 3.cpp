#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){

setlocale(LC_ALL, "Portuguese");

int i,capital,dias,taxa;
float juros;
i = 1;


while(i==1){


printf("\n\nDigite o valor da capital : ");
scanf("%i",&capital);

printf("Digite a taxa : ");
scanf("%i",&taxa);

printf("Digite os dias : ");
scanf("%i",&dias);

juros = capital * taxa * dias  / 365;

printf("O valor do juros é %f .", juros);

}

	
}
