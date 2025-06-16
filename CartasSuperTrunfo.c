#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, nPontosTuristicos1, populacao2, nPontosTuristicos2;
    float area1, pIB1, area2, pIB2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Usuário insere os dados da primeira carta
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pIB1);

    printf("Digite o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &nPontosTuristicos1);
    
    //Usuário insere os dados da segunda carta
    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pIB2);

    printf("Digite o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &nPontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Exibe os valores da primeira carta
    printf("Carta 1\n - Polulação: %d\n - Área: %f\n - PIB: %f\n - Número de Pontos Turísticos: %d\n", populacao1, area1, pIB1, nPontosTuristicos1);

    //Exibe os valores da segunda carta
    printf("Carta 2\n - Polulação: %d\n - Área: %f\n - PIB: %f\n - Número de Pontos Turísticos: %d\n", populacao2, area2, pIB2, nPontosTuristicos2);

    return 0;
}
