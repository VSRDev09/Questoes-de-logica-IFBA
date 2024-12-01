#include <stdio.h>
int main ()
{
	//  Questão 1)
//	Na álgebra de inteiros foi definida uma nova operação chamada de maximização de inteiros. A
//maximização de dois números inteiros A e B segue as seguintes regras:
//1. Inicialmente fazemos A e B terem o mesmo número de dígitos, adicionando zeros à esquerda
//conforme necessário.
//2. Então cada dígito de A (do menos significativo ao mais significativo) é comparado com o dígito
//correspondente de B. Nesta comparação, o dígito de menor valor é eliminado do número a que
//pertence (se eles são iguais, nenhum é eliminado).
//3. O resultado da operação é a dupla de números formados pelos dígitos remanescentes. Caso não
//haja dígitos remanescentes em um dos números, o equivalente na dupla resultado para este número
//é -1.
//Por exemplo, considere a maximização de 453 e 92. Após o passo 1, teremos: 453 e 092; em
//seguida compara-se 4 > 0; 5 < 9 e 3>2. Será eliminado o 5 do primeiro número e serão eliminados
//o 0 e o 2 do segundo número. A dupla resultado será (43 e 9).
//Sua tarefa é escrever um programa em C, que calcule a operação maximização para dois inteiros
//entre 0 e 999

printf ("Questao 1)\n\n");
printf ("Digite dois inteiros entre 0 e 999: ");
int num1, num2;
scanf ("%d %d", &num1, &num2);
if (num1 > 999 || num2 > 999){
	printf ("Numero invalido!");
	return 0;
} else {
	int num1dv1, num1dv2, num1dv3, num2dv1, num2dv2, num2dv3;
	
	num1dv1 = num1/100;
	num1dv2 = num1%100/10;
	num1dv3 = num1%10;
	
	num2dv1 = num2/100;
	num2dv2 = num2%100/10;
	num2dv3 = num2%10;
	
	if (num1dv1>num2dv1){
		num2dv1=0;
	} else {
		num1dv1=0;
	}
	
	if (num1dv2>num2dv2){
		num2dv2=0;
	} else {
		num1dv2=0;
	}
	
	if (num1dv3>num2dv3){
		num2dv3=0;
	} else {
		num1dv3=0;
	}
	
	int dupla1 = num1dv1*100 + num1dv2*10 + num1dv3;
	int dupla2 = num2dv1*100 + num2dv2*10 + num2dv3;
	
	if (dupla1 == 0){
		dupla1 = -1;
	} else if ( dupla2==0){
		dupla2 = -1;
	}
	
	printf ("\nDuplas: ");
	if (num1dv1==0 && num1dv2==0 && num1dv3==0) printf ("%d", dupla1);
	if (num1dv1!=0) printf ("%d", num1dv1);
	if (num1dv2!=0) printf ("%d", num1dv2);
	if (num1dv3!=0) printf ("%d", num1dv3);
	printf (", ");
	if (num2dv1==0 && num1dv2==0 && num1dv3==0) printf ("%d", dupla2);
	if (num2dv1!=0) printf ("%d", num2dv1);
	if (num2dv2!=0) printf ("%d", num2dv2);
	if (num2dv3!=0) printf ("%d", num2dv3); // QUESTÃO TRABALHOSA DA PORRA
}
//  Questão 2)
//  Chronos possui um relógio muito antigo e valioso. Contudo, embora seus ponteiros ainda
//  funcionem perfeitamente, seus marcadores e números se tornaram ilegíveis. Para a sorte de
//  Chronos, o relógio foi construído com um mostrador que indica o valor dos ângulos medidos entre
//  os ponteiros de hora e minutos e a posição de repouso, equivalente a 00:00. Assim, quando for
//  00:00 o marcador indica de ângulos indica 000 e 000. Às 06:00, o marcador de ângulos, indicará:
//  180 e 000. Às 06:30, contudo o valor do marcador de ângulos será: 195 e 180. Você deve escrever
//  um programa, que leia os valores do marcador de ângulos e calcule a hora indicada pelo relógio.

printf ("\n\nQuestao 2)\n");
int horas, minutos;
printf ("Insira o angulo do ponteiro de horas: ");
int pont_horas, pont_min;
scanf ("%d", &pont_horas);
printf ("Agora o angulo dos minutos: ");
scanf ("%d", &pont_min);

horas = pont_horas/30;
minutos = pont_min/6;
printf ("Horas:minutos\n%d:%d", horas, minutos);
}