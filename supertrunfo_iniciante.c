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
    float pib, area;
    int pontosTuristicos, populacao;

    //Variaveis da segunda carta.
    
    char letraEstado2[50], nomeCidade2[50], codigo2[50];
    float pib2, area2;
    int pontosTuristicos2, populacao2;

    printf("Carta 1: \n"); 


    
    printf("Escreva uma letra: ");
    scanf("%s", letraEstado);

    printf("Escreva o código da carta: ");
    scanf("%s", codigo);

    printf("Escreva o nome da cidade (Ou a sigla): ");
    scanf("%s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf ("%f", &area);

    printf("Digite o PIB da cidade (EM BILHÕES DE REAIS): ");
    scanf("%f", &pib);

    printf("Escreva a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Adicionando a carta 2: 

     printf("Carta 2: \n"); 
    
    printf("Escreva uma letra: ");
    scanf("%s", letraEstado2);

    printf("Escreva o código da carta: ");
    scanf("%s", codigo2);

    printf("Escreva o nome da cidade(Ou a sigla): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

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

    printf("População: %d \n", populacao);

    printf("Área: %.2f km² \n", area);

    printf("PIB: %.2f bilhões de reais \n", pib);

    printf("Número de pontos turísticos: %d \n", pontosTuristicos);

    // Imprimindo o código 2: 

    printf("Carta 2: \n");

    printf("Estado: %s \n", letraEstado2);

    printf("Código: %s \n", codigo2);

    printf("Nome da cidade: %s \n", nomeCidade2 );

    printf("População: %d \n", populacao2);

    printf("Área: %f km² \n", area2);

    printf("PIB: %.2f bilhões de reais \n", pib2);

    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);

    return 0;

}