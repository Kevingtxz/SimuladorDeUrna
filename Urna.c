/*
   Grupo: Kevin Trindade Gonçalves, Marcelo Ribeiro e Fellipe Vargas Campos.
   Turma: 1 periodo de Engenharia de Controle e Automação

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
// importando biblioteca time.h para utilizar a hora do sistema Windows
#include <time.h>

int main(){
    time_t now;
    struct tm *now_tm;
    short hour;
    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;

    // contador de votos dos prefeitos e vereadores

	short contador_prefeito_1 = 0;
	short contador_prefeito_2 = 0;
	short contador_vereador_1 = 0;
	short contador_vereador_2 = 0;
	short contador_vereador_3 = 0;
	short contador_vereador_4 = 0;
	short contador_vereador_5 = 0;
	short contador_vereador_6 = 0;
	short contador_vereador_7 = 0;
	short contador_vereador_8 = 0;
	short contador_branco_prefeito = 0;
	short contador_nulo_prefeito = 0;
	short contador_branco_vereador = 0;
	short contador_nulo_vereador = 0;

    // Nome dos candidatos

	char nome_prefeito_1[6] = "Kevin";
	char nome_vice_1[6] = "Joana";
	char nome_prefeito_2[8] = "Leticia";
	char nome_vice_2[6] = "Jonas";
	char nome_vereador_1[9] = "Jonathan";
	char nome_vereador_2[5] = "Ruan";
	char nome_vereador_3[9] = "Fernanda";
	char nome_vereador_4[8] = "Juliana";
	char nome_vereador_5[11] = "Marcelinho";
	char nome_vereador_6[9] = "Praticia";
	char nome_vereador_7[6] = "Paulo";
	char nome_vereador_8[8] = "Alfredo";

	char last[1] = " ";
	// Professor, essa variável está aqui porque nós ainda não entendemos ponteiro e é preciso saber ponteiro em C para retirarmos.

	// Variável para armazenar valor de votos dos ganhadors

    short vencedor_vereador_1 = 0;
    short vencedor_vereador_2 = 0;
    short vencedor_vereador_3 = 0;
    short vencedor_vereador_4 = 0;

    // variáveis para avaliação

	short pergunta;
	int titulo;
	short contador_de_votos = 0;
	int voto = 0;

	while(18>hour){

        if(hour>7){
            printf("\n");
            if(12>hour){
                printf("Ola eleitor, bom dia.\n");
            }
            else{
                printf("Ola eleitor, boa tarde.\n");
            }
            printf("Siga para a eleicao.\n");
            printf("Responda as seguinte questoes com '1' para 'sim' ou qualquer outro numero para 'nao':\n");
            printf("Eleitor, voce trouxe o titulo de eleitor?\n");
            scanf("%d", &pergunta);
            if(pergunta == 1){
                printf("Eleitor, digite seu titulo?\n");
                scanf("%d", &titulo);
                printf("\n");
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
                printf("Digite '42' para o candidato a prefeito 'Kevin' e a vice 'Joana' ou '53' para a  candidata a prefeita 'Leticia' e para o vice 'Jonas' ou qualquer outro numero para branco e zero para nulo:\n");
                scanf("%d", &voto);
                printf("\n");
                if(voto==42){
                    printf("Voce votou em %s para prefeito e em %s para vice.\n", nome_prefeito_1, nome_vice_1);
                    contador_prefeito_1 += 1;
                } else if(voto==53){
                    printf("Voce votou em %s para prefeito e em %s para vice.\n", nome_prefeito_2, nome_vice_2);
                    contador_prefeito_2 += 1;
                } else if(voto==0){
                    printf("Voce votou nulo.\n");
                    contador_nulo_prefeito += 1;
                }
                else{
                    printf("Voce votou em branco.\n");
                    contador_branco_prefeito += 1;
                }
                printf("\n");
                printf("Agora voce será encaminho para o voto em seu vereador.\n");
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
                printf("Digite '11111' para o candidato a vereador 'Jonathan:\n");
                printf("Digite '22222' para o candidato a vereador 'Ruan:\n");
                printf("Digite '33333' para o candidato a vereador 'Fernanda:\n");
                printf("Digite '44444' para o candidato a vereador 'Juliana:\n");
                printf("Digite '55555' para o candidato a vereador 'Marcelinho:\n");
                printf("Digite '66666' para o candidato a vereador 'Patricia:\n");
                printf("Digite '77777' para o candidato a vereador 'Paulo:\n");
                printf("Digite '88888' para o candidato a vereador 'Alfredo:\n");
                printf("\n");
                scanf("%d", &voto);
                printf("\n");

                if(voto==11111){
                    printf("Voce votou em %s para vereador.\n", nome_vereador_1);
                    contador_vereador_1 += 1;
                }
                else if(voto==22222){
                   printf("Voce votou em %s para vereador.\n", nome_vereador_2);
                   contador_vereador_2 += 1;
                }
                else if(voto==33333){
                   printf("Voce votou em %s para vereador.\n", nome_vereador_3);
                   contador_vereador_3 += 1;
                }
                else if(voto==44444){
                    printf("Voce votou em %s para vereador.\n", nome_vereador_4);
                    contador_vereador_4 += 1;
                }
                else if(voto==55555){
                    printf("Voce votou em %s para vereador.\n", nome_vereador_5);
                    contador_vereador_5 += 1;
                }
                else if(voto==66666){
                   printf("Voce votou em %s para vereador.\n", nome_vereador_6);
                   contador_vereador_6 += 1;
                }
                else if(voto==77777){
                   printf("Voce votou em %s para vereador.\n", nome_vereador_7);
                   contador_vereador_7 += 1;
                }
                else if(voto==88888){
                   printf("Voce votou em %s para vereador.\n", nome_vereador_8);
                   contador_vereador_8 += 1;
                }
                else if(voto==0){
                    printf("Voce votou nulo.\n");
                    contador_nulo_vereador += 1;
                }
                else{
                    printf("Voce votou em branco.\n");
                    contador_branco_vereador += 1;
                }

                contador_de_votos += 1;

                printf("\n");
                printf("Mensagem do sistema: devemos continuar a eleicao? Digite qualquer numero para 'sim' e '0' para 'nao'.\n");
                scanf("%d", &pergunta);
                if(pergunta == 0){
                   hour = 18;
                }
                else{
                    printf("Nao é permitido votar sem o titulo, busque o documento e volte ate as 17 de hoje.\n");
                }
            }
            else{
                hour = 18;
            }
        }
    }





    if(contador_de_votos != 0){
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");





        // comparação de votos de vereadores
        if(contador_vereador_1 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_1;
        }
        else if(contador_vereador_1 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_1;
        }
        else if(contador_vereador_1 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_1;
        }
        else if(contador_vereador_1 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_1;
        }

        if(contador_vereador_2 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_2;
        }
        else if(contador_vereador_2 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_2;
        }
        else if(contador_vereador_2 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_2;
        }
        else if(contador_vereador_2 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_2;
        }

        if(contador_vereador_3 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_3;
        }
        else if(contador_vereador_3 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_3;
        }
        else if(contador_vereador_3 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_3;
        }
        else if(contador_vereador_3 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_3;
        }

        if(contador_vereador_4 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_4;
        }
        else if(contador_vereador_4 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_4;
        }
        else if(contador_vereador_4 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_4;
        }
        else if(contador_vereador_4 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_4;
        }

        if(contador_vereador_5 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_5;
        }
        else if(contador_vereador_5 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_5;
        }
        else if(contador_vereador_5 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_5;
        }
        else if(contador_vereador_5 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_5;
        }

        if(contador_vereador_6 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_6;
        }
        else if(contador_vereador_6 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_6;
        }
        else if(contador_vereador_6 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_6;
        }
        else if(contador_vereador_6 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_6;
        }

        if(contador_vereador_7 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_7;
        }
        else if(contador_vereador_7 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_7;
        }
        else if(contador_vereador_7 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_7;
        }
        else if(contador_vereador_7 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_7;
        }

        if(contador_vereador_8 > vencedor_vereador_1){
            vencedor_vereador_2 = vencedor_vereador_1;
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_1 = contador_vereador_8;
        }
        else if(contador_vereador_8 > vencedor_vereador_2){
            vencedor_vereador_3 = vencedor_vereador_2;
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_2 = contador_vereador_8;
        }
        else if(contador_vereador_8 > vencedor_vereador_3){
            vencedor_vereador_4 = vencedor_vereador_3;
            vencedor_vereador_3 = contador_vereador_8;
        }
        else if(contador_vereador_8 > vencedor_vereador_4){
            vencedor_vereador_4 = contador_vereador_8;
        }




        // comparação de votos de prefeitos
        if(contador_prefeito_1 > contador_prefeito_2){
            printf("O(A) novo prefeito(o) e o(a) %s e o(a) novo vice e o %s com %d dos votos validos.\n", nome_prefeito_1, nome_vice_1, contador_prefeito_1);
        }

        else if(contador_prefeito_2 > contador_prefeito_1){
            printf("O(A) novo prefeito(o) e o(a) %s e o(a) novo vice e o %s com %d dos votos validos.\n", nome_prefeito_2, nome_vice_2, contador_prefeito_1);
        }
        else{
            printf("Ocorreu um empate tecnico para prefeito e vice, sera necessario segundo turno.\n");
        }


        // printando os vencedores de acordo com o número de votos e equivalencia a colocação.
        if(contador_vereador_1 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_1, contador_vereador_1);
        }
        else if(contador_vereador_1 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_1, contador_vereador_1);
        }
        else if(contador_vereador_1 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_1, contador_vereador_1);
        }
        else if(contador_vereador_1 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_1, contador_vereador_1);

        }

        if(contador_vereador_2 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_2, contador_vereador_2);
        }
        else if(contador_vereador_2 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_2, contador_vereador_2);
        }
        else if(contador_vereador_2 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_2, contador_vereador_2);
        }
        else if(contador_vereador_2 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_2, contador_vereador_2);

        }

        if(contador_vereador_3 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_3, contador_vereador_3);
        }
        else if(contador_vereador_3 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_3, contador_vereador_3);
        }
        else if(contador_vereador_3 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_3, contador_vereador_3);
        }
        else if(contador_vereador_3 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_3, contador_vereador_3);

        }

        if(contador_vereador_4 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_4, contador_vereador_4);
        }
        else if(contador_vereador_4 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_4, contador_vereador_4);
        }
        else if(contador_vereador_4 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_4, contador_vereador_4);
        }
        else if(contador_vereador_4 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_4, contador_vereador_4);

        }

        if(contador_vereador_5 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_5, contador_vereador_5);
        }
        else if(contador_vereador_5 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_5, contador_vereador_5);
        }
        else if(contador_vereador_5 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_5, contador_vereador_5);
        }
        else if(contador_vereador_5 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_5, contador_vereador_5);

        }

        if(contador_vereador_6 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_6, contador_vereador_6);
        }
        else if(contador_vereador_6 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_6, contador_vereador_6);
        }
        else if(contador_vereador_6 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_6, contador_vereador_6);
        }
        else if(contador_vereador_6 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_6, contador_vereador_6);

        }

        if(contador_vereador_7 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_7, contador_vereador_7);
        }
        else if(contador_vereador_7 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_7, contador_vereador_7);
        }
        else if(contador_vereador_7 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_7, contador_vereador_7);
        }
        else if(contador_vereador_7 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_7, contador_vereador_7);

        }

        if(contador_vereador_8 == vencedor_vereador_1){
            vencedor_vereador_1 = -1;
            printf("O primeiro eleito entre os vereadores e o %s com %d votos.\n", nome_vereador_8, contador_vereador_8);
        }
        else if(contador_vereador_8 == vencedor_vereador_2){
            vencedor_vereador_2 = -1;
            printf("O segundo eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_8, contador_vereador_8);
        }
        else if(contador_vereador_8 == vencedor_vereador_3){
            vencedor_vereador_3 = -1;
            printf("O terceiro eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_8, contador_vereador_8);
        }
        else if(contador_vereador_8 == vencedor_vereador_4){
            vencedor_vereador_4 = -1;
            printf("O quarto eleito entre os vereadores foi o(a) %s com %d votos.\n", nome_vereador_8, contador_vereador_8);
        }

        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
    }
    return 1;
}
