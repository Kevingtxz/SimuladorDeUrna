/* 1. Criar urna eletrônica em C
 2. Primeiro passo, verificar documentos eleitorais
 3. Segundo passo, escolher opções para prefeiro e para vereadores. 1 para 4
 4. Prefeiro ganha com votos > 50% votos válidos
 5. O programa só funciona entre 8 e 17horas
 */

// referências : https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/ ; https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/ ; 

/*
	Documento com foto: certificado de reservista, carteira de trabalho, carteira nacional de habilitação ou a própria carteira de identidade.

	Título de Eleitor: nele consta sua zona e seção onde irá votar. Você também pode optar por baixar o aplicativo do e-Título. 
*/

#include <stdio.h>
#include <windows.h>
int main(){

    SYSTEMTIME lt = {0};

	int votantes = 10;

	while(8 < lt.wHour <17){
		for(;votantes!= 0; votantes--){
			printf('Digite seu CPF, somente números:')
   			scanf("%d", &cpf);
			int digito1 = 0;
			int	digito2 = 0;
			int soma1 = 0;
			int soma2 = 0;
			short multiplicadores[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
			int	i;

			for (i = 0; i < 9; i++)
				soma1 += (cpf[i] * multiplicadores[i+1]);
			for (i = 0; i < 10; i++)
				soma2 += (cpf[i] * multiplicadores[i]);

			digito1 = 11 - (soma1 % 11);
			digito2 = 11 - (soma2 % 11);

			digito1 >= 10 ? digito1 = 0 : digito1;
			digito2 >= 10 ? digito2 = 0 : digito1;

			if (cpf[9] != digito1 || cpf[10] != digito2){
				printf('Digite um número válido:')
  				  scanf("%d", &testInteger);  
            }


			printf('Digite seu Título:')
			int titulo;
			// if (titulo==13 | titulo==12){}

			votantes++;

        }
    }
}
