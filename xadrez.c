#include <stdio.h>

void cima(int n){
    if (n > 0) {
        printf("Cima\n");
        cima(n - 1);
    }
}

void baixo(int n){
    if (n > 0) {
        printf("Baixo\n");
        baixo(n - 1);
    }
}

void direita(int n){
    if (n > 0) {
        printf("Direita\n");
        direita(n - 1);
    }
}

void esquerda(int n){
    if (n > 0) {
        printf("Esquerda\n");
        esquerda(n - 1);
    }
}

int main(){

    int torre, bispo, rainha, cavalo;
    // movimento da torre 5 casas pra direita
    
        printf("Quantas casas deseja mover a Torre?\n");
        scanf("%d", &torre); //escolher quantas casas quer mover
        printf("Torre:\n");
        for (int i = 0; i < torre; i++)
        {
            direita(1);
        }
        
    
    // movimento do bispo 5 casas pra direita, cima
        printf("Quantas casas deseja mover o bispo?\n");
        scanf("%d", &bispo); //escolher quantas casas quer mover
        printf("Bispo:\n");
        for (int i = 0; i < bispo; i++)
        {
            direita(1);
            cima(1);
        }

    //movimento rainha 8 casas pra esquerda

    printf("Quantas casas deseja mover a Rainha?\n");
        scanf("%d", &rainha); //escolher quantas casas quer mover
        printf("Rainha:\n");
        for (int i = 0; i < rainha; i++)
        {
            esquerda(1);
        }
    

    // movimento cavalo 2 casa pra cima e 1 direita 
    
      
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
            cima(2);    // o movimento do cavalo
        
            printf("Deve se mover para direita ou esquerda?\n");
            printf("D. direita\n");
            printf("E. esquerda\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'd' || segundomov == 'D')
            {
                    direita(1);
            } else  {
                    esquerda(1);
            }
                
            
            break;

        case 'B': // caso de escolher baixo
        case 'b':
            
                baixo(2);
                
            printf("Deve se mover para direita ou esquerda?\n");
            printf("D. direita\n");
            printf("E. esquerda\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'd' || segundomov == 'D')
            {
                    direita(1);
            } else  {
                    esquerda(1);
            }
                
            
            break;

        case 'D': // caso seja escolhido direita
        case 'd':
            
            direita(2); // o primeiro movimento

            printf("Deve se mover para cima ou para baixo?\n");
            printf("C. Cima\n");
            printf("B. Baixo\n");
             scanf(" %c", &segundomov);

            if (segundomov == 'b' || segundomov == 'B')
            {
                    baixo(1);
            } else  {
                    cima(1);
            }
                
            
            break;
        case 'E': // caso a escolha seja esquerda
        case 'e':
                
            esquerda(2);
                //segunda escolha de movimento
                printf("Deve se mover para cima ou para baixo?\n");
                printf("C. Cima\n");
                printf("B. Baixo\n");
                 scanf(" %c", &segundomov);
    
                if (segundomov == 'b' || segundomov == 'B')
                {
                        baixo(1);
                } else  {
                        cima(1);
                }
                    
                
                break;    
        
        default:
            break;
        }
    
    
    



return 0;
}