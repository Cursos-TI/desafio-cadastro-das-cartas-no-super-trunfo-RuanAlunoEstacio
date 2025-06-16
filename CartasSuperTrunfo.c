#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int nPontosTuristicos1, nPontosTuristicos2;
    unsigned int populacao1, populacao2;
    float area1, pIB1, densidade1, pIBpC1, super1, area2, pIB2, densidade2, pIBpC2, super2;
    char nome1[30]; 
    char nome2[30];
    char codigoCidade1[4];
    char codigoCidade2[4]; 
    char letraEstado1;
    char letraEstado2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Usuário insere os dados da primeira carta
    printf("Digite a letra do estado da primeira carta: ");
    scanf(" %c", &letraEstado1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigoCidade1);

    printf("Digite o nome sem espaços da cidade da primeira carta: ");
    scanf(" %s", nome1);

    printf("Digite a população da primeira carta: ");
    scanf(" %d", &populacao1);

    printf("Digite a área em km² da primeira carta: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões da primeira carta: ");
    scanf(" %f", &pIB1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf(" %d", &nPontosTuristicos1);

    //Cálculo e conversão dos dados de densidade demográfica e PIB per Capita da carta 1
    densidade1 = (float)populacao1/area1;
    //multiplicando o pib por 1 bilhão antes de fazer of cálculo
    pIBpC1 = (pIB1*(float)1000000000)/(float)populacao1;
    //Cálculo do super poder
    super1 = (float)populacao1 + (float)nPontosTuristicos1 + (1/densidade1) + pIB1 + area1 + pIBpC1;
    
    //Usuário insere os dados da segunda carta 
    printf("Digite a letra do estado da segunda carta: ");
    scanf(" %c", &letraEstado2);

    printf("Digite o código da segunda carta: ");
    scanf(" %s", codigoCidade2);

    printf("Digite o nome sem espaços da cidade da segunda carta: ");
    scanf(" %s", nome2);

    printf("Digite a população da segunda carta: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em km² da segunda carta: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões da segunda carta: ");
    scanf(" %f", &pIB2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf(" %d", &nPontosTuristicos2);

    //Cálculo e conversão dos dados de densidade demográfica e PIB per Capita da carta 2
    densidade2 = (float)populacao2/area2;
    //multiplicando o pib por 1 bilhão antes de fazer of cálculo
    pIBpC2 = pIB2*1000000000/(float)populacao2;
    //Cálculo do super poder
    super2 = (float)populacao2 + (float)nPontosTuristicos2 + (1/densidade2) + pIB2 + area2 + pIBpC2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Exibe os valores da primeira carta
    printf("Carta 1:\n - Estado: %c \n - Código: %s\n - Nome da Cidade: %s\n - Polulação: %d habitantes\n - Área: %.2f km²\n - PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n - Super Poder: %.2f \n", letraEstado1, codigoCidade1, nome1, populacao1, area1, pIB1, nPontosTuristicos1, densidade1, pIBpC1, super1);

    //Exibe os valores da segunda carta
    printf("\nCarta 2:\n - Estado: %c \n - Código: %s\n - Nome da Cidade: %s\n - Polulação: %d habitantes\n - Área: %.2f km²\n - PIB: %.2f bilhões de reais\n - Número de Pontos Turísticos: %d\n - Densidade Populacional: %.2f hab/km²\n - PIB per Capita: %.2f reais\n - Super Poder: %.2f \n", letraEstado2, codigoCidade2, nome2, populacao2, area2, pIB2, nPontosTuristicos2, densidade2, pIBpC2, super2);

    //Comparação das cartas, retorna valor 1 caso a carta 1 tenha ganhado e 0 caso contrário
    printf("\n - Comparação das Cartas:");
    printf("\n - População: %d", populacao1>populacao2);
    printf("\n - Área: %d", area1>area2);
    printf("\n - PIB: %d", pIB1>pIB2);
    printf("\n - Pontos Turísticos: %d", nPontosTuristicos1>nPontosTuristicos2);
    printf("\n - Densidade Populacional: %d", densidade1<densidade2);
    printf("\n - PIB per Capita: %d", pIBpC1>pIBpC2);
    printf("\n - Super Poder: %d\n", super1>super2);

    return 0;
}
