#include <stdio.h>






int main(){

    char linha[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
    // criando o tabuleiro
    int tabuleiro [10] [10] = {};

    int cruzcoluna, cruzlinha, conelinha, conecoluna, octaedrolinha, octaedroacoluna;
    
    printf ("***TABULEIRO BATALHA NAVAL***\n");
    printf(" "); // espaço para alinhar o identificador


    // identificador das colunas
    for (int j = 0; j < 11; j++) 
    {
        printf("%c ", linha[j]);
    } 
    printf("\n"); 
    

    //definindo local do centro cruz
     cruzcoluna = 5;    
     cruzlinha = 6;
    // define local triangulo
    conecoluna = 4;
    conelinha = 3;
    // define local octaedro
    octaedroacoluna = 3;
    octaedrolinha = 8;

    //imprimindo as linhas
    for (int i = 0; i < 10; i++)
    {  
        
       // o numero 10 estava comendo 1 espaço a mais
       // adicionei um operador ternario para melhor vizualização do tabuleiro 
       // utilizando apenas um espaço no numero 10
      i == 9 ? printf("%d ", coluna[i]) : printf("%d  ", coluna[i]); 
        
        
        
        
        //imprimindo as colunas nas linhas
        for (int j = 0; j < 10; j++)
        {   

            printf("%d ", tabuleiro[i][j]);


            //aqui começa posicionamento de peças e bombas no tabuleiro            
            


            // Adicionando o navio horizontal
            
            for(int i = 2 ; i < 3; i++) // começando pela linha
            {
                // aqui posiciona a coluna
                for ( int j = 1; j < 4 ; j++) 
                {
                tabuleiro [i] [j] = 3;
                }
            }    
            

            // adicionando o navio vertical
            for(int i = 0; i < 3; i++) // linha
            {
                // aqui posiciona a coluna
                for ( int j = 6; j < 7 ; j++) 
                {
                tabuleiro [i] [j] = 3;
                }
            } 

            // primeiro navio na diagonal
            for(int i = 5, j = 7; i < 8; i++, j++) // linha
            {
                
                
                tabuleiro [i] [j] = 3;
                
            } 
            // segundo navio diagonal
            for(int i = 5, j = 3; i < 8; i++, j--) // linha
            {
                
                
                tabuleiro [i] [j] = 3;
                
            }  
           

            // a cruz
             for (int i = cruzlinha - 1; i <= cruzlinha + 1; i++) { // Linha vertical da cruz
                tabuleiro[i][cruzcoluna] = 5;
            }

            for (int j = cruzcoluna -1; j <= cruzcoluna + 1; j++) // linha horizontal da cruz
            {
                tabuleiro[cruzlinha][j] = 5;
            }
            


             // o cone
            for (int j = conecoluna - 2; j <= conecoluna + 2; j++) // linha da base
            {
                tabuleiro[conelinha + 1][j] =5;
            }
            for (int j = conecoluna - 1; j <= conecoluna + 1; j++) // linha do meio do cone
            {
                tabuleiro[conelinha][j] =5;
            }
            for (int j = conecoluna; j <= conecoluna; j++) // topo do cone
            {
                tabuleiro[conelinha - 1][j] =5;
            }

            // o octaedro

            for (int i = octaedrolinha - 1; i <= octaedrolinha + 1; i++) { // Linha vertical do octaedro
                tabuleiro[i][octaedroacoluna] = 5;
            }

            for (int j = octaedroacoluna -1; j <= octaedroacoluna + 1; j++) // linha horizontal do octaedro
            {
                tabuleiro[octaedrolinha][j] = 5;
            }
            
            
            
            
            


                
              

        }

        // vai rodar ao final de cada coluna para iniciar na proxima linha
        printf("\n"); 
    }

    return 0;
}





