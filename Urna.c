/*
   1. Criar urna eletrônica em C
   2. Primeiro passo, verificar documentos eleitorais
   3. Segundo passo, escolher opções para prefeiro e para vereadores. 1 para 4
   4. Prefeiro ganha com votos > 50% votos válidos
   5. O programa só funciona entre 8 e 17horas


   referências:
   https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html
   https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/
   https://stackoverflow.com/questions/701524/getting-the-current-hour-in-c-using-time-h
 */

// 2
/* referências https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html
   Título de Eleitor, certificado de reservista, carteira de trabalho, carteira nacional de habilitação ou a própria carteira de identidade."
*/
#include <stdio.h>
#include <time.h>

int main(){
    time_t now;
    struct tm *now_tm;
    int hour;
    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;

	int votantes = 50;

	int candidato_prefeito_1 = 40;
	int candidato_prefeito_2 = 10;

	int candidato_vereador_1 = 12345;
	int candidato_vereador_2 = 13345;
	int candidato_vereador_3 = 22345;
	int candidato_vereador_4 = 23345;
	int candidato_vereador_5 = 32345;
	int candidato_vereador_6 = 33345;
	int candidato_vereador_7 = 42345;
	int candidato_vereador_8 = 43345;


	while(7 < hour <18){
	    printf("----------------------------------\n");
        printf("| |--------------|  ---------    |\n");
        printf("| |    BRASIL    |  | 1 2 3 |    |\n");
        printf("| |  UM PAIS DE  |  | 4 5 6 |    |\n");
        printf("| |    TODOS     |  | 7 8 9 |    |\n");
        printf("| |--------------|  |   0   |    |\n");
        printf("|                   (B)(V)(C)    |\n");
	    printf("----------------------------------\n");

	    // Validação do Título do eleitor, referência: https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/

        // Validação do certificado reservisa

        // Validação da carteira de trabalho ou validação carteira nacional de habilitação

        break;
    }
    return 0;
}

