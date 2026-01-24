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
    
    float temperatura;
    int largura;
    int altura;

    printf("Temperatura: ");
    scanf("%f", &temperatura);
    
    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício 2.4" );

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

        largura = GetScreenWidth();
        altura = GetScreenHeight();

        DrawRectangleGradientH(
            (largura - 400) / 2,
            (altura - 80) / 2,
            400,
            80,
            BLUE,
            RED
        );

        if (-20 <= temperatura && temperatura <= 180) {
            DrawLine(
                (largura - 400) / 2 + (temperatura + 20) * 2,
                (altura - 80) / 2,
                (largura - 400) / 2 + (temperatura + 20) * 2,
                (altura + 80) / 2,
                BLACK
            );

            DrawText(
                TextFormat("%.2f", temperatura),
                (largura - 400) / 2 + (temperatura + 20) * 2,
                (altura - 80) / 2 - 30,
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
