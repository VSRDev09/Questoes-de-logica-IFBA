#include <stdio.h>

int main(){
	
    // Questão 1)
//    Um centro de pesquisas está inaugurando um grande acelerador de partículas, com um emissor e
//três sensores, numerados 1, 2 e 3. Uma partícula, após sair do emissor, entra no acelerador onde
//pode dar várias voltas sendo acelerada a velocidades muito altas. Num determinado momento, a
//partícula sai do acelerador por uma das três saídas, atingindo um dos sensores. A figura mostra o
//caminho por onde as partículas trafegam, com uma graduação de 1 quilômetro. Por exemplo, do
//emissor até o acelerador são 3 quilômetros e a circunferência do acelerador tem 8 quilômetros.
//Escreva um programa em C, que dada a distância total, em quilômetros, percorrida por uma certa
//partícula trafegando do emissor até algum sensor, calcule e informe qual será o sensor atingido
//pela partícula. Por exemplo, veja que se a distância total for 23 quilômetros, então a partícula tem
//que ter atingido o sensor 2.

    printf ("Questao 1)\n\n");
    int kmPercorridos, sensor;
    
    printf("Informe a quantidade de quilometros : ");
    scanf("%d", &kmPercorridos);
    
    sensor = ((kmPercorridos - 3) % 8) - 2;
    
    printf("Sensor : %d\n", sensor);

// Questão 2)
//Um cadeado possui um sistema de código para ser aberto em vez de uma chave. O cadeado
//contém uma sequência de três rodas. Cada roda possui os 9 dígitos (0..9) em ordem. Se você
//move uma roda para cima, o dígito que ela mostra muda para o próximo dígito (se o dígito
//mostrado for '9', então ela muda para '0'). Se você move uma roda para baixo, ela muda para o
//dígito anterior (se a dígito mostrado for '0', ela muda para '9').
//O cadeado abre quando as rodas mostrarem uma determinada sequência numérica. Escreva um
//programa que leia a configuração atual do cadeado (número atualmente exibido pelas rodas) e o
//número de desbloqueio (a senha armazenada nas rodas) e indique qual o menor número de
//movimentos necessários para abrir o cadeado. Por exemplo, se o número atual for 152 e o
//segredo for 971, serão precisos: dois movimentos para o primeiro número (1→0→9), dois
//movimentos para o segundo número (5→6→7) e um número para o terceiro número (1→2), logo a
//saída deverá ser 5.

printf ("\n\nQuestao 2) \n\n");

int atual, senha;
printf ("Informe a configuracao atual do cadeado: ");
scanf ("%d", &atual);
printf ("Informe a senha do cadeado: ");
scanf ("%d", &senha);

// 152 --> 971       0123456789
int alg1, alg2, alg3;
int senha1, senha2, senha3;

alg1 = atual/100;
alg2 = atual%100/10;
alg3 = atual%10;

senha1 = senha/100;
senha2 = senha%100/10;
senha3 = senha%10;

int distancia, cima, baixo;

if (alg1<=senha1){
	cima = senha1 - alg1;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	}
} else {
	cima = alg1 - senha1;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	}
}
//////////////////////////////////////////	
if (alg2<=senha2){
	cima = senha2 - alg2;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	}
} else {
	cima = alg2 - senha2;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	} 
	  }
////////////////////////////////////////	
if (alg3<=senha3){
	cima = senha3 - alg3;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	}
} else {
	cima = alg3 - senha3;
	baixo = 10 - cima;
	if (cima<=baixo){
		distancia+=cima;
	} else {
		distancia += baixo;
	}
}
printf ("Menor distancia: %d", distancia);


}
