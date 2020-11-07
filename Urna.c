/*
   1. Criar urna eletrônica em C
   2. Primeiro passo, verificar documentos eleitorais
   3. Segundo passo, escolher opções para prefeiro e para vereadores. 1 para 4
   4. Prefeiro ganha com votos > 50% votos válidos
   5. O programa só funciona entre 8 e 17horas


   referências: https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html, https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/,
 */

// 2
/* referências https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html
   Título de Eleitor, certificado de reservista, carteira de trabalho, carteira nacional de habilitação ou a própria carteira de identidade."
*/
#include <stdio.h>
#include <windows.h>
int main(){

    SYSTEMTIME lt = {0};

	int votantes = 10;

	while(8 < lt.wHour <17){
	    printf("----------------------------------\n");
        printf("| |--------------|  ---------    |\n");
        printf("| |    BRASIL    |  | 1 2 3 |    |\n");
        printf("| |  UM PAIS DE  |  | 4 5 6 |    |\n");
        printf("| |    TODOS     |  | 7 8 9 |    |\n");
        printf("| |--------------|  |   0   |    |\n");
        printf("|                   (B)(V)(C)    |\n");
	    printf("----------------------------------\n");

	    // Validação do Título do eleitor, referência: https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/

        // Validação do

        break;
    }
}

