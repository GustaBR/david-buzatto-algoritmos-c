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
    int n3;
    int menor;
    int medio;
    int maior;
    int largura;
    int unidade;
    int espacamento;
    int tamanhoFonte;
    
    printf("N1: ");
    scanf("%d", &n1);
    
    printf("N2: ");
    scanf("%d", &n2);
    
    printf("N3: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n2 >= n3) {
        maior = n1;
        medio = n2;
        menor = n3;
    }
    else if (n1 >= n2 && n1 >= n3) {
        maior = n1;
        medio = n3;
        menor = n2;
    }
    else if (n1 >= n2) {
        maior = n3;
        medio = n1;
        menor = n2;
    }
    else if (n3 >= n2 && n3 >= n1) {
        maior = n3;
        medio = n2;
        menor = n1;
    }
    else if (n3 >= n1) {
        maior = n2;
        medio = n3;
        menor = n1;
    }
    else {
        maior = n2;
        medio = n1;
        menor = n3; 
    }

    printf("%d, %d, %d", menor, medio, maior);
    
    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 400, "Exercício 2.2" );

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

        if (menor >= 0) {
            DrawRectangle(espacamento, 200 - menor * unidade, largura, unidade * menor, BLUE);
            DrawText(
                TextFormat("%d", menor),
                espacamento,
                200,
                tamanhoFonte,
                BLACK
            );
        }
        else {
            DrawRectangle(espacamento, 200, largura, unidade * -menor, RED);
            DrawText(
                TextFormat("%d", menor),
                espacamento,
                200 - tamanhoFonte,
                tamanhoFonte,
                BLACK
            );
        }
        
        if (medio >= 0) {
            DrawRectangle(2*espacamento + largura, 200 - medio * unidade, largura, unidade * medio, BLUE);
            DrawText(
                TextFormat("%d", medio),
                2*espacamento + largura,
                200,
                tamanhoFonte,
                BLACK
            );
        }
        else {
            DrawRectangle(2*espacamento + largura, 200, largura, unidade * -medio, RED);
            DrawText(
                TextFormat("%d", medio),
                2*espacamento + largura,
                200 - tamanhoFonte,
                tamanhoFonte,
                BLACK
            );
        }
        
        if (maior >= 0) {
            DrawRectangle(3*espacamento + 2*largura, 200 - maior * unidade, largura, unidade * maior, BLUE);
            DrawText(
                TextFormat("%d", maior),
                3*espacamento + 2*largura,
                200,
                tamanhoFonte,
                BLACK
            );
        }
        else {
            DrawRectangle(3*espacamento + 2*largura, 200, largura, unidade * -maior, RED);
            DrawText(
                TextFormat("%d", maior),
                3*espacamento + 2*largura,
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
