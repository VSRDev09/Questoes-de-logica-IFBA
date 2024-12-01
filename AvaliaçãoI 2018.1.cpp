#include <stdio.h>
int main ()
{
//	1) (5.0) - Definimos a paridade de um inteiro n como a soma dos seus bits em representação binária computada módulo (resto da divisão inteira) dois.
// Como exemplo, o número 21 = (10101)2 possui três 1s na sua representação binária e portanto ele possui paridade 1 (3 módulo 2 = 1).
//Neste problema, você deverá escrever um programa em C, que calcule a paridade de um inteiro entre 0 e 31 e então gerar um novo inteiro com paridade 0,
// formado através do acréscimo de 0 ou 1 (para gerar a paridade 0) no bit menos significativo do novo inteiro. Em seguida deverá imprimir este novo número.
//Por exemplo, se a entrada for 21 = (10101)2, a saída deverá ser 43 = (101011)2. 
//Caso a entrada seja 15 = (1111)2, a saída deverá ser 30 = (11110) 

int num, num_novo, b1, b2, b3, b4, b5, paridade, binario;

printf ("Digite um numero menor que 32: ");
scanf ("%d", &num);

if (num>=32){
	printf ("\nNumero invalido!");
	
} else {
	
b5=num%2;
num/=2;
b4=num%2;
num/=2;
b3=num%2;
num/=2;
b2=num%2;
b1= num/=2;

paridade = (b1+b2+b3+b4+b5)%2;
binario = (b1*10000)+(b2*1000)+(b3*100)+(b4*10)+(b5);
if (paridade==0){
	printf ("Paridade 0: %d0", binario);
} else {
		printf ("Paridade 0: %d1", binario);
}
	
}

//	2) (5.0) – Ao continuar sua jornada, Biu se depara com seu primeiro oponente: um incrível Rattata.
//	 Como Biu é bastante calculista, ele pede ajuda a você para descobrir se a sequência de ataques que 
//	 ele pretende utilizar contra o seu oponente irá derrotá-lo, considerando que seu pokémon não morra antes.
//No jogo, Biu utilizará apenas três ataques e cada ataque corresponde a um número. Para o Rattata ser derrotado, 
//dos três ataques selecionados por Biu, deve existir: 
// Um número maior que dez. 
// Um número par.
//Caso essas duas condições não forem satisfeitas, o Rattata não será derrotado. 
//Outra observação é que se Biu escolher o ataque de número 0, independente se as condições de vitória forem satisfeitas, 
//o Rattata também não será derrotado. 

int ataque1, ataque2, ataque3;

printf ("Biu entra em combate contra o Rattata. Desfira seu golpe!\nPoder do ataque: ");
scanf ("%d", &ataque1);
printf ("Rattata foi atordoado pelo seu ataque. Rapido! Desfira outro golpe!\nPoder do ataque: ");
scanf ("%d", &ataque2);
printf ("Otima jogada! Ele deve ser derrotada com mais um ataque. Rapido!\nPoder do ultimo ataque: ");
scanf ("%d", &ataque3);

if (ataque1==0 || ataque2 ==0 || ataque3 ==0){
	printf ("Seus ataques nao foram o suficiente. Rattata se recuperou deles e te derrotou com um unico golpe!\nGAME OVER");
	return 0;
} else if ((ataque1>10 || ataque2>10 || ataque3>10) && (ataque1%2==0 || ataque2%2==0 || ataque3%2==0) ){
	printf ("Rattata foi derrotado!\nGOOD GAME");
} else {
		printf ("Seus ataques nao foram o suficiente. Rattata se recuperou deles e te derrotou com um unico golpe!\nGAME OVER");
	return 0;
}

//	3) (5.0) – Nos primeiros anos após a Revolução Francesa, intelectuais foram encarregados de erradicar da sociedade certas tradições
// e superstições da era negra da realeza. 
//Algumas destas contribuições alcançaram um amplo sucesso, tais como o sistema métrico. Outras caíram em (quase) completo esquecimento, 
//tais como o sistema de tempo decimal, inventado pelo matemático Gilbert Romme.
//O sistema de tempo decimal divide o dia em 10 horas decimais, que são divididas em 100 minutos decimais, 
//que por sua vez são divididos em 100 segundos decimais.
//Você foi encarregado pela mundialmente famosa fabricante de relógios "Splatch" para incluir mais uma 
//característica inútil na próxima linha de produtos: um mostrador de tempo decimal.
//Sua primeira tarefa é implementar um programa em C, que converta um tempo no formato tradicional para um tempo decimal 
//com precisão de um centésimo de segundo.
//A entrada do seu programa é um único número que codifica uma hora no formato HHMMSSCC, 
//onde 0 ≤ HH ≤ 23, 0 ≤ MM ≤ 59, 0 ≤ SS ≤ 59 e 0 ≤ CC ≤ 99.
//A saída é um número que codifique o horário decimal correspondente à entrada informada correspondente, 
//no formato HMMSSCC, onde 0 ≤ H ≤ 9, 0 ≤ MM ≤ 99, 0 ≤ SS ≤ 99 e 0 ≤ CC ≤ 99.
//Por exemplo, para a entrada 14273467 (14h27m34s67/100), a saída deverá ser 6024846 (6h02m48s46/100). 

int horario_trad;

printf ("Informe o horario no formato HHMMSSCC: "); //00,000000
scanf("%d", &horario_trad);

int HH = horario_trad/1000000;
int MM = horario_trad%1000000/10000;
int SS = horario_trad%10000/100;
int CC = horario_trad%100;
printf ("Horario informado: %dh%dm%ds%d/100\n", HH, MM, SS, CC);

float seg_totais = (HH * 3600) + (MM * 60) + SS + (CC / 100.0);
int seg_dec = (seg_totais*100000)/86400;

  int H = seg_dec / 10000;                       
    int M = (seg_dec % 10000) / 100;               
    int S = seg_dec % 100;      

printf ("Horario decimal: %dh%dm%ds%d/100", H, M, S, CC);
}