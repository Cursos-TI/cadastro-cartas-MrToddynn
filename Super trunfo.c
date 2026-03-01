#include <stdio.h>
#include <stdlib.h>

 int main() {
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 1
    char Estado1[20], Códigodacarta1[3], NomedaCidade1[30];
    float Áreaemkm²1, PIB1, PIBperCapita1, DensidadePopulacional1;
    int População1, NúmerodePontosTurísticos1;

    // DECLARAÇÃO DE VARIÁVEIS - CARTA 2
    char Estado2[20], Códigodacarta2[3], NomedaCidade2[30];
    float Áreaemkm²2, PIB2, PIBperCapita2, DensidadePopulacional2;
    int População2, NúmerodePontosTurísticos2;

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

    // CÁLCULO PIB PER CAPITA
    PIBperCapita1 = PIB1 / População1;
    PIBperCapita2 = PIB2 / População2;

    // CÁLCULO DENSIDADE POPULACIONAL
    DensidadePopulacional1 = População1 / Áreaemkm²1;
    DensidadePopulacional2 = População2 / Áreaemkm²2;

    // CÁLCULO SUPER PODER
    // o super poder é soma de todos os atributos numéricos.
    // Convertendo para float quando necessário para evitar perda de precisão.
    float SuperPoder1 = (float)População1 + Áreaemkm²1 + PIB1 + (float)NúmerodePontosTurísticos1 + PIBperCapita1 + (1.0f / DensidadePopulacional1);
    float SuperPoder2 = (float)População2 + Áreaemkm²2 + PIB2 + (float)NúmerodePontosTurísticos2 + PIBperCapita2 + (1.0f / DensidadePopulacional2);

    // EXIBIÇÃO CARTA 1
    printf("\n===== RESULTADO CARTA 1 =====\n");
    printf("Estado: %s\n", Estado1);
    printf("Área em km²: %.2f\n", Áreaemkm²1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", População1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("Código da Carta: %s\n", Códigodacarta1);
    printf("Número de Pontos Turísticos: %d\n", NúmerodePontosTurísticos1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // EXIBIÇÃO CARTA 2
    printf("\n===== RESULTADO CARTA 2 =====\n");
    printf("Estado: %s\n", Estado2);
    printf("Área em km²: %.2f\n", Áreaemkm²2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", População2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("Código da Carta: %s\n", Códigodacarta2);
    printf("Número de Pontos Turísticos: %d\n", NúmerodePontosTurísticos2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // COMPARAÇÃO
    printf("\nComparação de Cartas:\n\n");

    // População
    if(População1 > População2) printf("População: Carta 1 venceu (1)\n");
    else if(População2 > População1) printf("População: Carta 2 venceu (0)\n");
    else printf("População: Empate\n");

    // Área
    if(Áreaemkm²1 > Áreaemkm²2) printf("Área: Carta 1 venceu (1)\n");
    else if(Áreaemkm²2 > Áreaemkm²1) printf("Área: Carta 2 venceu (0)\n");
    else printf("Área: Empate\n");

    // PIB
    if(PIB1 > PIB2) printf("PIB: Carta 1 venceu (1)\n");
    else if(PIB2 > PIB1) printf("PIB: Carta 2 venceu (0)\n");
    else printf("PIB: Empate\n");

    // Pontos turísticos
    if(NúmerodePontosTurísticos1 > NúmerodePontosTurísticos2) printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else if(NúmerodePontosTurísticos2 > NúmerodePontosTurísticos1) printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    else printf("Pontos Turísticos: Empate\n");

    // Densidade populacional
    if(DensidadePopulacional1 > DensidadePopulacional2) printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else if(DensidadePopulacional2 > DensidadePopulacional1) printf("Densidade Populacional: Carta 2 venceu (0)\n");
    else printf("Densidade Populacional: Empate\n");

    // PIB per Capita
    if(PIBperCapita1 > PIBperCapita2) printf("PIB per Capita: Carta 1 venceu (1)\n");
    else if(PIBperCapita2 > PIBperCapita1) printf("PIB per Capita: Carta 2 venceu (0)\n");
    else printf("PIB per Capita: Empate\n");

    // Super Poder
    if(SuperPoder1 > SuperPoder2) printf("Super Poder: Carta 1 venceu (1)\n");
    else if(SuperPoder2 > SuperPoder1) printf("Super Poder: Carta 2 venceu (0)\n");
    else printf("Super Poder: Empate\n");

    return 0;

 }