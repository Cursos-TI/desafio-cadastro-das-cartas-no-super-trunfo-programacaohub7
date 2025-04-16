#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1  = 'B'; // Letra de 'A' a 'H' (Representando um dos oito estados).
 
    char codigo1  [04] = "B04"; // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
 
    char cidade1  [20] = "Florianopolis"; //  Nome da cidade.
 
    int habitates1  = 1000; //  Número de habitantes da cidade.
 
    float area1  = 100; // Área da cidade em quilômetros quadrados.
 
    float PIB1  = 10; // Produto Interno Bruto da cidade.
 
    int pontos_turisticos1 = 8; 

    float Densidade_Populacional1 = 50; // Divida a população da cidade pela sua área.
    // O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    // Armazene esse valor em uma variável do tipo float.

    float PIB_per_capita1 = 80; // Divida o PIB da cidade pela sua população.
    // O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    // Armazene esse valor em uma variável do tipo float.



    char estado2 = 'A'; // letra de 'A' a 'H' (representando um dos oito estados).
 
    char codigo2 [02] = "A02"; // letra do estado seguida de um número de 01 a 04 (ex: A01, B02).
 
    char cidade2 [30] = "Joinville"; //  nome da cidade.
 
    int habitates2 = 1500; //  número de habitantes da cidade.
 
    float area2 = 400; // área da cidade em quilômetros quadrados.
 
    float PIB2 = 300; // produto Interno Bruto da cidade.
 
    int pontos_turisticos2 = 6; 

    float Densidade_Populacional2 = 30; // Divida a população da cidade pela sua área.
    // O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado.
    // Armazene esse valor em uma variável do tipo float.

    float PIB_per_capita2 = 70; // Divida o PIB da cidade pela sua população.
    // O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade.
    // Armazene esse valor em uma variável do tipo float.


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite uma letra referente ao estado da carta: \n");
    scanf("%c", &estado1);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &habitates1);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite quantos pontos turisticos existem na cidade: \n \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite uma letra referente ao estado da carta: \n");
    scanf("%c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &habitates2);
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite quantos pontos turisticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos2);
    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", habitates1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB:R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n \n",pontos_turisticos1);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", habitates2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB:R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos2);



    return 0;
}
