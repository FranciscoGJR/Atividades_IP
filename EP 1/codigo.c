/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   94       - Luciano Digiampietri                               **/
/**                                                                 **/
/**   Primeiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   Francisco Olivera Gomes Junior           12683190             **/
/**                                                                 **/
/*********************************************************************/


        /*Caixa eletronico das Ilhas Weblands, com estoque ilimitado de cedulas
        de B$50,00, B$20,00, B$5,00 e B$1,00.*/


#include <stdio.h>

/* Numero de cedulas */
int n50, n20, n5, n1;

void fazRetirada(int valor) {

    if (valor <= 0) n50 = n20 = n5 = n1 = -1;
    else{

        n50 = valor / 50;   //RETIRAR NOTAS DE R$50,00
        valor %= 50;

        n20 = valor / 20;   //RETIRAR NOTAS DE R$20,00
        valor %= 20;

        n5 = valor / 5;     //RETIRAR NOTAS DE R$5,00
        valor %= 5;

        n1 = valor;     //DEFINIR NOTAS DE R$1,00
    }
}

int main() {

	int valor;

	valor = 4354 ;
	fazRetirada(valor);
	printf("Valor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);
	printf("Confere = %d\n", n50*50 + n20*20 + n5*5 + n1);

	valor = -21;
	fazRetirada(valor);
	printf("\nValor: %i\n",valor);
	printf("Notas de 50: %i\n", n50);
	printf("Notas de 20: %i\n", n20);
	printf("Notas de 5:  %i\n", n5);
	printf("Notas de 1:  %i\n", n1);
	printf("Confere = %d\n", n50*50 + n20*20 + n5*5 + n1);
	return 0;
}
