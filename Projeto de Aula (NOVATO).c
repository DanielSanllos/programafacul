#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];
    // comando para coletar idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    // comando para verificar se o codigo responde corretamente 
    printf("A idade é: %d\n", idade);
    // comando para coletar altura
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    //comando para verificar se o codigo responde corretamente
    printf("A altura é: %.2f\n", altura);
    // comando para coletar nome
    printf("Digite seu nome: ");
    scanf("%s", nome);
    //comando para verificar se o codigo responde corretamente
    printf("O nome é: %s\n", nome);






}