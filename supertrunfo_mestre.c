//Este programa realiza a leitura de duas cartas do jogo super trunfo, contendo as seguintes informações:

// Estado: Uma letra de 'A' a 'H'
 
// Código da Carta
 
// Nome da Cidade
 
// População
 
// Área (em km²)
 
// PIB
 
// Número de Pontos Turísticos


#include <stdio.h>


int main(){

    char letraEstado[50], nomeCidade[50], codigo[50];
    float pib, area, densidadePopulacional1, pibPerCapita1;
    int pontosTuristicos, carta1;
    unsigned long int populacao;

    //Variaveis da segunda carta.
    
    char letraEstado2[50], nomeCidade2[50], codigo2[50];
    float pib2, area2 , densidadePopulacional2, pibPerCapita2;
    int pontosTuristicos2, carta2;
    unsigned long int populacao2;

    //Variaveis de comparação

    float superPoder1, superPoder2;




    printf("***SUPER TRUNFO EM C*** \n");

    printf("Carta 1: \n"); 


    
    printf("Escreva uma letra: ");
    scanf(" %c", letraEstado);

    printf("Escreva o código da carta: ");
    scanf("%s", codigo);

    printf("Escreva o nome da cidade (Ou a sigla): ");
    scanf("%s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf ("%f", &area);

    printf("Digite o PIB da cidade (EM BILHÕES DE REAIS): ");
    scanf("%f", &pib);

    printf("Escreva a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Adicionando a carta 2: 

     printf("Carta 2: \n"); 
    
    printf("Escreva uma letra: ");
    scanf(" %c", letraEstado2);

    printf("Escreva o código da carta: ");
    scanf("%s", codigo2);

    printf("Escreva o nome da cidade(Ou a sigla): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf ("%f", &area2);

    printf("Digite o PIB da cidade (EM BILHÕES DE REAIS): ");
    scanf("%f", &pib2);

    printf("Escreva a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

   
    // Imprimindo o código acima: 

    printf("Carta 1: \n");
     
    printf("Estado: %s \n", letraEstado);

    printf("Código: %s \n", codigo);

    printf("Nome da cidade: %s \n", nomeCidade );

    printf("População: %.2lu \n", populacao);

    printf("Área: %.2f km² \n", area);

    printf("PIB: %.2f bilhões de reais \n", pib);

    printf("Número de pontos turísticos: %d \n", pontosTuristicos);

    // Calculando a Densidade Populacional!

    densidadePopulacional1 = populacao/area;

    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional1);

    // Calculando o PIB per Capita!

    pibPerCapita1 = (pib/populacao)*1000000000.0; //O valor 1000000000.0 é para converter em bilhões.

    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    // Imprimindo o código 2: 

    printf("Carta 2: \n");

    printf("Estado: %s \n", letraEstado2);

    printf("Código: %s \n", codigo2);

    printf("Nome da cidade: %s \n", nomeCidade2 );

    printf("População: %.2lu \n", populacao2);

    printf("Área: %.2f km² \n", area2);

    printf("PIB: %.2f bilhões de reais \n", pib2);

    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);

    // Calculando a Densidade Populacional!

    densidadePopulacional2 = populacao2/area2;

    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);

    // Calculando o PIB per Capita!

    pibPerCapita2 =  (pib2/populacao2)*1000000000.0;

    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

    //COMPARAÇÃO DAS CARTAS

    carta1 = 1;
    carta2 = 2;

    superPoder1 = populacao + area + pib + pontosTuristicos + (1/densidadePopulacional1) + pibPerCapita1;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + (1/densidadePopulacional2) + pibPerCapita2;


    printf("Comparação de cartas: \n");

    
    printf("População: Carta %d venceu(%d) \n",(populacao>populacao2) ? carta1:carta2 ,  
                                                (populacao>populacao2) ? 1:0);

    printf("Área: Carta %d venceu(%d) \n",(area>area2) ? carta1:carta2 ,  
                                                (area>area2) ? 1:0);

    printf("PIB: Carta %d venceu(%d) \n",(pib>pib2) ? carta1:carta2 ,  
                                                (pib>pib2) ? 1:0);

    printf("Pontos Turísticos: Carta %d venceu(%d) \n",(pontosTuristicos>pontosTuristicos2) ? carta1:carta2 ,  
                                                (pontosTuristicos>pontosTuristicos2) ? 1:0);

    printf("Densidade Populacional: Carta %d venceu(%d) \n",(densidadePopulacional1>densidadePopulacional2) ? carta1:carta2 ,  
                                                (densidadePopulacional1>densidadePopulacional2) ? 1:0);

    printf("PIB per Capita: Carta %d venceu(%d) \n",(pibPerCapita1>pibPerCapita2) ? carta1:carta2 ,  
                                                (pibPerCapita1>pibPerCapita2) ? 1:0);

    printf("Super Poder: Carta %d venceu (%d) \n ", (superPoder1>superPoder2) ? carta1:carta2,
                                                 (superPoder1>superPoder2) ? 1:0);

    

    return 0;


}