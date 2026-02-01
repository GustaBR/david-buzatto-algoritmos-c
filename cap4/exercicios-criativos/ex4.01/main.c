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
    
    float notas[5];
    float menorNota;
    float media = 0;
    float maiorNota;
    
    for (int i = 0; i < 5; i++) {
        printf("nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    menorNota = notas[0];
    maiorNota = notas[0];
    for (int i = 1; i < 5; i++) {
        if (notas[i] > maiorNota) maiorNota = notas[i];
        else if (notas[i] < menorNota) menorNota = notas[i];
    }

    for (int i = 0; i < 5; i++) {
        media += notas[i];
    }
    media /= 5;

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício 4.1" );

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

        int unidade = 10;
        int espacamento = 50;
        int largura = 80;
        Color corMenorNota;
        Color corMedia;
        Color corMaiorNota;

        Color cores[3] = {corMenorNota, corMedia, corMaiorNota};
        float notasAExibir[3] = {menorNota, media, maiorNota};

        for (int i = 0; i < 3; i++) {
            if (notasAExibir[i] < 4) cores[i] = RED;
            else if (notasAExibir[i] < 6) cores[i] = ORANGE;
            else cores[i] = BLUE; 
        }

        for (int i = 0; i < 3; i++) {
            DrawRectangle(
                espacamento * (1+i) + largura * i,
                200 - notasAExibir[i] * unidade,
                largura,
                notasAExibir[i] * unidade,
                cores[i]
            );
            DrawText(
                TextFormat("%.2f", notasAExibir[i]),
                espacamento * (1+i) + largura * i,
                170,
                30,
                BLACK
            );
        }

        DrawText(
            TextFormat("menor"),
            espacamento,
            205,
            30,
            BLACK
        );

        DrawText(
            TextFormat("média"),
            espacamento*2 + largura,
            205,
            30,
            BLACK
        );

        DrawText(
            TextFormat("maior"),
            espacamento*3 + largura*2,
            205,
            30,
            BLACK
        );

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
