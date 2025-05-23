#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para as cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    int opcao;

    // Leitura dos dados da primeira carta

    //lendo o estado da carta
    printf("Informe o Estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    //lendo o codigo da carta
    printf("Informe o Código da Carta 1 (ex: A01): ");
    scanf("%4s", codigo1);

    getchar(); // Limpa o buffer antes do fgets

    //lendo o nome da cidade usando fgets para pegar o nome com separaçao
    printf("Informe o Nome da Cidade da Carta 1: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove o \n
    //lendo a populaçao
    printf("Informe a População da Carta 1: ");
    scanf("%lu", &populacao1);
    //lendo a area
    printf("Informe a Área da Carta 1 (em km²): ");
    scanf("%f", &area1);
    // lendo o pib
    printf("Informe o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    // lendo o numero de pontos turisticos
    printf("Informe o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa o buffer antes da próxima leitura com fgets

    // Leitura dos dados da segunda carta

    //lendo o estado 
    printf("\nInforme o Estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    //lendo o codigo
    printf("Informe o Código da Carta 2 (ex: B02): ");
    scanf("%4s", codigo2);

    getchar(); // Limpa o buffer

    //lendo o nome da cidade com fgets para pegar o nome completo 
    printf("Informe o Nome da Cidade da Carta 2: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    //lendo a populaçao
    printf("Informe a População da Carta 2: ");
    scanf("%lu", &populacao2);
    //lendo a area
    printf("Informe a Área da Carta 2 (em km²): ");
    scanf("%f", &area2);
    //lendo o pib
    printf("Informe o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    //lendo o numero de pontos turisticos
    printf("Informe o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos: densidade populacional e PIB per capita

    //densidade populacional = população / área
    float densidadePop1 = (float) populacao1 / area1;
    float densidadePop2 = (float) populacao2 / area2;

    //pib per capita = (pib em reais) / população
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    //calulando o "super poder" da primeira carta: 
    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + (1 / densidadePop1);
    //calculando o "super poder" da segunda carta:
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + (1 / densidadePop2);

    // Exibição dos dados da primeira carta
    // printf("\n\nCarta 1:\n");
    // printf("Estado: %c\n", estado1);
    // printf("Código: %s\n", codigo1);
    // printf("Nome da Cidade: %s\n", nomeCidade1);
    // printf("População: %lu\n", populacao1);
    // printf("Área: %.2f km²\n", area1);
    // printf("PIB: %.2f bilhões de reais\n", pib1);
    // printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // // exibindo densidade populacional e pib per capita
    // printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    // printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // // Exibição dos dados da segunda carta
    // printf("\nCarta 2:\n");
    // printf("Estado: %c\n", estado2);
    // printf("Código: %s\n", codigo2);
    // printf("Nome da Cidade: %s\n", nomeCidade2);
    // printf("População: %lu\n", populacao2);
    // printf("Área: %.2f km²\n", area2);
    // printf("PIB: %.2f bilhões de reais\n", pib2);
    // printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // // exibindo densidade populacional e pib per capita
    // printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    // printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // //exibindo as comparaçoes das duas cartas: 
    // printf("\nVerificando o vencedor do Super Trunf! \n");
    // printf("Populaçao: carta 1 venceu? - (%d)\n", populacao1 > populacao2);
    // printf("Area: carta 1 venceu? - (%d)\n", area1 > area2);
    // printf("PIB: carta 1 venceu? - (%d)\n", pib1 > pib2);
    // printf("Pontos turísticos: carta 1 venceu? - (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    // printf("Densidade Populacional: carta 1 venceu? - (%d)\n", densidadePop1 < densidadePop2);
    // printf("PIB per cápita: carta 1 venceu? - (%d)\n", pibPerCapita1 > pibPerCapita2);
    // printf("Super Poder: carta 1 venceu? - (%d)\n", superPoder1 > superPoder2);


    //Desafio novato de logica
    /*
    obs: sei que nao foi ensinado a questao de strcpy nas aulas, mas como eu ja tenho um leve conhecimento 
    em programaçao, pesquisei na linguagem C uma forma de armazenar o resultado da logica direto em uma 
    variavel e encontrei essa forma, espero que nao tenha nenhum problema para o desafio. tudo funcionou conforme
    programado
    att - estevao alves    
    */

    //variavel para armazenar o texto:
    char resultado[50];
    //Logica da comparação de atributos: 
    if(populacao1 > populacao2){
        strcpy(resultado, "Carta 1 venceu!");
    }else{
        strcpy(resultado, "Carta 2 venceu!");
    }

    // //exibindo a comparaçao de um atributo das duas cartas para ver quem venceu
    // printf("\nComparação de cartas (Atributo: População): \n");
    // printf("Carta 1- %s (%s): %lu \n", nomeCidade1, codigo1, populacao1);
    // printf("Carta 2- %s (%s): %lu \n", nomeCidade2, codigo2, populacao2);
    // printf("Resultado: %s \n", resultado);

     printf("\n*** menu interativo Super trunfo ***\n");
    printf("** escolha qual atributo voce quer comparar **\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turíticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if(populacao1 > populacao2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Populaçao!\n");
            printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
            printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
            printf("%s venceu\n", nomeCidade1);
        }else if(populacao1 < populacao2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Populaçao!\n");
            printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
            printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
            printf("%s venceu\n", nomeCidade2);
        }else{
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Populaçao!\n");
            printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
            printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
            printf("houve um empate!\n");
        }
        break;
    case 2:
         if(area1 > area2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Area!\n");
            printf("Area de %s : %.2f\n", nomeCidade1, area1);
            printf("Area de %s : %.2f\n", nomeCidade2, area2);
            printf("%s venceu\n", nomeCidade1);
        }else if(area1 < area2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Area\n");
            printf("Area de %s : %.2f\n", nomeCidade1, area1);
            printf("Area de %s : %.2f\n", nomeCidade2, area2);
            printf("%s venceu\n", nomeCidade2);
        }else{
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Area!\n");
            printf("Area de %s : %.2f\n", nomeCidade1, area1);
            printf("Area de %s : %.2f\n", nomeCidade2, area2);
            printf("houve um empate!\n");
        }
        break;
    case 3:
          if(pib1 > pib2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi PIB!\n");
            printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
            printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
            printf("%s venceu\n", nomeCidade1);
        }else if(pib1 < pib2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi PIB!\n");
            printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
            printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
            printf("%s venceu\n", nomeCidade2);
        }else{
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi PIB!\n");
            printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
            printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
            printf("houve um empate!\n");
        }
        break;
    case 4:
          if(pontosTuristicos1 > pontosTuristicos2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
            printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
            printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
            printf("%s venceu\n", nomeCidade1);
        }else if(pontosTuristicos1 < pontosTuristicos2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
            printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
            printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
            printf("%s venceu\n", nomeCidade2);
        }else{
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
            printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
            printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
            printf("houve um empate!\n");
        }
        break;
    case 5:
        if(densidadePop1 < densidadePop2){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Densidade populacional!\n");
            printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
            printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
            printf("%s venceu\n", nomeCidade1);
        }else if(densidadePop2 < densidadePop1){
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Densidade populacional!\n");
            printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
            printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
            printf("%s venceu\n", nomeCidade2);
        }else{
            printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
            printf("O atributo usado para essa batalha foi Densidade populacional!\n");
            printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
            printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
            printf("houve um empate!\n");
        }
        break;
    default:
        printf("escolha invalida!");
        break;
    }


    return 0;
}
