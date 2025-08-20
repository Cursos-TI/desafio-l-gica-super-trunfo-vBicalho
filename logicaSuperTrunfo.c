#include <stdio.h>
#include<stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    int menu;
    // Dados da Carta 1
    char estado1 = 'A', codigo1[4] = "A01", nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    int pontosTuristicos1 = 50;
    float area1 = 1521.11, pib1 = 699.28;
    float densidade1;
    float ppc1; //pib per capita
 

    // Dados da Carta 2
    char estado2 = 'A',codigo2[4] = "B02",nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    int pontosturisticos2 = 30;
    float area2 = 1200.25,pib2 = 300.50;
    float densidade2;
    float ppc2; //pib per capita



    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    densidade1 = populacao1/area1;
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    ppc1 = (pib1*100000000)/populacao1;
    printf("PIB per capita: %.2f reais \n", ppc1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    densidade2 = populacao2/area2;
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    ppc2 = (pib2*100000000)/populacao2;
    printf("PIB per capita: %.2f reais \n", ppc2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);


//Menu interativo utilizando switch case com if/else para fazer as comp
    printf("\nEscolha o atributo que será usado para comparar: \n");
    printf("\n1.População \n");
    printf("2.Area\n");
    printf("3.PIB\n");
    printf("4.Numero de pontos turísticos\n");
    printf("5.Densidade populacional\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("\nPopulação:\n");
        printf("%s : %d\n%s : %d\n",nomeCidade1,populacao1,nomeCidade2,populacao2);
        if ((populacao1)==(populacao2)) 
    {
       printf("\n### EMPATE ###\n");
    }
    else if ((populacao1)>(populacao2))
    {
        printf("\n### CARTA 1 VENCEU ###\n");
    }
    else
    {
        printf("\n### CARTA 2 VENCEU ###\n");
    }
        break;
    case 2:
        printf("\nÁrea:\n");
        printf("%s : %.2f\n%s : %.2f\n",nomeCidade1,area1,nomeCidade2,area2);
        if ((area1)==(area2)) 
    {
       printf("\n### EMPATE ###\n");
    }
    else if ((area1)>(area2))
    {
        printf("\n### CARTA 1 VENCEU ###\n");
    }
    else
    {
        printf("\n### CARTA 2 VENCEU ###\n");
    }
        break;
    case 3:
        printf("\nPIB:\n");
        printf("%s : %.2f\n%s : %.2f\n",nomeCidade1,pib1,nomeCidade2,pib2);   
    if ((pib1)==(pib2)) 
    {
       printf("\n### EMPATE ###\n");
    }
    else if ((pib1)>(pib2))
    {
        printf("\n### CARTA 1 VENCEU ###\n");
    }
    else
    {
        printf("\n### CARTA 2 VENCEU ###\n");
    }
    break;
    case 4:
        printf("\nNúmero de pontos turísticos:\n");
        printf("%s : %d\n%s : %d\n",nomeCidade1,pontosTuristicos1,nomeCidade2,pontosturisticos2);
        if ((pontosTuristicos1)==(pontosturisticos2)) 
    {
       printf("\n### EMPATE ###\n");
    }
    else if ((pontosTuristicos1)>(pontosturisticos2))
    {
        printf("\n### CARTA 1 VENCEU ###\n");
    }
    else
    {
        printf("\n### CARTA 2 VENCEU ###\n");
    }
        break;
    case 5:
        printf("\nDensidade Populacional:\n");
        printf("%s : %.2f\n%s : %.2f\n",nomeCidade1,densidade1,nomeCidade2,densidade2);
        if ((densidade1)==(densidade2)) 
    {
       printf("\n### EMPATE ###\n");
    }
    else if ((densidade1)<(densidade2))
    {
        printf("\n### CARTA 1 VENCEU ###\n");
    }
    else
    {
        printf("\n### CARTA 2 VENCEU ###\n");
    }
        break;
    
    default:
    printf("\nComando inválido.");
    break;
    }

    
    return 0;

}