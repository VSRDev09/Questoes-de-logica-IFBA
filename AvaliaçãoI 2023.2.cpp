#include <stdio.h>
int main ()
{
	// Questão 1
	
//	Computadores são autômatos com a capacidade de realizar cálculos muito rapidamente. Contudo,
//nem todo cálculo pode ser feito num computador, pois, por uma limitação física de recursos, ele
//não consegue representar todos os números dentro de sua memória. Por exemplo, em um
//computador cujo tipo inteiro seja representado por 64 bits, o maior inteiro que se pode representar
//é 4.294.967.295.
//Caso alguma conta executada pelo computador dê um resultado acima desse número, ocorrerá o
//que chamamos de overflow, que é quando o computador faz uma conta e o resultado não pode ser
//representado, por ser maior do que o valor máximo permitido (em inglês overflow significa
//transbordar).
//Por exemplo, se um computador só pode representar números menores do que 256 e mandamos
//ele executar a conta 250 + 8, vai ocorrer overflow.
//Sua tarefa é escrever um programa em C, que leia um inteiro, indicando o maior número que um
//computador consegue representar, e, uma expressão codificada por um inteiro de até 7 dígitos,
//onde os três menos significativos, compõem o segundo operando, o quarto dígito menos
//significativo codifica a operação desejada (1 - para adição, 2 - para subtração, 3 - para
//multiplicação, 4 - para divisão), os restantes mais significativos compõem o primeiro operando e
//indique o resultado da operação ou se ocorrerá overflow.
//Por exemplo, para um computador cujo maior inteiro seja 256, e a expressão de entrada seja
//2501008, a saída indicará overflow. Mas, se a entrada for 502008, a saída deverá ser 42.

printf ("Questao 1)\n");
printf ("Digite o maior numero que o suposto\ncomputador consegue representar: ");
int limit;
scanf ("%d", &limit);
printf ("\nAgora digite os numeros da operacao de ate 7 digitos\nLembrando: os tres menos significativos, compoem o segundo operando, \no quarto digito menos significativo codifica a operacao desejada \n(1 - para adicao, 2 - para subtracao, 3 - para multiplicacao, 4 - para divisao), \nnos restantes mais significativos compoem o primeiro operando: ");
int code;
scanf ("%d", &code);
int operando1, operacao, operando2, saida;
operando1 = code/10000;
operacao = code%10000/1000;
operando2 = code%1000;
if (code>9999999){
	printf ("Numero invalido para essa operacao!");
	return 0;
} else if (operacao>4){
	printf ("Numero do operador invalido!");
	return 0;
	}else {
		switch (operacao){
			   	
				case 1:
	  			saida=operando1+operando2;
  		  		break;
				
				case 2:
				saida=operando1-operando2;
		  		break; 
				
				case 3:
				saida= operando1*operando2;
				break;
					   					   
				case 4:
				saida= operando1/operando2;
				break; 
		}
		 if (saida<limit){
		 	 	printf ("\nResultando da operacao: %d", saida);
		 } else {
		    	printf ("Overflow!");
		 }
	}
	
// Questão 2)

//	Um algoritmo genético pode ser definido como uma técnica utilizada para encontrar soluções
//aproximadas em problemas de otimização e busca. Uma das operações utilizadas durante a
//execução de um algoritmo genético é a mutação por swap. Nesta operação um dos bits do algoritmo
//tem o valor trocado por seu complementar. Por exemplo, considerando a seguinte numeração de
//bits - b4b3b2b1b0 - o indivíduo 28 (11100) após a operação de swap que modifica o seu bit 3 passa
//a representar o indivíduo 20 (10100).
//Escreva um programa em C, que leia um indivíduo entre 0 e 35, e um valor de bit entre 0 e 4,
//aplique a operação de mutação por swap e escreva o novo inteiro gerado.
	printf ("\n\nQuestao 2)\n");
	printf ("Informe um numero positivo menor que 36: ");
	int individuo;
	scanf ("%d", &individuo);
	if (individuo>35){
		printf ("Numero Invalido!");
			   return 0;
	} else {
		printf ("Escolha um bit de 0 a 4 para swap: ");
  		int bit;
		scanf ("%d", &bit);
		if (bit>4){
		   	printf ("Bit invalido!");
    	 	return 0;
		} else {
		  	int b5, b4, b3, b2, b1, b0;
  		//	b5 = individuo%2;
   	 	//	individuo/=2;
			  b0 = individuo%2;
 			 individuo/=2;
	  	 	 b1 = individuo%2;
   	   		 individuo/=2;
 	   		  b2 = individuo%2;
   	   		 individuo/=2;
	 	      b3 = individuo%2;
   	   		 b4= individuo/2;
   			     			  
   	 	    switch (bit){
   			 	       	case 0:
            	  		if (b0 == 1){
            			   	   	b0=0;
						  } else {
	  	   				  		 b0=1;
						  } break;
						  		  	   	   
  				  		  case 1:
 	         			  if (b1 == 1){
            			   	   	b1=0;
						  } else {
	  	   				  		 b1=1;
						  } break;
						  		  	   	   
	   	   				  case 2:
  	   	 	    		  if (b2 == 1){
            			   	   	b2=0;
						  } else {
	  	   				  		 b2=1;
						  } break;
						  		  	   	   
	   	   				  case 3:
  	   	 	    		  if (b3 == 1){
            			   	   	b3=0;
						  } else {
	  	   				  		 b3=1;
						  } break;
  	     				  
 	  	   	     		  case 4:
  	       	  		  	  if (b4 == 1){
            			   	   	b4=0;
						  } else {
	  	   				  		 b4=1;
						  } break;
				}
	  			int new_ind = (b4*10000)+(b3*1000)+(b2*100)+(b1*10)+b0;
 			  	printf ("Novo individuo apos swap: %d", new_ind);
		  		
		}
			     
	}
}
