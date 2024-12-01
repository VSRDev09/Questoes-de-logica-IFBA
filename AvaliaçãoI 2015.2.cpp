#include<stdio.h>
int main ()
{
//Questão 1)	Considere o seguinte problema:
//Você precisa construir um programa que possa ser utilizado em bares e restaurantes. 
//O objetivo do programa é calcular o valor da conta por pessoa, incluindo neste valor os 10% de taxa de serviço.  

//a)	Identifique qual(is) é/são a(s) entrada(s) necessária(s) para este algoritmo e o tipo adequado para representar esta(s) entrada(s).
//b)	Identifique qual(is) é/são a(s) saída(s) deste algoritmo e o tipo adequado para representar esta(s) saída(s).
//c)	Escreva um programa em C que implemente o algoritmo que resolve este problema. 
printf ("Questao 1\n\n");
float pedido, conta;
printf ("Informe quanto ficou ao todo dos pedidos: ");
scanf ("%f", &pedido);

conta = pedido + (pedido*0.10);
printf ("A conta ficou %.2f\n\n", conta);

// Questão 2)
//Escreva um número de até três dígitos (menor ou igual a (777)8) em octal (sistema de numeração base 8) e escreva o seu equivalente em base 10.
// Por exemplo, o número (435)8, equivale ao número (285)10. (4*82 + 3*81 + 5*80 = 4*64+ 3*8+5*1=256+24+5=285).  
// Faça o teste de mesa considerando os valores indicados (entrada = 435; saída=285).
printf ("Questao 2\n\n");
printf ("Informe um numero de ate tres digitos menor ou igual a 777: ");
int num;
scanf("%d", &num);
if (num>777){
	printf ("NUmero invalido!");
	return 0;
} else {
int alga1, alga2, alga3;
alga1=num/100;
alga2 = num %100/10;
alga3 = num%10;
int new_num= (alga1*64)+ (alga2*8)+alga3;
printf ("Numero em decimal: %d\n\n", new_num);}


// Questão 3)
// Dígitos verificadores são um mecanismo de autenticação utilizado para verificar a validade e a autenticidade de um valor numérico, 
// evitando dessa forma fraudes ou erros de transmissão ou digitação. 
//Para o cálculo do dígito verificador de códigos de barras, deve-se multiplicar por três a soma de todos os dígitos das posições ímpares. 
//Depois disso, deve-se adicionar a este valor, todos os dígitos das posições pares. 
//O dígito verificador é calculado como o número que deve ser adicionado a este valor para se chegar a múltiplo de 10. 
//Por exemplo, considere o número 22345.  O triplo da soma dos números das posições ímpares é: 3 x (2+3+5), que resulta em 30. 
//Se somarmos a este número os números das posições pares teremos: 30 + 2 + 4 = 36. 
//Assim, o valor para se chegar a um múltiplo de 10 é 4 (36+4=40). Sendo, portanto 4, o dígito verificador.
//Escreva um programa em C, que calcule e imprima o DV de um código de barras de 5 dígitos.

printf ("Questao 3\n\n");

int code;
printf ("Digite um codigo de barras de 5 digitos: ");
scanf("%d", &code);
if (code<10000){
	printf ("Codigo invalido!");
	return 0;
	
} else {
	int alga1, alga2, alga3, alga4, alga5;
alga1 = code/10000;
alga2 = code %10000/1000;
alga3 = code%1000/100;
alga4 = code%100/10;
alga5 = code%10;

int dv = (((3* (alga1+alga3+alga5) + alga2 + alga4)%10)-10)*-1; // para achar o dv eu apliquei a formula da questão para achar o 36
printf ("Digito verificador: %d", dv);							// depois eu peguei o resto da divisão por 10, no caso do exemplo é 6
																// subtraí 10, ficou -4. Então multiipiquei por -1 pra ficar positivo
}





}
