#include <stdio.h>
int main ()
{
	// Questão 1)
//	Carl aprendeu recentemente o que é o sistema binário. Ele aprendeu, por exemplo, que a
//representação binária de um inteiro positivo k é uma string anan−1...a1a0 onde cada ai é um dígito binário
//0 ou 1, iniciando com an = 1, e de tal forma que k = Σ ai × 2i.
//César, o irmão mais velho de Carl, resolveu lhe propor um desafio: "Olhe Carl, eu tenho uma pergunta
//fácil para você: eu te darei um valor inteiro, e você tem que me diz quantos dígitos 1 existem na
//representação binária deste número. Se prepare!". Carl aceitou o desafio.
//Para ajudar Carl, você deve escrever um algoritmo em C, que o ajude nesta tarefa. O algoritmo deverá
//ler um inteiro entre 0 e 32 e imprimir o total de dígitos 1 existentes no número.
printf ("Questao 1: \n\n");
  printf ("Digite um numero entre 0 e 32: ");
  int num;
  int num_post;
  scanf("%d", &num);
  num_post=num;
  if (num>32){
    printf ("Numero invalido!");
    return 0;
  } else {
    int alga1, alga2, alga3, alga4, alga5, alga6;
    alga6 = num%2;
    num/=2;
    alga5 =num%2;
    num/=2;
    alga4 = num%2;
    num/=2;
    alga3 = num%2;
    num/=2;
    alga2 = num%2;
    alga1= num/2;
    int total = alga1 + alga2 + alga3 + alga4 + alga5 + alga6;
    int bin = (alga1*100000) + (alga2*10000) + (alga3*1000) + (alga4*100) + (alga5*10)+ alga6;
    printf ("O numero %d na base 10 (%d na base 2)\nContem %d numeros 1 no seu corpo", num_post, bin, total );
  }
  
 // Questão 2) 
 
 // Um algoritmo de dígito verificador da setelândia é baseado na conversão de números para a
// base sete como descrito a seguir:
//Lê-se um número de 0 a 999 escrito na base 10. Em seguida, converte-se esse número para a base 7.
//Soma-se os algarismos do número na base 7, e, por fim, calcula-se o resto da divisão desta soma por 7.
//Este número deve ser inserido à direita do número original (como dígito verificador), e o número
//gerado deve ser impresso.
//Por exemplo: Caso o número lido seja (999)10, o algoritmo deverá calcular a representação na base 7
//deste número: (2625)7. Deve-se buscar o resto da divisão, da soma destes algarismos (2+6+2=5=15)
//por 7 (1). O número gerado com DV, será 9991. Apenas um número deve ser impresso como saída do
//algoritmo.
//Escreva um algoritmo em C, que realize a geração do número com DV de acordo com as regras
//apresentadas.

  printf ("\n\nQuestao 2:\n\n ");
  int entrada, num_fin;
  printf ("Digite um numero entre 0 e 999: ");
  scanf ("%d", &entrada);
  num_fin = entrada;
  if (entrada> 999 || entrada<0){
  	printf ("Numero invalido!");
  	return 0;
  } else {
  	int alga1, alga2, alga3, alga4;
  	alga4 = entrada%7;
  	entrada/=7;
  	alga3 = entrada%7;
  	entrada/=7;
  	alga2 = entrada%7;
  	alga1 = entrada/7;
  	
  	int dv = (alga1 +alga2 +alga3 +alga4)%7;
  	int saida = num_fin*10+dv;
  	printf ("Numero gerado com DV: %d", saida);
  	
  }
  
  
  
  
  
  
  
  
  
  
  
}
