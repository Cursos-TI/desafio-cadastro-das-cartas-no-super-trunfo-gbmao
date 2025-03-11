#include <stdio.h>
#include <string.h>//solução pra um problema de quebra de linha
#include <stdlib.h>
#include <time.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    int  populacao1, populacao2, pt1, pt2;
    float area1, area2, pib1, pib2, pibpercapita1, pibpercapita2, densidadepop1, densidadepop2; //colocando pibpercapita1 e densidade em float por erro na hora da divisao
    char estado1[100], estado2[100], cidade1[100], cidade2[100], codigodacarta1[100], codigodacarta2[100]; // não foi dito na aula nada sobre esse numero apenas coloquei um numero aleatorio
    
    printf("Carta 1\n");
    printf("Digite o nome do estado:\n");
    fgets(estado1, sizeof(estado1), stdin);  // scanf nao captura "espaço" por isso pesquisei na internet e achei o fgets pra conseguir gravar espaço 

    

    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    
    printf("Digite o código da carta:\n");
    fgets(codigodacarta1, sizeof(codigodacarta1), stdin);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pt1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1);
    getchar(); // a proxima linha de codigo estava sendo ignorada, não sei pra que serve, porem esse getchar resolveu o problema

    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Exibição dos dados cadastrados
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigodacarta1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.4f\n", pib1);
    printf("Possui %d pontos turísticos\n", pt1);
    printf("Área: %f km²\n", area1);


    //começando a buscar os dados da carta 2


    printf("Carta 2\n");
    printf("Digite o nome do estado:\n");
    fgets(estado2, sizeof(estado2), stdin);   

    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    
    printf("Digite o código da carta:\n");
    fgets(codigodacarta2, sizeof(codigodacarta2), stdin);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &pt2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);

    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // tive MUITA dificuldade em relação a isso, pedi pro chat gpt escrever essa linha pra mim
    // ela basicamente "remove" a quebra de linha no final de toda string
    // aparentemente o fgets tambem captura o "enter" o que estava resultando em diversos problemas no final do programa
    estado1[strcspn(estado1, "\n")] = '\0'; estado2[strcspn(estado2, "\n")] = '\0'; cidade1[strcspn(cidade1, "\n")] = '\0'; cidade2[strcspn(cidade2, "\n")] = '\0'; codigodacarta1[strcspn(codigodacarta1, "\n")] = '\0'; codigodacarta2[strcspn(codigodacarta2, "\n")] = '\0';

    // Exibição dos dados cadastrados
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigodacarta2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.4f\n", pib2);
    printf("Possui %d pontos turísticos\n", pt2);
    printf("Área: %f km²\n", area2);

    int escolha;
    printf("***Escolha o atributo de comparação: *** \n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Pontos Turísticos\n");
    printf("4. Área²\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per capita\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    printf("Carta 1 - %s - População: %d\n",cidade1, populacao1);
    printf("Carta 2 - %s - População: %d\n",cidade2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 - %s - Venceu!\n", cidade1);
        } else if (populacao1 == populacao2)
        {
            printf("***Empate!!!***\n");
        } else {
            printf("Carta 2 - %s - Venceu!\n", cidade2);
        }
        
        break;
    case 2:
        printf("Carta 1 - %s Pib: %.2f\n",cidade1, pib1);
        printf("Carta 2 - %s Pib: %.2f\n",cidade2, pib2);
            if (pib1 > pib2)
            {
                printf("Carta 1 - %s - Venceu!", cidade1);
            } else if (pib1 == pib2)
            {
                printf("***Empatou!!!***");
            } else {
                printf("Carta 2 - %s - Venceu!", cidade2);
            }
            
            break;
    case 3:
            printf("Carta 1 - %s - Pontos Turisticos: %d\n",cidade1, pt1);
            printf("Carta 2 - %s - Pontos Turisticos: %d\n",cidade2, pt2);
                if (pt1 > pt2)
                {
                    printf("Carta 1 - %s - Venceu!\n", cidade1);
                } else if (pt1 == pt2)
                {
                    printf("***Empate!!!***\n");
                } else {
                    printf("Carta 2 - %s - Venceu!\n", cidade2);
                }
                
                break;
    case 4:
                printf("Carta 1 - %s - Área: %f\n",cidade1, area1);
                printf("Carta 2 - %s - Área: %f\n",cidade2, area2);
                    if (area1 > area2)
                    {
                        printf("Carta 1 - %s - Venceu!\n", cidade1);
                    } else if (area1 == area2)
                    {
                        printf("***Empate!!!***\n");
                    } else {
                        printf("Carta 2 - %s - Venceu!\n", cidade2);
                    }
                    
                    break;
    case 5:
                    printf("Carta 1 - %s - Densidade Populacional: %f\n",cidade1, densidadepop1);
                    printf("Carta 2 - %s - Densidade Populacional: %f\n",cidade2, densidadepop2);
                        if (densidadepop1 < densidadepop2)
                        {
                            printf("Carta 1 - %s - Venceu!\n", cidade1);
                        } else if (densidadepop1 == densidadepop2)
                        {
                            printf("***Empate!!!***\n");
                        } else {
                            printf("Carta 2 - %s - Venceu!\n", cidade2);
                        }
                        
                        break;
    case 6:
                        printf("Carta 1 - %s - Pib per Capita: %f\n",cidade1, pibpercapita1);
                        printf("Carta 2 - %s - Pib per Capita: %f\n",cidade2, pibpercapita2);
                            if (pibpercapita1 > pibpercapita2)
                            {
                                printf("Carta 1 - %s - Venceu!\n", cidade1);
                            } else if (pibpercapita1 == pibpercapita2)
                            {
                                printf("***Empate!!!***\n");
                            } else {
                                printf("Carta 2 - %s - Venceu!\n", cidade2);
                            }
                            
                            break;
                        
    
    default:
                            printf("Valor Inválido!\n");
        break;
    }





    return 0;
}