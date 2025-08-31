#include <stdio.h>
#include<stdio.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

    // Dados da Carta 1
    char estado1 = 'A', codigo1[4] = "A01", nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    int pontosTuristicos1 = 30;
    float area1 = 1521.11, pib1 = 699.28;
    float densidade1;
    float ppc1; //pib per capita
 

    // Dados da Carta 2
    char estado2 = 'A',codigo2[4] = "B02",nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    int pontosturisticos2 = 30;
    float area2 = 1200.25,pib2 = 700.50;
    float densidade2;
    float ppc2; //pib per capita

    //MENU
    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;



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


//Menu interativo
printf("### SUPER TRUNFO ###"); 
printf("\nEscolha 2 atributos para comparação \n");
printf("Escolhendo o primeiro atributo: \n");
printf("1.População\n");
printf("2.Area\n");
printf("3.PIB\n");
printf("4.Numero de pontos turísticos\n");
printf("5.Densidade demográfica\n");
scanf("%d",&opcao1);

switch(opcao1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            printf("Primeiro atributo escolhido: População\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor1_c1,valor1_c2);
            (valor1_c1 > valor2_c1) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor1_c1 < valor2_c1) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            printf("Primeiro atributo escolhido: Área\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor1_c1,valor1_c2);
            (valor1_c1 > valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor1_c1 < valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            printf("Primeiro atributo escolhido: PIB\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor1_c1,valor1_c2);
            (valor1_c1 > valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor1_c1 < valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 4:
            valor1_c1 = pontosTuristicos1;
            valor1_c2 = pontosturisticos2;
            printf("Primeiro atributo escolhido: Pontos turísticos\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor1_c1,valor1_c2);
            (valor1_c1 > valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor1_c1 < valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            printf("Primeiro atributo escolhido: Densidade demográfica\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor1_c1,valor1_c2);
            (valor1_c1 < valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor1_c1 > valor1_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        default:
            printf("Opção inválida!\n");
            exit(0);            
    }
    printf("\nEscolha o segundo atributo:\n");
    if(opcao1 != 1) printf("1 - População\n");
    if(opcao1 != 2) printf("2 - Área\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos turísticos\n");
    if(opcao1 != 5) printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao2);

    // Garantir que o usuário não escolha o mesmo atributo
    if(opcao2 == opcao1) {
        printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        exit(0);
    }

    switch(opcao2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            printf("Segundo atributo escolhido: População\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor2_c1,valor2_c2);
            (valor2_c1 > valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor2_c1 < valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            printf("Segundo atributo escolhido: Área\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor2_c1,valor2_c2);
            (valor2_c1 > valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor2_c1 < valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            printf("Segundo atributo escolhido: PIB\n");
            printf("Carta 1 : %.2f \nCarta2 : %.2f\n",valor2_c1,valor2_c2);
            (valor2_c1 > valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor2_c1 < valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 4:
            valor2_c1 = pontosTuristicos1;
            valor2_c2 = pontosturisticos2;
            printf("Segundo atributo escolhido: Pontos turísticos\n");
            printf("Carta 1 : %.2f \nCarta 2 : %.2f\n",valor2_c1,valor2_c2);
            (valor2_c1 > valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor2_c1 < valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            printf("Segundo atributo escolhido: Densidade demográfica\n");
            printf("Carta 1 : %.2f \nCarta 2 : %.2f\n",valor2_c1,valor2_c2);
            (valor2_c1 < valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade1) :
            (valor2_c1 > valor2_c2) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");
            break;
        default:
            printf("Opção inválida!\n");
            exit(0);
    }

    // Somar os atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Exibir resultados
    printf("\n=== Soma dos atributos ===\n");
    printf("%s -> %.2f + %.2f = %.2f\n", nomeCidade1, valor1_c1, valor2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", nomeCidade2, valor1_c2, valor2_c2, soma2);

    (soma1 > soma2) ? printf("\nVencedor: %s\n", nomeCidade1) :
    (soma2 > soma1) ? printf("\nVencedor: %s\n", nomeCidade2) :
                      printf("\nEmpate!\n");

    return 0;
}