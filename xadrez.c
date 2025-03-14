#include <stdio.h>

int main(){
    // movimento da torre 5 casas pra direita
    for ( int i = 0; i < 5; i++)
    {
        printf("Torre: Direita\n");
    }
    // movimento do bispo 5 casas pra direita, cima
    for (int i = 0; i < 5; i++)
    {
        printf("Bispo: direita, cima\n");
    }

    //movimento rainha 8 casas pra esquerda

    for (int i = 0; i < 8; i++)
    {
        printf("Rainha: Esquerda\n");
    }
    

    // movimento cava 2 casa pra cima e 1 direita 

    for (int i = 0; i < 3; i++)
    {   
        char primeiromov, segundomov;
        printf("Pra onde você deseja mover o cavalo? \n");
        printf("C. Cima\n");
        printf("B. Baixo\n");
        printf("D. Direita\n");
        printf("E. Esquerda\n");
        scanf(" %c", &primeiromov); // adicionei um 'espaço' na frente do %c devido a um problema de ler 2x a escolha
        

        switch (primeiromov)
        {
        case 'c': // caso de escolher cima
        case 'C':
            for ( int a = 1; a <= 2; a++)
            {
                printf("Cima\n");
            }    
            printf("Deve se mover para direita ou esquerda?\n");
            printf("D. direita\n");
            printf("E. esquerda\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'd' || segundomov == 'D')
            {
                    printf("Direita\n");
            } else  {
                    printf("Esquerda\n");
            }
                
            
            break;

        case 'B': // caso de escolher baixo
        case 'b':
            for ( int a = 1; a <= 2; a++)
            {
                printf("Baixo\n");
            }    
            printf("Deve se mover para direita ou esquerda?\n");
            printf("D. direita\n");
            printf("E. esquerda\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'd' || segundomov == 'D')
            {
                    printf("Direita\n");
            } else  {
                    printf("Esquerda\n");
            }
                
            
            break;

        case 'D': // caso seja escolhido direita
        case 'd':
            for ( int a = 1; a <= 2; a++)
            {
                printf("Direita\n");
            }    
            printf("Deve se mover para cima ou para baixo?\n");
            printf("C. Cima\n");
            printf("B. Baixo\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'b' || segundomov == 'B')
            {
                    printf("Baixo\n");
            } else  {
                    printf("Cima\n");
            }
                
            
            break;
        case 'E': // caso a escolha seja esquerda
        case 'e':
                for ( int a = 1; a <= 2; a++)
                {
                    printf("Esquerda\n");
                }    
                printf("Deve se mover para cima ou para baixo?\n");
                printf("C. Cima\n");
                printf("B. Baixo\n");
                 scanf(" %c", &segundomov);
    
                if (segundomov == 'b' || segundomov == 'B')
                {
                        printf("Baixo\n");
                } else  {
                        printf("Cima\n");
                }
                    
                
                break;    
        
        default:
            break;
        }
    }
    
    



return 0;
}