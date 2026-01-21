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
    
    int startPosX;
    int startPosY;
    int endPosX;
    int endPosY;
    int altura;
    int verticeX;
    int verticeY;

    // Entrada
    printf("x inicial: ");
    scanf("%d", &startPosX);
    printf("y inicial: ");
    scanf("%d", &startPosY);
    printf("x final: ");
    scanf("%d", &endPosX);
    printf("y final: ");
    scanf("%d", &endPosY);
    printf("altura: ");
    scanf("%d", &altura);

    // Calculando as coordenadas do terceiro vértice 
    verticeX = (startPosX + endPosX) / 2;
    verticeY = startPosY - altura;

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 800, 600, "Exercício 1.3" );

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

        DrawLine(startPosX, startPosY, endPosX, endPosY, BLUE); // Base do triângulo
        DrawLine(startPosX, startPosY, verticeX, verticeY, BLUE);
        DrawLine(endPosX, endPosY, verticeX, verticeY, BLUE);

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
