//Este programa realiza a leitura de duas cartas do jogo super trunfo, contendo as seguintes informações:

// Estado: Uma letra de 'A' a 'H'
 
// Código da Carta
 
// Nome da Cidade
 
// População
 
// Área (em km²)
 
// PIB
 
// Número de Pontos Turísticos

// Ao final é feita uma comparação entre as cartas para saber quem foi a vencedora.



#include <stdio.h>
#include <string.h>


int main(){

    char letraEstado[50], nomeCidade[50], codigo[50], buffer[50];
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

    printf("===========================================\n");

    // Adicionando a carta 1:

    printf("Carta 1: \n"); 

    printf("Escreva uma letra: ");
    fgets(letraEstado, 50, stdin);
    letraEstado[strcspn(letraEstado, "\n")] = 0;

    printf("Escreva o código da carta: ");
    fgets(codigo, 50, stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Escreva o nome da cidade (Ou a sigla): ");
    fgets(nomeCidade, 50, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf ("%f", &area);

    printf("Digite o PIB da cidade (EM BILHÕES DE REAIS): ");
    scanf("%f", &pib);

    printf("Escreva a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    fgets(buffer, sizeof(buffer), stdin); // Limpar o buffer do teclado

    printf("===========================================\n");

    
    // Adicionando a carta 2: 

    printf("Carta 2: \n"); 
    
    printf("Escreva uma letra: ");
    fgets(letraEstado2, 50, stdin);
    letraEstado2[strcspn(letraEstado2, "\n")] = 0;

    printf("Escreva o código da carta: ");
    fgets(codigo2, 50, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Escreva o nome da cidade (Ou a sigla): ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf ("%f", &area2);

    printf("Digite o PIB da cidade (EM BILHÕES DE REAIS): ");
    scanf("%f", &pib2);

    printf("Escreva a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

   printf("===========================================\n");
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

    printf("===========================================\n");

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

    printf("===========================================\n");


    printf("***Comparação de cartas**** \n");

    
    printf("\nATRIBUTO: POPULAÇÃO\n");
    printf("CARTA 1 %s (%s): %d", nomeCidade,letraEstado,populacao);
    printf("\nCARTA 2 %s (%s): %d\n", nomeCidade2,letraEstado2,populacao2);

    if (populacao>populacao2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else {
        printf("CARTA 2 %s (%s) VENCEU!\n",nomeCidade2,letraEstado2);
    }

    printf("-------------------------------------------------------------------");

    printf("\nATRIBUTO: ÁREA\n");
    printf("CARTA 1 %s (%s): %f", nomeCidade,letraEstado,area);
    printf("\nCARTA 2 %s (%s): %f\n", nomeCidade2,letraEstado2,area2);

    if (area>area2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else {
        printf("CARTA 2 %s (%s) VENCEU!\n",nomeCidade2,letraEstado2);
    }

    printf("-------------------------------------------------------------------");

    printf("\nATRIBUTO: PIB\n");
    printf("CARTA 1 %s (%s): %f", nomeCidade,letraEstado,pib);
    printf("\nCARTA 2 %s (%s): %f\n", nomeCidade2,letraEstado2,pib2);

    if (pib>pib2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else {
        printf("CARTA 2 %s (%s) VENCEU!\n",nomeCidade2,letraEstado2);
    }

    printf("-------------------------------------------------------------------");

    printf("\nATRIBUTO: PONTOS TURÍSTICOS\n");
    printf("CARTA 1 %s (%s): %d", nomeCidade,letraEstado,pontosTuristicos);
    printf("\nCARTA 2 %s (%s): %d\n", nomeCidade2,letraEstado2,pontosTuristicos2);

    if (pontosTuristicos>pontosTuristicos2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else {
        printf("CARTA 2 %s (%s) VENCEU!\n",nomeCidade2,letraEstado2);
    }

    printf("-------------------------------------------------------------------");

    printf("\nATRIBUTO: DENSIDADE POPULACIONAL\n");
    printf("CARTA 1 %s (%s): %f", nomeCidade,letraEstado,densidadePopulacional1);
    printf("\nCARTA 2 %s (%s): %f\n", nomeCidade2,letraEstado2,densidadePopulacional2);

    if (densidadePopulacional1<densidadePopulacional2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else{
        printf("CARTA 2%s (%s) VENCEU!\n",nomeCidade2,letraEstado2);

    }

    printf("-------------------------------------------------------------------");
    
    printf("\nATRIBUTO: PIB PER CAPITA\n");
    printf("CARTA 1 %s (%s): %f", nomeCidade,letraEstado,pibPerCapita1);
    printf("\nCARTA 2 %s (%s): %f\n", nomeCidade2,letraEstado2,pibPerCapita2);

    if (pibPerCapita1>pibPerCapita2) {
        printf("CARTA 1 %s (%s) VENCEU!\n",nomeCidade,letraEstado);
    }
    else {
        printf("CARTA 2 %s (%s) VENCEU!\n",nomeCidade2,letraEstado2);
    }

    printf("-------------------------------------------------------------------");

return 0;  
}