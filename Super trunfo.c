#include <stdio.h>
#include <stdlib.h>

 int main() {
    // CARTA 1
    char Estado1[20], Códigodacarta1[3], NomedaCidade1[30];
    float Áreaemkm²1,PIB1;
    int População1, NúmerodePontosTurísticos1;

    printf("===== CARTA 1 =====\n");
    printf("Digite o nome do seu estado: \n ");
    scanf("%19s", Estado1);
    getchar();

    printf("Digite sua área em km²: \n ");
    scanf("%f", &Áreaemkm²1);
    getchar();

    printf("Digite o nome da cidade: \n ");
    scanf("%s", NomedaCidade1);
    while(getchar() != '\n');

    printf("Digite seu PIB: \n ");
    scanf("%f", &PIB1);
    while(getchar() != '\n');

    printf("Digite sua população: \n ");
    scanf("%d", &População1);
    while(getchar() != '\n');

    printf("Digite seu código da carta: \n ");
    scanf("%s", Códigodacarta1);
    while(getchar() != '\n');

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &NúmerodePontosTurísticos1);
    while(getchar() != '\n');

    // CARTA 2
    char Estado2[20], Códigodacarta2[3], NomedaCidade2[30];
    float Áreaemkm²2,PIB2;
    int População2, NúmerodePontosTurísticos2;

    printf("\n===== CARTA 2 =====\n");
    printf("Digite o nome do seu estado: \n ");
    scanf("%19s", Estado2);
    getchar();

    printf("Digite sua área em km²: \n ");
    scanf("%f", &Áreaemkm²2);
    getchar();

    printf("Digite o nome da cidade: \n ");
    scanf("%s", NomedaCidade2);
    while(getchar() != '\n');

    printf("Digite seu PIB: \n ");
    scanf("%f", &PIB2);
    while(getchar() != '\n');

    printf("Digite sua população: \n ");
    scanf("%d", &População2);
    while(getchar() != '\n');

    printf("Digite seu código da carta: \n ");
    scanf("%s", Códigodacarta2);
    while(getchar() != '\n');

    printf("Digite o número de pontos turísticos: \n ");
    scanf("%d", &NúmerodePontosTurísticos2);
    while(getchar() != '\n');

    // EXIBIÇÃO CARTA 1
    printf("\n===== RESULTADO CARTA 1 =====\n");
    printf("Estado: %s\n", Estado1);
    printf("Área em km²: %.2f\n", Áreaemkm²1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", População1);
    printf("Código da Carta: %s\n", Códigodacarta1);
    printf("Número de Pontos Turísticos: %d\n", NúmerodePontosTurísticos1);
    printf("PIB: %.2f\n", PIB1);

    // EXIBIÇÃO CARTA 2
    printf("\n===== RESULTADO CARTA 2 =====\n");
    printf("Estado: %s\n", Estado2);
    printf("Área em km²: %.2f\n", Áreaemkm²2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", População2);
    printf("Código da Carta: %s\n", Códigodacarta2);
    printf("Número de Pontos Turísticos: %d\n", NúmerodePontosTurísticos2);
    printf("PIB: %.2f\n", PIB2);

    // COMPARAÇÃO
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Maior Área: ");
    if(Áreaemkm²1 > Áreaemkm²2) printf("Carta 1 (%.2f km²)\n", Áreaemkm²1);
    else if(Áreaemkm²2 > Áreaemkm²1) printf("Carta 2 (%.2f km²)\n", Áreaemkm²2);
    else printf("Empate (%.2f km²)\n", Áreaemkm²1);

    printf("Maior PIB: ");
    if(PIB1 > PIB2) printf("Carta 1 (%.2f)\n", PIB1);
    else if(PIB2 > PIB1) printf("Carta 2 (%.2f)\n", PIB2);
    else printf("Empate (%.2f)\n", PIB1);

    printf("Maior População: ");
    if(População1 > População2) printf("Carta 1 (%d)\n", População1);
    else if(População2 > População1) printf("Carta 2 (%d)\n", População2);
    else printf("Empate (%d)\n", População1);

    printf("Mais Pontos Turísticos: ");
    if(NúmerodePontosTurísticos1 > NúmerodePontosTurísticos2) printf("Carta 1 (%d)\n", NúmerodePontosTurísticos1);
    else if(NúmerodePontosTurísticos2 > NúmerodePontosTurísticos1) printf("Carta 2 (%d)\n", NúmerodePontosTurísticos2);
    else printf("Empate (%d)\n", NúmerodePontosTurísticos1);

 }