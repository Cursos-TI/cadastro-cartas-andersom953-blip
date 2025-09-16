#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Estado;
    char Codigo[10];
    char Nome [30];
    int População;
    float Area;
    float PIB;
    int Ponto;

    printf("\n---Digite os dados da primeira carta ---\n");

    printf("Digite o Estado (de A a H): ");
    scanf("%s", &Estado);

    printf("Digite o Codigo (ex: A01,B03): ");
    scanf ("%s", &Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &Nome);

    printf("Digite a População: ");
    scanf("%d", &População);

    printf("Digite a Area: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de Pontos Turísticos: ");
    scanf ("%d", &Ponto);

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome);
    printf("População: %d\n", População);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %2.f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d", Ponto);

    


return 0;
} 
