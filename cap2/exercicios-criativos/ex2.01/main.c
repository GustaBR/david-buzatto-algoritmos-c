/**
 * @file main.c
 * @author Prof. Dr. David Buzatto
 * @brief Modelo para desenvolvimento de exercícios criativos usando a engine
 * de jogos Raylib (https://www.raylib.com/).
 * 
 * @copyright Copyright (c) 2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <raylib.h>

int main( void ) {

    /*-----------------------------------------------------
     * A lógica inicial do seu programa deve vir aqui:
     *     - declaração de variáveis;
     *     - entrada de dados;
     *     - processamentos adicionais.
     ----------------------------------------------------*/
    
    int n1;
    int n2;
    int largura;
    int unidade;
    int espacamento;
    int tamanhoFonte;

    printf("N1: ");
    scanf("%d", &n1);

    printf("N2: ");
    scanf("%d", &n2);

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício 2.01" );

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS( 60 );    

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/
        largura = 60;
        unidade = 4;
        espacamento = 20;
        tamanhoFonte = 20;

        if (n1 >= 0) {
            DrawRectangle(espacamento, 200 - n1 * unidade, largura, unidade * n1, BLUE);
            DrawText(
                TextFormat("%d", n1),
                espacamento,
                200,
                tamanhoFonte,
                BLACK
            );
        }
        else {
            DrawRectangle(espacamento, 200, largura, unidade * -n1, RED);
            DrawText(
                TextFormat("%d", n1),
                espacamento,
                200 - tamanhoFonte,
                tamanhoFonte,
                BLACK
            );
        }
        
        if (n2 >= 0) {
            DrawRectangle(2*espacamento + largura, 200 - n2 * unidade, largura, unidade * n2, BLUE);
            DrawText(
                TextFormat("%d", n2),
                2*espacamento + largura,
                200,
                tamanhoFonte,
                BLACK
            );
        }
        else {
            DrawRectangle(2*espacamento + largura, 200, largura, unidade * -n2, RED);
            DrawText(
                TextFormat("%d", n2),
                2*espacamento + largura,
                200 - tamanhoFonte,
                tamanhoFonte,
                BLACK
            );
        }

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve terminar na linha acima.
         ---------------------------------------------------------------------*/

        // termina o desenho
        EndDrawing();

    }

    // fecha a janela
    CloseWindow();
    return 0;

}
