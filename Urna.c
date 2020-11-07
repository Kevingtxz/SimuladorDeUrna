/*
   1. Criar urna eletr�nica em C
   2. Primeiro passo, verificar documentos eleitorais
   3. Segundo passo, escolher op��es para prefeiro e para vereadores. 1 para 4
   4. Prefeiro ganha com votos > 50% votos v�lidos
   5. O programa s� funciona entre 8 e 17horas


    refer�ncias:
    https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html
    https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/
    https://stackoverflow.com/questions/701524/getting-the-current-hour-in-c-using-time-h
 */

// 2
/*
    http://clubes.obmep.org.br/blog/a-matematica-nos-documentos-titulo-de-eleitor/
    T�tulo de Eleitor, certificado de reservista, carteira de trabalho, carteira nacional de habilita��o ou a pr�pria carteira de identidade."
    N�o iremos considerar t�tulo com 13 d�gitos
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

	int votantes = 5;

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

	int votos_prefeito_1 = 0;

	char nome_prefeito_1 = "Kevin";
	char nome_prefeito_2 = "Leticia";
	char nome_vereador_1 = "Jonathan";
	char nome_vereador_2 = "Ruan";
	char nome_vereador_3 = "Fernanda";
	char nome_vereador_4 = "Juliana";
	char nome_vereador_5 = "Marcelinho";
	char nome_vereador_6 = "Praticia";
	char nome_vereador_7 = "Jonas";
	char nome_vereador_8 = "Horlando";


	int titulo;


	while(7 < hour <18) {

	    int continuo = 1;

	    if(continuo != 1){
            printf("Vota��o encerrada, o n�mero de votos foi %d e os candidatos eleitos foram ");
            return 1;
        }

	    printf("----------------------------------\n");
        printf("| |--------------|  ---------    |\n");
        printf("| |    BRASIL    |  | 1 2 3 |    |\n");
        printf("| |  UM PAIS DE  |  | 4 5 6 |    |\n");
        printf("| |    TODOS     |  | 7 8 9 |    |\n");
        printf("| |--------------|  |   0   |    |\n");
        printf("|                   (B)(V)(C)    |\n");
	    printf("----------------------------------\n");

	    // Valida��o do T�tulo do eleitor, refer�ncia: https://siga0984.wordpress.com/2019/05/01/algoritmos-validacao-de-titulo-de-eleitor/
        printf("Responda as seguinte questoes com '1' para 'sim' ou qualquer outro numero para 'n�o':\n");
        printf("Candidato, voc� trouxe o t�tulo de eleitor?\n");
        scanf("%d", &titulo);

        if(titulo==1){
            printf("Candidato, voc� trouxe o certificado reservisa? Digite '2' caso nao seja obrigatorio para voce\n");
            if(0<titulo<3){

            }

        }
        // Valida��o do certificado reservisa

        // Valida��o da carteira de trabalho ou valida��o carteira nacional de habilita��o
    }
    return 0;
}

