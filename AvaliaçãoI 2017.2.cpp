#include <stdio.h>
int main ()
{
// Questão 1) 
// Considere um algoritmo similar ao de cálculo de dígito verificador de código de barras do tipo UPC:
//O cálculo do dígito verificador se dá como no exemplo abaixo. Considere o código fictício: 2345. 
//Para o cálculo do dígito verificador, você deve adicionar todos os de posições ímpares. 
// No exemplo, somaremos os dígitos 2 e 4 (posição 1 e 3), o que gera o valor 6. 
//Multiplique 3 pelo resultado dessa soma; no exemplo, multiplicaremos 6 por 3, o que gera o valor 18. 
//Então, deve-se somar os dígitos das posições pares (3 e 5, que estão nas posições 2 e 4, no exemplo, gerando o valor 8). 
// Adicionase a este valor, soma dos dígitos pares, o resultado do produto previamente calculado (8+18 = 26, no exemplo). 
//O dígito verificador é determinado calculando-se o número que deve ser adicionado a esta soma, para criar um múltiplo de 10; no caso
//do exemplo, o dígito verificador será 4, pois 26+4 = 30, que é igual a 10 * 3.
//Escreva um programa em C que leia UM ÚNICO número de 4 dígitos e gere UM ÚNICO número de 5 dígitos composto
//pelos dígitos lidos seguido no número verificador. Ou seja, usando o exemplo citado, o programa deveria ler o número 2345
//e gerar como saída o número 23454. 	
	
printf ("Questao 1)\n\n");
printf ("Digite um codigo de ate 4 digitos: ");
int code, codout;
scanf ("%d", &code);
codout = code;
if (code>9999){
	printf ("Numero invalido!");
	return 0;
} else {
	int p1, p2, p3 , p4;
	p1 = code/1000;
	p2 = code%1000/100;
	p3 = code%100/10;
	p4 = code%10;
	
	int impares = (p1+p3)*3;
	int pares = (p2+p4+impares);
	int dv = (pares - (((pares/10)+1)*10))*-1 ;
	int saida = codout*10+dv;
	printf ("Saida: %d", saida);
}
	
//Questão 2)
//O controle do colesterol plasmático é importante na prevenção de doenças coronarianas. Um dos fatores
//mais importantes na prevenção destas doenças é a redução dos níveis de LDL-Colesterol no plasma sanguíneo. Contudo a
//medição direta do LDL-Colesterol, uma partícula de tamanho muito menor que as do HDL-Colesterol por exemplo, requer
//processos de ultra-centrifugação, que tornam este exame muito caro e somente possível de ser executados em laboratórios
//de pesquisa com equipamentos muito específicos.
//Assim, os laboratórios costumam usar a equação de Friedewald para estimar o LDL-Colesterol à partir dos valores do Colesterol Total, HDL-Colesterol Total e Triglicerídeos:
//[colesterol total] − [HDL total] − 20% do valor de triglicerídios = LDL estimado.
//Considere a tabela abaixo e escreva um programa em C, que leia os valores de Colesterol Total, HDL- Colesterol Total e
//Triglicerídeos de um paciente, para indicar em qual categoria de nível de LDL-Colesterol, ele se encontra:
//Níveis de LDL-Colesterol Categoria
//Menor que 100mg/dl Ótimo
//100mg/dl a 129mg/dl Sub-ótimo
//130mg/dl a 159mg/dl Limítrofe
//160mg/dl a 189mg/dl Alto
//190mg/dl ou superior Muito alto	
	
printf ("\n\nQuestao 2)\n\n");
float colesterol, HDL, trigli;
printf ("Informe o colesterol total: ");
scanf ("%f", &colesterol);
printf ("Informe o HDL: ");
scanf ("%f", &HDL);
printf ("Informe os triglicerideos: ");
scanf ("%f", &trigli);
float LDL = colesterol - HDL - (trigli*0.20);
printf ("Seu nivel de LDL-colesterol: %.2f\n", LDL);
printf ("Nivel de LDL: ");
if (LDL<100){
	printf ("Otimo");
}	else if (LDL>=100 && LDL<=129){
	printf ("Sub-otimo");
}	else if (LDL>=130 && LDL<=159){
	printf ("Limitrofe");
}	else if (LDL>=160  &&  LDL<=189){
	printf ("Alto");
}	else if (LDL>=190){
	printf ("Muito Alto");
}
}