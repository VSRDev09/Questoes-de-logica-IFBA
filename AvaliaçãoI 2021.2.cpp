#include <stdio.h>
int main ()
{
	// Questão 1)
	
//Diferente dos computadores binários tradicionais, que fazem representações numéricas
//usando dígitos binários, os computadores ternários balanceados fazem sua representação numérica
//através de dígitos ternários balanceados ou trits.
//No sistema de numeração ternário balanceado, de forma similar aos sistemas de representação tradicionais, 
//os valores numéricos são posicionais. Nesse caso, a base aplicada é a base três. Assim, o dígito
//mais à direita vale um, contudo, deslocá-lo uma posição à esquerda, equivale a multiplicá-lo por três.
//Existem três trits possíveis: 2, 1 e 0. O trit 2 adiciona o valor posicional correspondente, o 1 não adiciona nem subtrai e o 0,
/// subtrai o valor em questão. Por exemplo: o número 222 em ternário balanceado equivale a: 9 + 3 + 1 = 13.
//  Já o número 2010, equivale a 27-9+0-1=17.
//Escreva um programa em C, que leia um número de até quatro trits e imprima o seu equivalente em
//decimal.
printf ("Questao 1)\n");
printf ("Digite um numero de 4 digitos (Mas cada algarismo so pode ser 0, 1 ou 2): ");
int num;
scanf ("%d", &num);
if (num > 9999){
	printf ("Numero invalido!");
	return 0;
}
int alga4, alga3, alga2, alga1;
alga4=num/1000;
alga3=num%1000/100;
alga2 = num%100/10;
alga1 = num%10;
if (alga4>2 || alga3>2 || alga2>2 || alga1>2){
	printf ("Numero invalido!");
	return 0;
}


if (alga4==2){
	alga4=27;
} else if (alga4==1){
	alga4 = 0;
} else if (alga4 == 0){
	alga4=0;
}
if (alga3==2){
	alga3=9;
} else if (alga3==1){
	alga3 = 0;
} else if (alga3 == 0){
	alga3=-9;
}
if (alga2==2){
	alga2=3;
} else if (alga2==1){
	alga2 = 0;
} else if (alga2 == 0){
	alga2=-3;
}
if (alga1==2){
	alga1=1;
} else if (alga1==1){
	alga1 = 0;
} else if (alga1 == 0){
	alga1=-1;
}

int decimal = alga4 + alga3 + alga2 + alga1;
printf ("Decimal: %d", decimal);

//Questão 2)

// O código de confirmação de uma transação bancária é calculada considerando os quatro dígitos finais do cartão 
//e o horário da transação no formato HHMM. Para o cálculo, são gerados dois números considerando para o primeiro os maiores
// numerais de cada posição, e para o segundo o menor númeral de cada posição. 
//Em seguida, o menor número é subtraído do maior e seu invertido é gerado. Este último valor é o código de confirmação da transação.
//Por exemplo, para o cartão 4392 e uma transação realizada às 12:15, o código de confirmação será
//igual a 3813; calculado da seguinte forma: 4395 - 1212 = 3183, que quando invertido, gera o número 3813.
//Escreva um programa em C, que leia um número de quatro dígitos do cartão e um outro representando o horário no formato HHMM e 
//imprima o código de confirmação calculado.

printf ("\n\nQuestao 2)\n");
int num_bank, hora;
printf ("Insira os ultimos 4 digitos do seu cartao: ");
scanf ("%d", &num_bank);
printf ("Insira o horario da transicao (HH/MM): ");
scanf ("%d", &hora);

int algab1, algab2, algab3, algab4;
algab1 = num_bank/1000;
algab2 = num_bank%1000/100;
algab3 = num_bank%100/10;
algab4 = num_bank%10;

int hr1, hr2, hr3, hr4;

hr1 = hora/1000;
hr2 = hora%1000/100;
hr3 = hora%100/10;
hr4 = hora%10;

int ope1, ope2;

if (algab1>hr1){
	ope1 = algab1*1000;
} else {
	ope1 = hr1*1000;
}
if (algab2>hr2){
	ope1+= algab2*100;
} else {
	ope1+= hr2*100;
}
if (algab3>hr3){
	ope1+= algab3*10;
} else {
	ope1+= hr3*10;
}
if (algab4>hr4){
	ope1+= algab4;
} else {
	ope1+= hr4;
}
/////////////////////////

if (algab1<hr1){
	ope1 = algab1*1000;
} else {
	ope2 = hr1*1000;
}
if (algab2<hr2){
	ope2+= algab2*100;
} else {
	ope2+= hr2*100;
}
if (algab3<hr3){
	ope2+= algab3*10;
} else {
	ope2+= hr3*10;
}
if (algab4<hr4){
	ope2+= algab4;
} else {
	ope2+= hr4;}
	
int code = ope1 - ope2;
int c1, c2, c3, c4;
c1 = code/1000;
c2 = code%1000/100;
c3 = code%100/10;
c4 = code%10;

printf ("Codigo de verificacao: %d%d%d%d", c4, c3, c2, c1);
}





