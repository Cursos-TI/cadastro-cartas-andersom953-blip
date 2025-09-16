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
    scanf("%s", NomeA1);

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

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeB1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoB1);

    printf("Digite a Área: ");
    scanf("%f", &AreaB1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBB1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoB1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeB2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoB2);

    printf("Digite a Área: ");
    scanf("%f", &AreaB2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBB2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoB2);

    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeB3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoB3);

    printf("Digite a Área: ");
    scanf("%f", &AreaB3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBB3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoB3);

    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeB4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoB4);

    printf("Digite a Área: ");
    scanf("%f", &AreaB4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBB4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoB4);

    printf("\n--- Estado B Concluido! ---\n");

    printf("\n--- Estado C ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeC1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoC1);

    printf("Digite a Área: ");
    scanf("%f", &AreaC1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBC1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoC1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeC2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoC2);

    printf("Digite a Área: ");
    scanf("%f", &AreaC2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBC2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoC2);

    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeC3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoC3);

    printf("Digite a Área: ");
    scanf("%f", &AreaC3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBC3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoC3);

    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeC4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoC4);

    printf("Digite a Área: ");
    scanf("%f", &AreaC4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBC4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoC4);

    printf("\n--- Estado C Concluido! ---\n");

    printf("\n--- Estado D ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeD1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoD1);

    printf("Digite a Área: ");
    scanf("%f", &AreaD1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBD1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoD1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeD2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoD2);

    printf("Digite a Área: ");
    scanf("%f", &AreaD2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBD2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoD2);
    
    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeD3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoD3);

    printf("Digite a Área: ");
    scanf("%f", &AreaD3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBD3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoD3);
    
    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeD4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoD4);

    printf("Digite a Área: ");
    scanf("%f", &AreaD4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBD4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoD4);

    printf("\n--- Estado D Concluido! ---\n");

    printf("\n--- Estado E ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeE1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoE1);

    printf("Digite a Área: ");
    scanf("%f", &AreaE1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBE1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoE1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeE2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoE2);

    printf("Digite a Área: ");
    scanf("%f", &AreaE2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBE2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoE2);
    
    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeE3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoE3);

    printf("Digite a Área: ");
    scanf("%f", &AreaE3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBE3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoE3);
    
    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeE4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoE4);

    printf("Digite a Área: ");
    scanf("%f", &AreaE4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBE4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoE4);

    printf("\n--- Estado E Concluido! ---\n");

    printf("\n--- Estado F ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeF1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoF1);

    printf("Digite a Área: ");
    scanf("%f", &AreaF1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBF1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoF1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeF2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoF2);

    printf("Digite a Área: ");
    scanf("%f", &AreaF2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBF2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoF2);
    
    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeF3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoF3);

    printf("Digite a Área: ");
    scanf("%f", &AreaF3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBF3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoF3);
    
    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeF4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoF4);

    printf("Digite a Área: ");
    scanf("%f", &AreaF4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBF4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoF4);

    printf("\n--- Estado F Concluido! ---\n");

    printf("\n--- Estado G ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeG1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoG1);

    printf("Digite a Área: ");
    scanf("%f", &AreaG1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBG1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoG1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeG2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoG2);

    printf("Digite a Área: ");
    scanf("%f", &AreaG2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBG2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoG2);
    
    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeG3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoG3);

    printf("Digite a Área: ");
    scanf("%f", &AreaG3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBG3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoG3);
    
    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeG4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoG4);

    printf("Digite a Área: ");
    scanf("%f", &AreaG4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBG4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoG4);

    printf("\n--- Estado G Concluido! ---\n");

    printf("\n--- Estado H ---\n");

    printf("\n--- Digite os dados da primeira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeH1);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoH1);

    printf("Digite a Área: ");
    scanf("%f", &AreaH1);

    printf("Digite o PIB: ");
    scanf("%f", &PIBH1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoH1);

    printf("\n--- Digite os dados da segunda carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeH2);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoH2);

    printf("Digite a Área: ");
    scanf("%f", &AreaH2);

    printf("Digite o PIB: ");
    scanf("%f", &PIBH2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoH2);
    
    printf("\n--- Digite os dados da terceira carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeH3);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoH3);

    printf("Digite a Área: ");
    scanf("%f", &AreaH3);

    printf("Digite o PIB: ");
    scanf("%f", &PIBH3);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoH3);
    
    printf("\n--- Digite os dados da quarta carta ---\n");

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &NomeH4);

    printf("Digite a População: ");
    scanf("%d", &PopulaçãoH4);

    printf("Digite a Área: ");
    scanf("%f", &AreaH4);

    printf("Digite o PIB: ");
    scanf("%f", &PIBH4);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontoH4);

    printf("\n--- Estado H Concluido! ---\n");

    printf("\n--- Informações das Cartas ---\n")

    printf("\n--- Estado A ---\n");
    
    printf("\n--- Dados da Carta A01 ---\n");
    printf("Estado: %c\n", EstadoA1);
    printf("Código: %s\n", CodigoA1);
    printf("Nome da Cidade: %s\n", NomeA1);
    printf("População: %d\n", PopulaçãoA1);
    printf("Área: %.2f km²\n", AreaA1);
    printf("PIB: %2.f bilhões de reais\n", PIBA1);
    printf("Número de Pontos Turísticos: %d\n", PontoA1);

    printf("\n--- Dados da Carta A02 ---\n");
    printf("Estado: %c\n", EstadoA1);
    printf("Código: %s\n", CodigoA2);
    printf("Nome da Cidade: %s\n", NomeA2);
    printf("População: %d\n", PopulaçãoA2);
    printf("Área: %.2f km²\n", AreaA2);
    printf("PIB: %2.f bilhões de reais\n", PIBA2);
    printf("Número de Pontos Turísticos: %d\n", PontoA2);

    printf("\n--- Dados da Carta A03 ---\n");
    printf("Estado: %c\n", EstadoA1);
    printf("Código: %s\n", CodigoA3);
    printf("Nome da Cidade: %s\n", NomeA3);
    printf("População: %d\n", PopulaçãoA3);
    printf("Área: %.2f km²\n", AreaA3);
    printf("PIB: %2.f bilhões de reais\n", PIBA3);
    printf("Número de Pontos Turísticos: %d\n", PontoA3);

    printf("\n--- Dados da Carta A04 ---\n");
    printf("Estado: %c\n", EstadoA1);
    printf("Código: %s\n", CodigoA4);
    printf("Nome da Cidade: %s\n", NomeA4);
    printf("População: %d\n", PopulaçãoA4);
    printf("Área: %.2f km²\n", AreaA4);
    printf("PIB: %2.f bilhões de reais\n", PIBA4);
    printf("Número de Pontos Turísticos: %d\n", PontoA4);

    printf("\n--- Estado B ---\n");

    printf("\n--- Dados da Carta B01 ---\n");
    printf("Estado: %c\n", EstadoB1);
    printf("Código: %s\n", CodigoB1);
    printf("Nome da Cidade: %s\n", NomeB1);
    printf("População: %d\n", PopulaçãoB1);
    printf("Área: %.2f km²\n", AreaB1);
    printf("PIB: %2.f bilhões de reais\n", PIBB1);
    printf("Número de Pontos Turísticos: %d\n", PontoB1);

    printf("\n--- Dados da Carta B02 ---\n");
    printf("Estado: %c\n", EstadoB1);
    printf("Código: %s\n", CodigoB2);
    printf("Nome da Cidade: %s\n", NomeB2);
    printf("População: %d\n", PopulaçãoB2);
    printf("Área: %.2f km²\n", AreaB2);
    printf("PIB: %2.f bilhões de reais\n", PIBB2);
    printf("Número de Pontos Turísticos: %d\n", PontoB2);

    printf("\n--- Dados da Carta B03 ---\n");
    printf("Estado: %c\n", EstadoB1);
    printf("Código: %s\n", CodigoB3);
    printf("Nome da Cidade: %s\n", NomeB3);
    printf("População: %d\n", PopulaçãoB3);
    printf("Área: %.2f km²\n", AreaB3);
    printf("PIB: %2.f bilhões de reais\n", PIBB3);
    printf("Número de Pontos Turísticos: %d\n", PontoB3);

    printf("\n--- Dados da Carta B04 ---\n");
    printf("Estado: %c\n", EstadoB1);
    printf("Código: %s\n", CodigoB4);
    printf("Nome da Cidade: %s\n", NomeB4);
    printf("População: %d\n", PopulaçãoB4);
    printf("Área: %.2f km²\n", AreaB4);
    printf("PIB: %2.f bilhões de reais\n", PIBB4);
    printf("Número de Pontos Turísticos: %d\n", PontoB4);

    printf("\n--- Estado C ---\n");

    printf("\n--- Dados da Carta C01 ---\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Código: %s\n", CodigoC1);
    printf("Nome da Cidade: %s\n", NomeC1);
    printf("População: %d\n", PopulaçãoC1);
    printf("Área: %.2f km²\n", AreaC1);
    printf("PIB: %2.f bilhões de reais\n", PIBC1);
    printf("Número de Pontos Turísticos: %d\n", PontoC1);

    printf("\n--- Dados da Carta C02 ---\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Código: %s\n", CodigoC2);
    printf("Nome da Cidade: %s\n", NomeC2);
    printf("População: %d\n", PopulaçãoC2);
    printf("Área: %.2f km²\n", AreaC2);
    printf("PIB: %2.f bilhões de reais\n", PIBC2);
    printf("Número de Pontos Turísticos: %d\n", PontoC2);

    printf("\n--- Dados da Carta C03 ---\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Código: %s\n", CodigoC3);
    printf("Nome da Cidade: %s\n", NomeC3);
    printf("População: %d\n", PopulaçãoC3);
    printf("Área: %.2f km²\n", AreaC3);
    printf("PIB: %2.f bilhões de reais\n", PIBC3);
    printf("Número de Pontos Turísticos: %d\n", PontoC3);

    printf("\n--- Dados da Carta C04 ---\n");
    printf("Estado: %c\n", EstadoC1);
    printf("Código: %s\n", CodigoC4);
    printf("Nome da Cidade: %s\n", NomeC4);
    printf("População: %d\n", PopulaçãoC4);
    printf("Área: %.2f km²\n", AreaC4);
    printf("PIB: %2.f bilhões de reais\n", PIBC4);
    printf("Número de Pontos Turísticos: %d\n", PontoC4);

    printf("\n--- Estado D ---\n");

    printf("\n--- Dados da Carta D01 ---\n");
    printf("Estado: %c\n", EstadoD1);
    printf("Código: %s\n", CodigoD1);
    printf("Nome da Cidade: %s\n", NomeD1);
    printf("População: %d\n", PopulaçãoD1);
    printf("Área: %.2f km²\n", AreaD1);
    printf("PIB: %2.f bilhões de reais\n", PIBD1);
    printf("Número de Pontos Turísticos: %d\n", PontoD1);

    printf("\n--- Dados da Carta D02 ---\n");
    printf("Estado: %c\n", EstadoD1);
    printf("Código: %s\n", CodigoD2);
    printf("Nome da Cidade: %s\n", NomeD2);
    printf("População: %d\n", PopulaçãoD2);
    printf("Área: %.2f km²\n", AreaD2);
    printf("PIB: %2.f bilhões de reais\n", PIBD2);
    printf("Número de Pontos Turísticos: %d\n", PontoD2);

    printf("\n--- Dados da Carta D03 ---\n");
    printf("Estado: %c\n", EstadoD1);
    printf("Código: %s\n", CodigoD3);
    printf("Nome da Cidade: %s\n", NomeD3);
    printf("População: %d\n", PopulaçãoD3);
    printf("Área: %.2f km²\n", AreaD3);
    printf("PIB: %2.f bilhões de reais\n", PIBD3);
    printf("Número de Pontos Turísticos: %d\n", PontoD3);

    printf("\n--- Dados da Carta D04 ---\n");
    printf("Estado: %c\n", EstadoD1);
    printf("Código: %s\n", CodigoD4);
    printf("Nome da Cidade: %s\n", NomeD4);
    printf("População: %d\n", PopulaçãoD4);
    printf("Área: %.2f km²\n", AreaD4);
    printf("PIB: %2.f bilhões de reais\n", PIBD4);
    printf("Número de Pontos Turísticos: %d\n", PontoD4);

    printf("\n--- Estado E ---\n");

    printf("\n--- Dados da Carta E01 ---\n");
    printf("Estado: %c\n", EstadoE1);
    printf("Código: %s\n", CodigoE1);
    printf("Nome da Cidade: %s\n", NomeE1);
    printf("População: %d\n", PopulaçãoE1);
    printf("Área: %.2f km²\n", AreaE1);
    printf("PIB: %2.f bilhões de reais\n", PIBE1);
    printf("Número de Pontos Turísticos: %d\n", PontoE1);

    printf("\n--- Dados da Carta E02 ---\n");
    printf("Estado: %c\n", EstadoE1);
    printf("Código: %s\n", CodigoE2);
    printf("Nome da Cidade: %s\n", NomeE2);
    printf("População: %d\n", PopulaçãoE2);
    printf("Área: %.2f km²\n", AreaE2);
    printf("PIB: %2.f bilhões de reais\n", PIBE2);
    printf("Número de Pontos Turísticos: %d\n", PontoE2);

    printf("\n--- Dados da Carta E03 ---\n");
    printf("Estado: %c\n", EstadoE1);
    printf("Código: %s\n", CodigoE3);
    printf("Nome da Cidade: %s\n", NomeE3);
    printf("População: %d\n", PopulaçãoE3);
    printf("Área: %.2f km²\n", AreaE3);
    printf("PIB: %2.f bilhões de reais\n", PIBE3);
    printf("Número de Pontos Turísticos: %d\n", PontoE3);

    printf("\n--- Dados da Carta E04 ---\n");
    printf("Estado: %c\n", EstadoE1);
    printf("Código: %s\n", CodigoE4);
    printf("Nome da Cidade: %s\n", NomeE4);
    printf("População: %d\n", PopulaçãoE4);
    printf("Área: %.2f km²\n", AreaE4);
    printf("PIB: %2.f bilhões de reais\n", PIBE4);
    printf("Número de Pontos Turísticos: %d\n", PontoE4);

    printf("\n--- Estado F ---\n");

    printf("\n--- Dados da Carta F01 ---\n");
    printf("Estado: %c\n", EstadoF1);
    printf("Código: %s\n", CodigoF1);
    printf("Nome da Cidade: %s\n", NomeF1);
    printf("População: %d\n", PopulaçãoF1);
    printf("Área: %.2f km²\n", AreaF1);
    printf("PIB: %2.f bilhões de reais\n", PIBF1);
    printf("Número de Pontos Turísticos: %d\n", PontoF1);

    printf("\n--- Dados da Carta F02 ---\n");
    printf("Estado: %c\n", EstadoF1);
    printf("Código: %s\n", CodigoF2);
    printf("Nome da Cidade: %s\n", NomeF2);
    printf("População: %d\n", PopulaçãoF2);
    printf("Área: %.2f km²\n", AreaF2);
    printf("PIB: %2.f bilhões de reais\n", PIBF2);
    printf("Número de Pontos Turísticos: %d\n", PontoF2);

    printf("\n--- Dados da Carta F03 ---\n");
    printf("Estado: %c\n", EstadoF1);
    printf("Código: %s\n", CodigoF3);
    printf("Nome da Cidade: %s\n", NomeF3);
    printf("População: %d\n", PopulaçãoF3);
    printf("Área: %.2f km²\n", AreaF3);
    printf("PIB: %2.f bilhões de reais\n", PIBF3);
    printf("Número de Pontos Turísticos: %d\n", PontoF3);

    printf("\n--- Dados da Carta F04 ---\n");
    printf("Estado: %c\n", EstadoF1);
    printf("Código: %s\n", CodigoF4);
    printf("Nome da Cidade: %s\n", NomeF4);
    printf("População: %d\n", PopulaçãoF4);
    printf("Área: %.2f km²\n", AreaF4);
    printf("PIB: %2.f bilhões de reais\n", PIBF4);
    printf("Número de Pontos Turísticos: %d\n", PontoF4);

       printf("\n--- Estado G ---\n");

    printf("\n--- Dados da Carta G01 ---\n");
    printf("Estado: %c\n", EstadoG1);
    printf("Código: %s\n", CodigoG1);
    printf("Nome da Cidade: %s\n", NomeG1);
    printf("População: %d\n", PopulaçãoG1);
    printf("Área: %.2f km²\n", AreaG1);
    printf("PIB: %2.f bilhões de reais\n", PIBG1);
    printf("Número de Pontos Turísticos: %d\n", PontoG1);

    printf("\n--- Dados da Carta G02 ---\n");
    printf("Estado: %c\n", EstadoG1);
    printf("Código: %s\n", CodigoG2);
    printf("Nome da Cidade: %s\n", NomeG2);
    printf("População: %d\n", PopulaçãoG2);
    printf("Área: %.2f km²\n", AreaG2);
    printf("PIB: %2.f bilhões de reais\n", PIBG2);
    printf("Número de Pontos Turísticos: %d/n", PontoG2);

    printf("\n--- Dados da Carta G03 ---\n");
    printf("Estado: %c\n", EstadoG1);
    printf("Código: %s\n", CodigoG3);
    printf("Nome da Cidade: %s\n", NomeG3);
    printf("População: %d\n", PopulaçãoG3);
    printf("Área: %.2f km²\n", AreaG3);
    printf("PIB: %2.f bilhões de reais\n", PIBG3);
    printf("Número de Pontos Turísticos: %d\n", PontoG3);

    printf("\n--- Dados da Carta G04 ---\n");
    printf("Estado: %c\n", EstadoG1);
    printf("Código: %s\n", CodigoG4);
    printf("Nome da Cidade: %s\n", NomeG4);
    printf("População: %d\n", PopulaçãoG4);
    printf("Área: %.2f km²\n", AreaG4);
    printf("PIB: %2.f bilhões de reais\n", PIBG4);
    printf("Número de Pontos Turísticos: %d\n", PontoG4);

           printf("\n--- Estado H ---\n");

    printf("\n--- Dados da Carta H01 ---\n");
    printf("Estado: %c\n", EstadoH1);
    printf("Código: %s\n", CodigoH1);
    printf("Nome da Cidade: %s\n", NomeH1);
    printf("População: %d\n", PopulaçãoH1);
    printf("Área: %.2f km²\n", AreaH1);
    printf("PIB: %2.f bilhões de reais\n", PIBH1);
    printf("Número de Pontos Turísticos: %d\n", PontoH1);

    printf("\n--- Dados da Carta H02 ---\n");
    printf("Estado: %c\n", EstadoH1);
    printf("Código: %s\n", CodigoH2);
    printf("Nome da Cidade: %s\n", NomeH2);
    printf("População: %d\n", PopulaçãoH2);
    printf("Área: %.2f km²\n", AreaH2);
    printf("PIB: %2.f bilhões de reais\n", PIBH2);
    printf("Número de Pontos Turísticos: %d\n", PontoH2);

    printf("\n--- Dados da Carta H03 ---\n");
    printf("Estado: %c\n", EstadoH1);
    printf("Código: %s\n", CodigoH3);
    printf("Nome da Cidade: %s\n", NomeH3);
    printf("População: %d\n", PopulaçãoH3);
    printf("Área: %.2f km²\n", AreaH3);
    printf("PIB: %2.f bilhões de reais\n", PIBH3);
    printf("Número de Pontos Turísticos: %d\n", PontoH3);

    printf("\n--- Dados da Carta H04 ---\n");
    printf("Estado: %c\n", EstadoH1);
    printf("Código: %s\n", CodigoH4);
    printf("Nome da Cidade: %s\n", NomeH4);
    printf("População: %d\n", PopulaçãoH4);
    printf("Área: %.2f km²\n", AreaH4);
    printf("PIB: %2.f bilhões de reais\n", PIBH4);
    printf("Número de Pontos Turísticos: %d\n", PontoH4);

    printf("\n--- BOM JOGO! ---\n");

return 0;
} 
