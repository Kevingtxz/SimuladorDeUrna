/*
    Data de entrega: 23 de nov.
    Atividade Final
    Crie um programa em C que simule uma pizzaria.
    -> Primeiramente deve-se cadastrar 5 itens básicos da pizza e o peso/quantidade em estoque (controlado via um vetor).
    Por exemplo: 5 porções de azeitona, 2 kg de linguiça calabresa, 4 kg de farinha de trigo, 5 kg de cebola, 4 kg de mussarela.
    As vendas da pizza devem ser feitas pelo atendente que pergunta os itens para a pessoa no momento da compra, por exemplo: 1 pizza de calabresa com mussarela.
    Obs.: A quantidade do uso deve já ser previamente calculada, isto é, ao fazer o pedido sabe-se que para a pizza de calabresa com mussarela utiliza-se 500 gramas de farinha de trigo, 600 gramas de calabresa, uma porção de azeitona e 200 gramas de cebola. Verificar antes de reduzir no estoque se a venda é possível.
    O programa termina quando o usuário informar que deseja encerrar todos os pedidos daquele dia.

    Deve haver um menu de entradas e vendas.
    Deve-se utilizar um vetor de números.

    referencias: https://stackoverflow.com/questions/1088622/how-do-i-create-an-array-of-strings-in-c
*/
#include <stdio.h>
#include <string.h>
int main(){
    char name_ingredient[5][200];
    int stock_ingredient[5];
    int pattern_use_ingredient[5];

    strcpy(name_ingredient[0], "Bacon");
    strcpy(name_ingredient[1], "Tomate");
    strcpy(name_ingredient[2], "Queijo Mussarela");
    strcpy(name_ingredient[3], "Presunto");
    strcpy(name_ingredient[4], "Frango");

    pattern_use_ingredient[0] = 300;
    pattern_use_ingredient[1] = 200;
    pattern_use_ingredient[2] = 500;
    pattern_use_ingredient[3] = 300;
    pattern_use_ingredient[4] = 300;

    stock_ingredient[0] = 10 * pattern_use_ingredient[0];
    stock_ingredient[1] = 10 * pattern_use_ingredient[1];
    stock_ingredient[2] = 10 * pattern_use_ingredient[2];
    stock_ingredient[3] = 10 * pattern_use_ingredient[3];
    stock_ingredient[4] = 10 * pattern_use_ingredient[4];

    char name_pizza[2][200];
    float price_pizza[2];

    strcpy(name_pizza[0], "Pizza de Mussarela com Frango");
    strcpy(name_pizza[1], "Pizza de Bacon");

    price_pizza[0] = 30.99;
    price_pizza[1] = 40.99;

    int ingredients_pizza[2][3];

    ingredients_pizza[0][0] = 1;
    ingredients_pizza[0][1] = 2;
    ingredients_pizza[0][2] = 4;

    ingredients_pizza[1][0] = 0;
    ingredients_pizza[1][1] = 2;
    ingredients_pizza[1][2] = 3;


    float banco = 0;

    int stop = 1;
    int ask = 0;
    float ask_price = 0;
    char interactive;

    while(stop != 0){
        ask_price = 0;
        printf(" Bom dia, Central de Pizzas, todo dia pizzas de todos os sabores!\n");
        printf(" Aqui esta o cardapio.\n");
        printf(" Pressione qualquer valor e enter para pegar o cardapio.\n");
        printf(" ");
        scanf(" %s", &interactive);
        printf(" Temos %s e %s no cardapio atualmente.\n", name_pizza[0], name_pizza[1]);
        printf(" Digite '1' para pedir detalhes da %s, '2' para pedir detalhes da %s, ou qualquer outro valor para sair.\n", name_pizza[0], name_pizza[1]);
        printf(" ");
        scanf("%d", &ask);
        if(ask == 1){
            printf(" Seguem os detalhes da %s.\n", name_pizza[0]);
            printf("\n");
            printf(" Os ingredientes dessa pizza sao: %s, %s e %s.\n", name_ingredient[ingredients_pizza[0][0]], name_ingredient[ingredients_pizza[0][1]], name_ingredient[ingredients_pizza[0][2]]);
            printf(" Voce deseja compra-la por %.2f?\n", price_pizza[0]);
            printf(" Digite '01' para paga-la ou qualquer outro valor para voltar ao cardapio.\n");
            printf(" ");
            scanf("%d", &ask);
            if(ask == 01){
                if((stock_ingredient[ingredients_pizza[0][0]] >= pattern_use_ingredient[ingredients_pizza[0][0]])
                   && (stock_ingredient[ingredients_pizza[0][1]] >= pattern_use_ingredient[ingredients_pizza[0][1]])
                   && (stock_ingredient[ingredients_pizza[0][2]] >= pattern_use_ingredient[ingredients_pizza[0][2]])
                  ){
                    stock_ingredient[ingredients_pizza[0][0]] -= pattern_use_ingredient[ingredients_pizza[0][0]];
                    stock_ingredient[ingredients_pizza[0][1]] -= pattern_use_ingredient[ingredients_pizza[0][1]];
                    stock_ingredient[ingredients_pizza[0][2]] -= pattern_use_ingredient[ingredients_pizza[0][2]];

                    banco += price_pizza[0];
                    printf(" Voce comprou a pizza %s por %.2f. Muito obrigado pela compra, volte sempre.\n", name_pizza[0], price_pizza[0]);
                }
                else{
                    printf(" Tente nossas outras opcoes, boa dia e volte sempre.\n");
                }
            }
        }
        else if(ask == 2){
            printf(" Seguem os detalhes da %s.\n", name_pizza[1]);
            printf("\n");
            printf(" Os ingredientes dessa pizza sao: %s, %s e %s.\n", name_ingredient[ingredients_pizza[1][0]], name_ingredient[ingredients_pizza[1][1]], name_ingredient[ingredients_pizza[1][2]]);
            printf(" Voce deseja compra-la por %.2f?\n", price_pizza[1]);
            printf(" Digite '02' para paga-la ou qualquer outro valor para voltar ao cardapio.\n");
            printf(" ");
            scanf("%d", &ask);
            if(ask == 02){
                if((stock_ingredient[ingredients_pizza[1][0]] >= pattern_use_ingredient[ingredients_pizza[1][0]])
                   && (stock_ingredient[ingredients_pizza[1][1]] >= pattern_use_ingredient[ingredients_pizza[1][1]])
                   && (stock_ingredient[ingredients_pizza[1][2]] >= pattern_use_ingredient[ingredients_pizza[1][2]])
                  ){
                    stock_ingredient[ingredients_pizza[1][0]] -= pattern_use_ingredient[ingredients_pizza[1][0]];
                    stock_ingredient[ingredients_pizza[1][1]] -= pattern_use_ingredient[ingredients_pizza[1][1]];
                    stock_ingredient[ingredients_pizza[1][2]] -= pattern_use_ingredient[ingredients_pizza[1][2]];

                    banco += price_pizza[1];
                    printf(" Voce comprou a pizza %s por %.2f. Muito obrigado pela compra, volte sempre.\n", name_pizza[1], price_pizza[1]);
                }
                else{
                    printf(" Tente nossas outras opcoes, boa dia e volte sempre.\n");
                }
            }

        }
        else{
            printf(" Desculpe, no momento so temos essas opcoes, volte mais tarde.\n");
        }
        printf("\n");
        printf("\n");
        printf(" Deseja continuar com pedidos? Digite '0' para parar e qualquer outro valor para continuar.\n");
        printf(" ");
        scanf("%d", &stop);
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
    printf(" Os estoques finais de ingredientes para a pizza %s com custo %.2f sao: \n", name_pizza[0], price_pizza[0]);
    printf(" %d gramas de %s, %d gramas de %s e %d gramas de %s.\n", stock_ingredient[ingredients_pizza[0][0]], name_ingredient[ingredients_pizza[0][0]], stock_ingredient[ingredients_pizza[0][1]], name_ingredient[ingredients_pizza[0][1]], stock_ingredient[ingredients_pizza[0][2]], name_ingredient[ingredients_pizza[0][2]]);
    printf("\n");
    printf(" Os estoques finais de ingredientes para a pizza %s com custo %.2f sao: \n", name_pizza[1], price_pizza[1]);
    printf(" %d gramas de %s, %d gramas de %s e %d gramas de %s.\n", stock_ingredient[ingredients_pizza[1][0]], name_ingredient[ingredients_pizza[1][0]], stock_ingredient[ingredients_pizza[1][1]], name_ingredient[ingredients_pizza[1][1]], stock_ingredient[ingredients_pizza[1][2]], name_ingredient[ingredients_pizza[1][2]]);

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

    return 0;
}
