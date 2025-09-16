#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char EstadoA1 = 'A';
    char CodigoA1[4] = "A01";
    char NomeA1[30];
    int PopulaçãoA1;
    float AreaA1;
    float PIBA1;
    int PontoA1;

    char CodigoA2[4] = "A02";
    char NomeA2[30];
    int PopulaçãoA2;
    float AreaA2;
    float PIBA2;
    int PontoA2;

    char CodigoA3[4] = "A03";
    char NomeA3[30];
    int PopulaçãoA3;
    float AreaA3;
    float PIBA3;
    int PontoA3;

    char CodigoA4[4] = "A04";
    char NomeA4[30];
    int PopulaçãoA4;
    float AreaA4;
    float PIBA4;
    int PontoA4;

    char EstadoB1 = 'B';
    char CodigoB1[4] = "B01";
    char NomeB1[30];
    int PopulaçãoB1;
    float AreaB1;
    float PIBB1;
    int PontoB1;


    printf("\n---Digite os dados da primeira carta ---\n");
    
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeA1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoA1);

    printf("Digite a Area: ");
    scanf("%f", &AreaA1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBA1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf ("%d", &PontoA1);






    printf("\n--- Dados da Carta A01 ---\n");
    printf("Estado: %c\n", EstadoA1);
    printf("Código: %s\n", CodigoA1);
    printf("Nome da Cidade: %s\n", NomeA1);
    printf("População: %d\n", PopulaçãoA1);
    printf("Área: %.2f km²\n", AreaA1);
    printf("PIB: %2.f bilhões de reais\n", PIBA1);
    printf("Número de Pontos Turísticos: %d", PontoA1);

    


return 0;
} 
