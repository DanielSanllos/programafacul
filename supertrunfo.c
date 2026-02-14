#include <stdio.h>

// comando de estrutura que representa uma carta trunfo
struct Carta {

    char estado;
    char codigo[20];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turistico;

};

int main(){
    // comando de estrutura para organizar a coleta de dados
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    // imprime o titulo 1
    printf("Carta1\n");

    // imprime estado
    printf("Qual o Estado: ");
    scanf(" %c", &carta1.estado); // Permite ler o estado

    // imprime codigo
    printf("Qual o código: ");
    scanf("%s", carta1.codigo); // Permite ler o codigo

    // imprime cidade
    printf("Qual sua cidade: ");
    scanf("%s", carta1.cidade); // Permite ler a cidade

    // imprime população
    printf("Qual a quantidade da população: ");
    scanf("%d", &carta1.populacao); // Permite ler a quantidade de população

    // imprime area
    printf("Quantos quilometros tem a area: ");
    scanf("%f", &carta1.area); // Permite ler a area

    // imprime o PIB
    printf("Qual o PIB: ");
    scanf("%f", &carta1.pib); // Permite ler o PIB

    // Imprime ponto turistico
    printf("Qual o numero de ponto turistico: ");
    scanf("%d", &carta1.turistico); // Permite ler o ponto turistico

    // // cálculo da densidade populacional
    densidade1 = carta1.populacao / carta1.area;
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);

    // cálculo do PIB per capita
    pibpercapita1 = carta1.pib / carta1.populacao;
    printf("PIB per capita: %f\n", pibpercapita1);

    printf("\n"); // epaço extra

    // imprime o titulo 2
    printf("Carta2\n");

    // imprime estado
    printf("Qual o Estado: ");
    scanf(" %c", &carta2.estado); // Permite ler Estado

    // imprime carta
    printf("Qual o código: ");
    scanf("%s", carta2.codigo); // Permite ler codigo

    // imprime cidade
    printf("Qual sua cidade: ");
    scanf("%s", carta2.cidade); // Permite ler cidade

    // imprime população
    printf("Qual a quantidade da população: ");
    scanf("%d", &carta2.populacao); // Permite ler população

    // imprime area
    printf("Quantos quilometros tem a area: ");
    scanf("%f", &carta2.area); // Permite ler area

    // imprime PIB
    printf("Qual o PIB: ");
    scanf("%f", &carta2.pib); // Permite ler o PIB

    // imprime ponto turistico
    printf("Qual o numero de ponto turistico: ");
    scanf("%d", &carta2.turistico); // Permite ler o ponto turistico

    // // cálculo da densidade populacional
    densidade2 = carta2.populacao / carta2.area;
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);

    // cálculo do PIB per capita
    pibpercapita2 = carta2.pib / carta2.populacao;
    printf("PIB per capita: %f\n", pibpercapita2);

    

}