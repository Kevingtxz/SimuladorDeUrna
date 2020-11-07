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

	int candidato_prefeito_1 = 0;
	int candidato_prefeito_2 = 0;
	int candidato_vereador_1 = 0;
	int candidato_vereador_2 = 0;
	int candidato_vereador_3 = 0;
	int candidato_vereador_4 = 0;
	int candidato_vereador_5 = 0;
	int candidato_vereador_6 = 0;
	int candidato_vereador_7 = 0;
	int candidato_vereador_8 = 0;

	char nome_prefeito_1[5] = "Kevin";
	char nome_vice_1[5] = "Joana";
	char nome_prefeito_2[7] = "Leticia";
	char nome_vice_2[5] = "Paulo";
	char nome_vereador_1[8] = "Jonathan";
	char nome_vereador_2[4] = "Ruan";
	char nome_vereador_3[8] = "Fernanda";
	char nome_vereador_4[7] = "Juliana";
	char nome_vereador_5[10] = "Marcelinho";
	char nome_vereador_6[8] = "Praticia";
	char nome_vereador_7[5] = "Jonas";
	char nome_vereador_8[8] = "Horlando";

	int pergunta;
	int titulo;
	int carteira;
	int reservista;
	int voto;

	int votos_validos = 0;

	printf("Voce votou em %s para prefeito e em %s para vice.\n", nome_prefeito_1, nome_vice_1);


	while(7 < hour <18) {

	    int continuo = 1;

	    if(continuo != 1){
            printf("Votacao encerrada, o numero de votos foi %d e os candidatos eleitos foram %s\n", votos_validos);
            return 1;
        }

        printf("Responda as seguinte questoes com '1' para 'sim' ou qualquer outro numero para 'nao':\n");
        printf("Eleitor, voce trouxe o título de eleitor?\n");
        scanf("%d", &pergunta);
        printf("Eleitor, digite seu titulo?\n");
        scanf("%d", &titulo);

        if(pergunta==1){
            printf("Eleitor, voce trouxe o certificado reservisa? Digite '2' caso nao seja obrigatorio para voce\n");
            scanf("%d", &pergunta);
            if(pergunta==1){
                printf("Eleitor, digite seu certificado de reservista?\n");
                scanf("%d", &reservista);
                pergunta = 0;
            }
            if(pergunta==2){
                printf("Eleitor, voce trouxe sua carteira de trabalho, de habilitacao ou de identidade?\n");
                scanf("%d", &pergunta);
                if(pergunta==1){
                    printf("Eleitor, digite sua carteira de trabalho, de habilitacao ou de identidade?\n");
                    scanf("%d", &carteira);
                    pergunta = 0;
                }
            }
            if(pergunta==0){
                printf("Seus documentos conferem, agora voce será encaminho para o voto em seu prefeito.\n");
                printf("\n");
                printf("----------------------------------\n");
                printf("| |--------------|  ---------    |\n");
                printf("| |    BRASIL    |  | 1 2 3 |    |\n");
                printf("| |  UM PAIS DE  |  | 4 5 6 |    |\n");
                printf("| |    TODOS     |  | 7 8 9 |    |\n");
                printf("| |--------------|  |   0   |    |\n");
                printf("|                   (B)(V)(C)    |\n");
                printf("----------------------------------\n");
                printf("\n");
                printf("Digite '42' para o prefeito 'Kevin' e a vice 'Joana' ou '53' para a prefeita 'Leticia' e para o vice 'Jonas':\n");
                scanf("%d", &voto);
                if(voto==42){
                    printf("Voce votou em %s para prefeito e em %s para vice.\n", nome_prefeito_1, nome_vice_1);
                    candidato_prefeito_1 += 1;
                }
                if(voto==53){
                    printf("Voce votou em %s para prefeito e em %   s para vice.\n");
                    candidato_prefeito_1 += 1;
                    if(voto!=42){

                    }
                }

            }
            if(pergunta!=0){
                printf("E necessario os documentos para o voto.\n");
            }
            printf("Continuar a votacao? '1' para 'sim' ou qualquer outro digito para 'nao':\n");
            scanf("%d", &continuo);

            votos_validos += 1;
        }
    }
    return 0;
}
