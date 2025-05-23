#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para as cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    int opcao, escolha1, escolha2, resultado1, resultado2;
    float carta1_attr1, carta1_attr2,carta2_attr1, carta2_attr2;

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

    printf("\nBem vindo ao jogo do Super Trunfo!\n");
    printf("1. iniciar jogo\n");
    printf("2. ver regras do jogo\n");
    printf("3. sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        
    printf("\n*** Jogo iniciado, boa sorte! ***\n");
    printf("** escolha o primeiro atributo que voce quer comparar **\n");
    printf("1. Populaçao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turíticos\n");
    printf("5. Densidade populacional\n"); //corrigido o nome, coloquei densidade demografica sem ver no desafio passado
    scanf("%d", &escolha1);

        switch (escolha1)
        {
        case 1:
            printf("Voce escolheu o atributo População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Voce escolheu o atributo Area!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Voce escolheu o atributo PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Voce escolheu o atributo pontos turisticos!\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Voce escolheu o atributo Densidade populacional!\n");
            resultado1 = densidadePop1 < densidadePop2 ? 1 : 0;
            break;
        default:
            printf("escolha invalida");
            break;
        }

        printf("\n*** menu interativo Super trunfo ***\n");
        printf("** escolha o segundo atributo que voce quer comparar **\n");
        printf("1. Populaçao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turíticos\n");
        printf("5. Densidade populacional\n"); //corrigido o nome, coloquei densidade demografica sem ver no desafio passado
        scanf("%d", &escolha2);

    if (escolha1 == escolha2){
        printf("Voce escolheu o mesmo atributo, escolha outro para comparar!");
    } else{
        switch (escolha2)
        {
        case 1:
            printf("Voce escolheu o atributo População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Voce escolheu o atributo Area!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Voce escolheu o atributo PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Voce escolheu o atributo pontos turisticos!\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Voce escolheu o atributo Densidade populacional!\n");
            resultado2 = densidadePop1 < densidadePop2 ? 1 : 0;
            break;
        default:
            printf("escolha invalida");
            break;
        }

          //atribuindo os valores para soma 

        switch (escolha1){
            case 1: carta1_attr1 = populacao1; carta2_attr1 = populacao2; break;
            case 2: carta1_attr1 = area1; carta2_attr1 = area2; break;
            case 3: carta1_attr1 = pib1; carta2_attr1 = pib2; break;
            case 4: carta1_attr1 = pontosTuristicos1; carta2_attr1 = pontosTuristicos2; break;
            case 5: carta1_attr1 = densidadePop1; carta2_attr1 = densidadePop2; break;
        }

        switch (escolha2){
            case 1: carta1_attr2 = populacao1; carta2_attr2 = populacao2; break;
            case 2: carta1_attr2 = area1; carta2_attr2 = area2; break;
            case 3: carta1_attr2 = pib1; carta2_attr2 = pib2; break;
            case 4: carta1_attr2 = pontosTuristicos1; carta2_attr2 = pontosTuristicos2; break;
            case 5: carta1_attr2 = densidadePop1; carta2_attr2 = densidadePop2; break;
        }

        // soma correta
        float soma1 = carta1_attr1 + carta1_attr2;
        float soma2 = carta2_attr1 + carta2_attr2;


           //exibindo a comparaçao de um atributo das duas cartas para ver quem venceu
        printf("\n--- Resultado da Comparação ---\n");
        printf("Cidade 1: %s (%s)\n", nomeCidade1, codigo1);
        printf("Cidade 2: %s (%s)\n", nomeCidade2, codigo2);
        printf("\nAtributo 1 (escolha %d): Carta 1 = %.2f | Carta 2 = %.2f\n", escolha1, carta1_attr1, carta1_attr2);
        printf("Atributo 2 (escolha %d): Carta 1 = %.2f | Carta 2 = %.2f\n", escolha2, carta2_attr1, carta2_attr2);
        printf("\nSoma dos atributos:\nCarta 1 = %.2f\nCarta 2 = %.2f\n", soma1, soma2);
        
        if (soma1 > soma2) {
            printf("Resultado Final: Carta 1 venceu a rodada!\n");
        } else if (soma2 > soma1) {
            printf("Resultado Final: Carta 2 venceu a rodada!\n");
        } else {
            printf("Resultado Final: Empate!\n");
        }
    }
        break;
    case 2: 
    printf("Regras do Jogo Super trunfo\n");
    printf("1 regra: usar dados validos\n");
    printf("2 regra: divirta-se programando\n");
        break;
    case 3: 
    printf("Saindo...");
        break;    
    default:
    printf("Opçao invalida");
        break;
    }
   
   
   
   //    if (resultado1 == 1  && resultado2 == 1 ){
   //     printf("\nvoce ganhou");
   //    }else if (resultado1 == 1 && resultado2 == 0 || resultado1 == 0 && resultado2 == 1 ){
   //     printf("\njogo empatou");
   //    }else{
   //     printf("\nvoce perdeu");
   //    }

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
    // char resultado[50];
    //Logica da comparação de atributos: 
    // if(populacao1 > populacao2){
    //     strcpy(resultado, "Carta 1 venceu!");
    // }else{
    //     strcpy(resultado, "Carta 2 venceu!");
    // }


    // switch (opçao)
    // {
    // case 1:
    //     if(populacao1 > populacao2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Populaçao!\n");
    //         printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
    //         printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
    //         printf("%s venceu\n", nomeCidade1);
    //     }else if(populacao1 < populacao2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Populaçao!\n");
    //         printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
    //         printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
    //         printf("%s venceu\n", nomeCidade2);
    //     }else{
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Populaçao!\n");
    //         printf("Populaçao de %s : %lu\n", nomeCidade1, populacao1);
    //         printf("Populaçao de %s : %lu\n", nomeCidade2, populacao2);
    //         printf("houve um empate!\n");
    //     }
    //     break;
    // case 2:
    //      if(area1 > area2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Area!\n");
    //         printf("Area de %s : %.2f\n", nomeCidade1, area1);
    //         printf("Area de %s : %.2f\n", nomeCidade2, area2);
    //         printf("%s venceu\n", nomeCidade1);
    //     }else if(area1 < area2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Area\n");
    //         printf("Area de %s : %.2f\n", nomeCidade1, area1);
    //         printf("Area de %s : %.2f\n", nomeCidade2, area2);
    //         printf("%s venceu\n", nomeCidade2);
    //     }else{
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Area!\n");
    //         printf("Area de %s : %.2f\n", nomeCidade1, area1);
    //         printf("Area de %s : %.2f\n", nomeCidade2, area2);
    //         printf("houve um empate!\n");
    //     }
    //     break;
    // case 3:
    //       if(pib1 > pib2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi PIB!\n");
    //         printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
    //         printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
    //         printf("%s venceu\n", nomeCidade1);
    //     }else if(pib1 < pib2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi PIB!\n");
    //         printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
    //         printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
    //         printf("%s venceu\n", nomeCidade2);
    //     }else{
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi PIB!\n");
    //         printf("PIB de %s : %.2f\n", nomeCidade1, pib1);
    //         printf("PIB de %s : %.2f\n", nomeCidade2, pib2);
    //         printf("houve um empate!\n");
    //     }
    //     break;
    // case 4:
    //       if(pontosTuristicos1 > pontosTuristicos2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
    //         printf("%s venceu\n", nomeCidade1);
    //     }else if(pontosTuristicos1 < pontosTuristicos2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
    //         printf("%s venceu\n", nomeCidade2);
    //     }else{
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Pontos turisticos!\n");
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade1, pontosTuristicos1);
    //         printf("Pontos turisticos de %s : %d\n", nomeCidade2, pontosTuristicos2);
    //         printf("houve um empate!\n");
    //     }
    //     break;
    // case 5:
    //     if(densidadePop1 < densidadePop2){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Densidade populacional!\n");
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
    //         printf("%s venceu\n", nomeCidade1);
    //     }else if(densidadePop2 < densidadePop1){
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Densidade populacional!\n");
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
    //         printf("%s venceu\n", nomeCidade2);
    //     }else{
    //         printf("Batalha entre %s e %s\n", nomeCidade1,nomeCidade2);
    //         printf("O atributo usado para essa batalha foi Densidade populacional!\n");
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade1, densidadePop1);
    //         printf("Densidade populacional de %s : %.2f\n", nomeCidade2, densidadePop2);
    //         printf("houve um empate!\n");
    //     }
    //     break;
    // default:
    //     printf("escolha invalida!");
    //     break;
    // }


    return 0;
}
