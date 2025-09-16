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

    char CodigoB2[4] = "B02";
    char NomeB2[30];
    int PopulaçãoB2;
    float AreaB2;
    float PIBB2;
    int PontoB2;

    char CodigoB3[4] = "B03";
    char NomeB3[30];
    int PopulaçãoB3;
    float AreaB3;
    float PIBB3;
    int PontoB3;

    char CodigoB4[4] = "B04";
    char NomeB4[30];
    int PopulaçãoB4;
    float AreaB4;
    float PIBB4;
    int PontoB4;

    char EstadoC1 = 'C';

    char CodigoC1[4] = "C01";
    char NomeC1[30];
    int PopulaçãoC1;
    float AreaC1;
    float PIBC1;
    int PontoC1;

    char CodigoC2[4] = "C02";
    char NomeC2[30];
    int PopulaçãoC2;
    float AreaC2;
    float PIBC2;
    int PontoC2;

    char CodigoC3[4] = "C03";
    char NomeC3[30];
    int PopulaçãoC3;
    float AreaC3;
    float PIBC3;
    int PontoC3;

    char CodigoC4[4] = "C04";
    char NomeC4[30];
    int PopulaçãoC4;
    float AreaC4;
    float PIBC4;
    int PontoC4;

    char EstadoD1 = 'D';

    char CodigoD1[4] = "D01";
    char NomeD1[30];
    int PopulaçãoD1;
    float AreaD1;
    float PIBD1;
    int PontoD1;

    char CodigoD2[4] = "D02";
    char NomeD2[30];
    int PopulaçãoD2;
    float AreaD2;
    float PIBD2;
    int PontoD2;

    char CodigoD3[4] = "D03";
    char NomeD3[30];
    int PopulaçãoD3;
    float AreaD3;
    float PIBD3;
    int PontoD3;

    char CodigoD4[4] = "D04";
    char NomeD4[30];
    int PopulaçãoD4;
    float AreaD4;
    float PIBD4;
    int PontoD4;

    char EstadoE1 = 'E';

    char CodigoE1[4] = "E01";
    char NomeE1[30];
    int PopulaçãoE1;
    float AreaE1;
    float PIBE1;
    int PontoE1;

    char CodigoE2[4] = "E02";
    char NomeE2[30];
    int PopulaçãoE2;
    float AreaE2;
    float PIBE2; 
    int PontoE2;

    char CodigoE3[4] = "E03";
    char NomeE3[30];
    int PopulaçãoE3;
    float AreaE3;
    float PIBE3;
    int PontoE3;

    char CodigoE4[4] = "E04";
    char NomeE4[30];
    int PopulaçãoE4;
    float AreaE4;
    float PIBE4;
    int PontoE4;

    char EstadoF1 = 'F';

    char CodigoF1[4] = "F01";
    char NomeF1[30];
    int PopulaçãoF1;
    float AreaF1;
    float PIBF1;
    int PontoF1;

    char CodigoF2[4] = "F02";
    char NomeF2[30];
    int PopulaçãoF2;
    float AreaF2;
    float PIBF2; 
    int PontoF2;

    char CodigoF3[4] = "F03";
    char NomeF3[30];
    int PopulaçãoF3;
    float AreaF3;
    float PIBF3;
    int PontoF3;

    char CodigoF4[4] = "F04";
    char NomeF4[30];
    int PopulaçãoF4;
    float AreaF4;
    float PIBF4;
    int PontoF4;

    char EstadoG1 = 'G';

    char CodigoG1[4] = "G01";
    char NomeG1[30];
    int PopulaçãoG1;
    float AreaG1;
    float PIBG1;
    int PontoG1;

    char CodigoG2[4] = "G02";
    char NomeG2[30];
    int PopulaçãoG2;
    float AreaG2;
    float PIBG2; 
    int PontoG2;

    char CodigoG3[4] = "G03";
    char NomeG3[30];
    int PopulaçãoG3;
    float AreaG3;
    float PIBG3;
    int PontoG3;

    char CodigoG4[4] = "G04";
    char NomeG4[30];
    int PopulaçãoG4;
    float AreaG4;
    float PIBG4;
    int PontoG4;

    char EstadoH1 = 'H';

    char CodigoH1[4] = "H01";
    char NomeH1[30];
    int PopulaçãoH1;
    float AreaH1;
    float PIBH1;
    int PontoH1;

    char CodigoH2[4] = "H02";
    char NomeH2[30];
    int PopulaçãoH2;
    float AreaH2;
    float PIBH2;
    int PontoH2;

    char CodigoH3[4] = "H03";
    char NomeH3[30];
    int PopulaçãoH3;
    float AreaH3;
    float PIBH3;
    int PontoH3;

    char CodigoH4[4] = "H04";
    char NomeH4[30];
    int PopulaçãoH4;
    float AreaH4;
    float PIBH4;
    int PontoH4;

    printf("\n--- Estado A ---\n");
    printf("\n--- Digite os dados da primeira carta ---\n");
    
    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeA1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoA1);

    printf("Digite a Área: ");
    scanf("%f", &AreaA1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBA1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoA1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeA2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoA2);

    printf("Digite a Área: ");
    scanf("%f", &AreaA2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBA2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoA2);

    printf("\n--- Digite os dados da teceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeA3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoA3);

    printf("Digite a Área: ");
    scanf("%f", &AreaA3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBA3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoA3);

    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeA4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoA4);

    printf("Digite a Área: ");
    scanf("%f", &AreaA4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBA4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoA4);

    printf("\n--- Estado A Concluido! ---\n");

    printf("\n--- Estado B ---\n");
    printf("\n--- Digite os dados da primeira carta ---\n");







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
