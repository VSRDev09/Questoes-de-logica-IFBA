#include <stdio.h>
int main () {
	
// Questão 1	(2,0)
//Escreva um programa em C, que	leia um	 número	menor que 9999 e mostre	a	
//soma	dos dígitos centrais (2º e 3º dígitos).	Assim, se o número informado for	
//4326,	a saída	do program devera ser 5	(3+2).
printf ("Questao 1)\n");
printf ("Informe um numero menor que 9999: ");
int num;
scanf ("%d", &num);
if (num>9999){
	printf ("Numero invalido!");
	return 0;
} else {
	int alga2 = num%1000/100;
int alga3 = num%100/10;
num = alga2 + alga3;
printf ("Resposta: %d\n\n", num);
}


// Questão 2)
// Escreva um programa em C, que leia um número menor que 9999,
// representando uma senha. O programa deve verificar se a senha
// é válida (e imprimir “Senha válida”), ou se a senha viola alguma
// das seguintes regras, caso em que o programa deverá apresentar
// a mensagem de violação correspondente:

//                   Regra                                  |                         Mensagem
//                                                           |
// 1 – Algarismos iguais: a senha é formada                |  “A senha é formada por algarismos iguais”
// por quatro algarismos idênticos. Ex: 5555               |
//                                                           |
// 2 – Sequência crescente: a senha é                      |  “A senha é formada por uma sequência crescente”
// formada por algarismos que formam uma                   |
// sequência crescente. Ex.: 3456                          |
//                                                           |
// 3 – Sequência decrescente: a senha é                    |  “A senha é formada por uma sequência decrescente”
// formada por algarismos que formam uma                   |
// sequência decrescente. Ex.: 4321                        |


printf ("Questao 2)\n");
int senha;
printf ("Informe uma senha menor que 9999: ");
scanf ("%d", &senha);
int n1 = senha/1000;
int n2 = senha%1000/100;
int n3 = senha%100/10;
int n4 = senha%10;

if (senha>9999){
	printf ("Senha invalida!");
	return 0;
} else if (n1 == n2 && n1 == n3 && n1 == n4){
	printf ("Senha Invalida!\nA senha eh formada por algarismos	iguais");
	
} else if (n1<n2 && n3 < n4){
		printf ("Senha Invalida!\nA	 senha eh formada por uma sequencia crescente");
	
} else if (n1>n2 && n3 > n4) {
	printf ("Senha Invalida!\nA	 senha eh formada por uma sequencia decrescente");
} else {
	printf ("Senha valida!");
}

// Questão 3)
// Escreva um programa em C, que leia quatro notas de um aluno e imprima a nota
// final deste aluno. O cálculo da nota final é feito descartando-se a menor das
// quatro notas e calculando a média aritmética das três notas restantes.


printf ("\nQuestao 3)\n");
float nota1, nota2, nota3, nota4;
printf ("Informe a nota1: ");
scanf ("%f", &nota1);
printf ("Informe a nota2: ");
scanf ("%f", &nota2);
printf ("Informe a nota3: ");
scanf ("%f", &nota3);
printf ("Informe a nota4: ");
scanf ("%f", &nota4);

if (nota1<nota2 && nota1<nota3 && nota1<nota4){
	nota1=0;
} else if (nota2<nota1 && nota2<nota3 && nota2<nota4){
	nota2=0;
} else if (nota3<nota2 && nota3<nota1 && nota3<nota4){
	nota3=0;
} else if (nota4<nota2 && nota4<nota3 && nota4<nota1){
	nota4=0;
}

float media = (nota1+nota2+nota3+nota4)/3;
printf ("Media do aluno: %.1f: ", media);

// Questão 4) (3,0)
// Escreva um programa em C, que leia duas sequências de três números 
// correspondendo à idade em anos, meses e dias de duas pessoas. O programa 
// deve verificar e imprimir qual das duas pessoas (a primeira ou a segunda) 
// é mais velha ou se elas possuem a mesma idade. Por exemplo, se os valores 
// lidos forem 8 anos, 4 meses e 2 dias para a primeira pessoa e 8 anos, 
// 3 meses e 15 dias para a segunda; o programa deve imprimir: “A primeira 
// pessoa é mais velha”.

printf ("\nQuestao 4)\n");
printf ("Informe respectivamente o Ano, Mes e Dia da Pessoa 1:\n");
int ano, mes, dia;
scanf ("%d %d %d", &ano, &mes, &dia);
printf ("Informe respectivamente o Ano, Mes e Dia da Pessoa 2:\n");
int ano2, mes2, dia2;
scanf ("%d %d %d", &ano2, &mes2, &dia2);

if (ano > ano2){
	printf ("A primeira pessoa eh mais velha");
	return 0;
} else if (ano2>ano){
	printf ("A segunda pessoa eh mais velha");
}
else if (ano2==ano){
	if (mes>mes2){
		printf  ("A primeira pessoa eh mais velha");
	} else if (mes2>mes){
	printf ("A segunda pessoa eh mais velha");
	} else if (mes2==mes){
		if (dia>dia2){
		   		printf  ("A primeira pessoa eh mais velha");
		} else {
		  		printf ("A segunda pessoa eh mais velha");
		}
	}
}
}








