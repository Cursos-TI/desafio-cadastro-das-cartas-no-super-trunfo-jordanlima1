#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    char estado[50] = "ÁSIA";
    char nomecidadeA01[50] = "Pequim";    
    char codigocarta[5] = ""; 

    int pontosturisticosA01 = 13;
    int codigocidadeA01 = 1;
    int populacaoA01 = 200278;

    float pib = 4984;
    float areakm = 16411;
    double ppc = 210.766;
    double forca = 5000000.00;

    printf("Digite o Numero da carta: \n");
    scanf("%s", codigocarta);

    printf("As informações da carta A01 são: \n");
    printf("%s \n", estado);
    printf("%s \n", nomecidadeA01);
    printf("%s \n", codigocarta);
    printf("%i \n", populacaoA01);
    printf("%d \n", pontosturisticosA01);
    printf("%d \n", codigocidadeA01);
    printf("%f \n", pib);
    printf("%f \n", areakm);
    printf("%lf \n", ppc);
    printf("%lf \n", forca);




    char estado2[50] = "ÁSIA";
    char nomecidadeA02[50] = "Xangai";    
    char codigocarta2[5] = "A02"; 

    int pontosturisticosA02 = 14;
    int codigocidadeA02 = 2;
    int populacaoA02 = 300278;

    float pib2 = 5984;
    float areakm2 = 26411;
    double ppc2 = 110.766;
    double forca2 = 3000000.00;

    printf("Digite o Numero da carta: \n");
    scanf("%s", codigocarta2);

    printf("As informações da carta A02 são: \n");
    printf("%s \n", estado2);
    printf("%s \n", nomecidadeA02);
    printf("%s \n", codigocarta2);
    printf("%i \n", populacaoA02);
    printf("%d \n", pontosturisticosA02);
    printf("%d \n", codigocidadeA02);
    printf("%f \n", pib2);
    printf("%f \n", areakm2);
    printf("%lf \n", ppc2);
    printf("%lf \n", forca2);


    return 0;
}





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

