/*
   1. Criar urna eletrônica em C
   2. Primeiro passo, verificar documentos eleitorais
   3. Segundo passo, escolher opções para prefeiro e para vereadores. 1 para 4
   4. Prefeiro ganha com votos > 50% votos válidos
   5. O programa só funciona entre 8 e 17horas

    referências:
    https://br.noticias.yahoo.com/eleicoes-2020-quais-documentos-necessarios-para-votar-162643997.html
    https://stackoverflow.com/questions/701524/getting-the-current-hour-in-c-using-time-h
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

	int pergunta;
	int titulo;
	int carteira;
	int reservista;


	while(7 < hour <18) {

	    int continuo = 1;

	    if(continuo != 1){
            printf("Votação encerrada, o número de votos foi %d e os candidatos eleitos foram ");
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
	    printf("\n")
        printf("Responda as seguinte questoes com '1' para 'sim' ou qualquer outro numero para 'não':\n");
        printf("Eleitor, você trouxe o título de eleitor?\n");
        scanf("%d", &pergunta);
        printf("Eleitor, digite seu titulo?\n");
        scanf("%d", &titulo);

        if(pergunta==1){
            printf("Eleitor, você trouxe o certificado reservisa? Digite '2' caso nao seja obrigatorio para voce\n");
            scanf("%d", &pergunta);
            if(pergunta==1){
                printf("Eleitor, digite seu certificado de reservista?\n");
                scanf("%d", &reservista);
                pergunta = 0;
            }
            if(pergunta==2){
                printf("Eleitor, você trouxe sua carteira de trabalho, de habilitacao ou de identidade?\n");
                scanf("%d", &pergunta);
                if(pergunta==1){
                    printf("Eleitor, digite sua carteira de trabalho, de habilitacao ou de identidade?\n");
                    scanf("%d", &carteira);
                    pergunta = 0;
                }
            }
            if(pergunta==0){

            }
            if(pergunta!=0){
                printf("E necessario os documentos para o voto.")
            }

        }
    }
    return 0;
}
