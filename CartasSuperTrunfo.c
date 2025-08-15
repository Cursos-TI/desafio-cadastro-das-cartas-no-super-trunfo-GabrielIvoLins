#include <stdio.h>

// Desafio super trunfo nivel novato.
// Aluno: Gabriel Ivo Lins

/*
Informação em cada carta:
Estado - (char)
Código da carta - (char[])
Nome da cidade - (char[])
População - (int)
Área em km² - (float)
PIB - (float)
Nº de pontos turísticos - (int)
*/

int main(){

    // Declaração de variaveis da carta 1
    char estado1[50], codigo_carta1[10], nome_cidade1[50];
    int populacao1, num_pontos_turisticos1;
    float area1, pib1;

    // Declaração de variaveis da carta 2
    char estado2[50], codigo_carta2[10], nome_cidade2[50];
    int populacao2, num_pontos_turisticos2;
    float area2, pib2;

    // Interação do usuario para a Carta 1
    // o codigo a baixo até a linha do ultimo scanf pede ao usuario que insira os dados da carta 1
    printf("Bem vindo ao super trunfo: Países!\n");
    printf("Agora insira dados de um estado para a carta 1:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta - Letra do estado mais o número entre 1 a 4: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite o número da População: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite PIB: ");
    scanf("%f", &pib1);

    printf("Digite o nº de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos1);
    // fim da inteiração com o usuario    
    
    // exibe o que o usuario digitou!
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Milhoes de reais\n", pib1);
    printf("Nº de pontos turísticos: %d\n", num_pontos_turisticos1);

    printf("\nAgora, insira os dados da carta 2:\n"); // Agora será solicitado que o usuario insira informações da carta 2

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta - Letra do estado mais o número entre 1 a 4: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite o número da População: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite PIB: ");
    scanf("%f", &pib2);

    printf("Digite o nº de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos2);

    // Agora será exibido o que o usuario digitou na carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Milhoes de reais\n", pib2);
    printf("Nº de pontos turísticos: %d\n", num_pontos_turisticos2);

    // fim do programa.

    return 0;
}