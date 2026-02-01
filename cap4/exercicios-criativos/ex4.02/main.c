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
    
    int array[5];
    int indices[5];
    int numero;
    int ocorrencias = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("buscar por: ");
    scanf("%d", &numero);

    for (int i = 0; i < 5; i++) {
        if (array[i] == numero) {
            indices[ocorrencias] = i;
            ocorrencias++;
        }
    }

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício 4.2" );

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
        int espacamento = 50;
        int lado = 50;
        Color correspondencia = BLUE;

        DrawText(
            TextFormat("buscando por: %d", numero),
            espacamento,
            espacamento,
            30,
            BLACK
        );
        
        for (int i = 0; i < ocorrencias; i++) {
            DrawRectangle(
                espacamento + lado * indices[i],
                espacamento + 70,
                lado,
                lado,
                correspondencia
            );
        }

        for (int i = 0; i < 5; i++) {
            DrawRectangleLines(
                espacamento + lado * i,
                espacamento + 70,
                lado,
                lado,
                BLACK
            );
            DrawText(
                TextFormat("%d", array[i]),
                espacamento + lado * i + 10,
                espacamento + 80,
                35,
                BLACK
            );
            DrawText(
                TextFormat("%d", i),
                espacamento + lado * i + 10,
                espacamento + 125,
                30,
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
