#include <stdio.h>
#include <stdlib.h>


int main() {
    //declaração de variáveis de valor
    char pais[30], pais1[30];
    char estado, estado1;
    char codigo[10], codigo1[10];
    char cidade[50], cidade1[50];
    int populacao;
    unsigned long int populacao1;
    float area, area1;
    float pib, pib1;
    int pontosTuristicos, pontosTuristicos1;
    int carta1, carta2;


    // super poder => soma de populacao, area, PIB, PIB per capita e densidade populacional invertida para comparacao e numero de pontos turisticos

     //Criação do switch para escolher os atributos a serem comparados

     printf("### BEM VINDO AO SUPER TRUNFO! ###\n");
     printf("1. Adicionar Cartas\n");
     printf("2. Mostrar Cartas\n");
     printf("3. Regras\n");
     printf("4. Jogar\n");
     printf("5. Sair\n");
     scanf("%d", &carta1);
 
 
     switch (carta1)
     {
    case 1:
    printf("***Digite os dados da primeira carta***\n");
    //solicitação inserção de dados do usuário e leitura dos dados digitados para Carta A
    printf("Digite o País: ");
    scanf("%s", &pais);

    printf("Digite uma letra para o Estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo); //nao precisou do & pois trata-se de string 

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade); //nao precisou do & pois trata-se de string 

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente. 
    
    printf("----------------------------------\n");

    //SEGUNDA CARTA
    printf("***Digite os dados da segunda carta***\n");
    //solicitação inserção de dados do usuário e leitura dos dados digitados para Carta B
    printf("Digite o País: ");
    scanf("%s", &pais1);

    printf("Digite uma letra para o Estado: \n");
    scanf(" %c", &estado1); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1); //nao precisou do & pois trata-se de string 

    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1); //nao precisou do & pois trata-se de string 

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosTuristicos1); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
        break;
    case 2:
    
        break;
    }

    float densidadePopulacional = (float) populacao / area;
    float pibPerCapita =  (pib * 1e9) / (float) populacao;  //convertendo pib para reais -> 699,28 X 1.000.000.000 = 699.280.000.000 

    //Saída do resultado na tela com as variáveis com seus devidos valores para Carta A.
    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Àrea: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$ %.2f\n", estado, codigo, cidade, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapita);

    //Cálculo do super poder da carta 1
    float superPoder = populacao + area + pib + (float)pontosTuristicos + pibPerCapita + 1 / densidadePopulacional;

    
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 =  (pib1 * 1e9) / (float) populacao1; //convertendo pib para reais -> 699,28 X 1.000.000.000 = 699.280.000.000 

    //Saída do resultado na tela com as variáveis com seus devidos valores para Carta B.
    printf("Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Àrea: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: R$ %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //Cálculo do super poder da carta 2
    float superPoder1 = populacao + area + pib + (float)pontosTuristicos + pibPerCapita1 + 1 / densidadePopulacional1;



    printf("Selecione o que deseja comparar: \n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. Pib Per Capita\n");
     printf("7. Super Poder\n");
     scanf("%d", &carta1);


    switch (carta1)
    {
    case 1:
    //Comparação de atributos numéricos para exibição da carta vencedora
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n");
    printf("Carta1: %s: %d\n", cidade, populacao);
    printf("Carta2: %s: %d\n", cidade1, populacao1);
    if (populacao > populacao1){
        printf("Resultado: Carta 1 %s: %d venceu!\n", cidade, populacao); //resultado se verdadeiro
    } else if(populacao < populacao1) {
        printf("Resultado: Carta 2 %s: %d venceu!\n", cidade1, populacao1); //resultado se falso
    } else {
        printf("EMPATE ENTRE OS STATUS DE POPULAÇÃO");
    }
        break;
    case 2:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREA)\n");
    printf("Carta1: %s: %.2fkm²\n", cidade, area);
    printf("Carta2: %s: %.2fkm²\n", cidade1, area1);
    if (area > area1){
        printf("Resultado: Carta 1 %s: %.2fkm² venceu!\n", cidade, area); //resultado se verdadeiro
    } else if(area < area1) {
        printf("Resultado: Carta 2 %s: %.2fkm² venceu!\n", cidade1, area1); //resultado se falso  
    } else {
        printf("EMPATE ENTRE OS STATUS DE ÁREA");
    }
        break;
    case 3:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n");
    printf("Carta1: %s: %.2f bilhões de reais\n", cidade, pib);
    printf("Carta2: %s: %.2f bilhões de reais\n", cidade1, pib1);
    if (pib > pib1){
        printf("Resultado: Carta 1 %s: %.2f bilhões de reais venceu!\n", cidade, pib); //resultado se verdadeiro
    } else if(pib < pib1) {
        printf("Resultado: Carta 2 %s: %.2f bilhões de reais venceu!\n", cidade1, pib); //resultado se falso
    } else {
        printf("EMPATE ENTRE OS STATUS DE PIB");  
    }
        break;
    case 4:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS)\n");
    printf("Carta1: %s: %d\n", cidade, pontosTuristicos);
    printf("Carta2: %s: %d\n", cidade1, pontosTuristicos1);
    if (pontosTuristicos > pontosTuristicos1){
        printf("Resultado: Carta 1 %s: %d venceu!\n", cidade, pontosTuristicos); //resultado se verdadeiro
    } else if(pontosTuristicos < pontosTuristicos1) {
        printf("Resultado: Carta 2 %s: %d venceu!\n", cidade1, pontosTuristicos1); //resultado se falso
    } else{
        printf("EMPATE ENTRE OS STATUS DE PONTOS TURÍRISTICOS");  
    }
        break;
    case 5:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n");
    printf("Carta1: %s: %.2f hab/km²\n", cidade, densidadePopulacional);
    printf("Carta2: %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
    if (densidadePopulacional < densidadePopulacional1){
        printf("Resultado: Carta 1 %s: %.2f hab/km² venceu!\n", cidade, densidadePopulacional); //resultado se verdadeiro
    } else if(densidadePopulacional > densidadePopulacional1) {
        printf("Resultado: Carta 2 %s: %.2f hab/km² venceu!\n", cidade1, densidadePopulacional1); //resultado se falso
    } else{
        printf("EMPATE ENTRE OS STATUS DE DENSIDADE POPULACIONAL");    
    }
        break;
    case 6:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n");
    printf("Carta1: %s: R$ %.2f\n", cidade, pibPerCapita);
    printf("Carta2: %s: R$ %.2f\n", cidade1, pibPerCapita1);
    if (pibPerCapita > pibPerCapita1){
        printf("Resultado: Carta 1 %s: R$ %.2f venceu!\n", cidade, pibPerCapita); //resultado se verdadeiro
    } else if(pibPerCapita < pibPerCapita1) {
        printf("Resultado: Carta 2 %s: R$ %.2f venceu!\n", cidade1, pibPerCapita1); //resultado se falso
    } else {
        printf("EMPATE ENTRE OS STATUS DE PIB PER CAPITA");   
    }
        break;
    case 7:
    printf("COMPARAÇÃO DE CARTAS (ATRIBUTO: SUPER PODER)\n");
    printf("Carta1: %s: %.0f\n", cidade, superPoder);
    printf("Carta2: %s: %.0f\n", cidade1, superPoder1);
    if (superPoder > superPoder1){
        printf("Resultado: Carta 1 %s: %.0f venceu!\n", cidade, superPoder); //resultado se verdadeiro
    } else if(superPoder < superPoder1) {
        printf("Resultado: Carta 2 %s: %.0f venceu!\n", cidade1, superPoder1); //resultado se falso
    } else {
        printf("EMPATE ENTRE OS STATUS DE SUPER PODER");    
    }
    }


    return 0; //finalização correta do programa.

}


