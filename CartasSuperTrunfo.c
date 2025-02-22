#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     //declaração de variáveis se valor
     char estado;
     char codigo[10];
     char cidade[50];
     int populacao;
     float area;
     float pib;
     int pontosTuristicos;
 
     //solicitação inserção de dados do usuário e leitura dos dados digitados para Carta A
     printf("Digite uma letra para o Estado: \n");
     scanf("%c", &estado);
 
     printf("Digite o código da carta: \n");
     scanf("%s", codigo); //nao precisou do & pois trata-se de string 
 
     printf("Digite o nome da Cidade: \n");
     scanf("%s", cidade); //nao precisou do & pois trata-se de string 
 
     printf("Digite a população da cidade: \n");
     scanf("%d", &populacao);
 
     printf("Digite a área da cidade: \n");
     scanf(" %f", &area); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     printf("Digite o PIB da cidade: \n");
     scanf(" %f", &pib); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     printf("Digite a quantidade de pontos turísticos da cidade: \n");
     scanf(" %d", &pontosTuristicos); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     //Saída do resultado na tela com as variáveis com seus devidos valores para Carta A.
     printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Àrea: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontosTuristicos);
 
     
     //solicitação inserção de dados do usuário e leitura dos dados digitados para Carta B
     printf("Digite uma letra para o Estado: \n");
     scanf(" %c", &estado); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     printf("Digite o código da carta: \n");
     scanf("%s", codigo); //nao precisou do & pois trata-se de string 
 
     printf("Digite o nome da Cidade: \n");
     scanf("%s", cidade); //nao precisou do & pois trata-se de string 
 
     printf("Digite a população da cidade: \n");
     scanf("%d", &populacao);
 
     printf("Digite a área da cidade: \n");
     scanf(" %f", &area); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     printf("Digite o PIB da cidade: \n");
     scanf(" %f", &pib); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     printf("Digite a quantidade de pontos turísticos da cidade: \n");
     scanf(" %d", &pontosTuristicos); // se não inserir um espaço antes do formato nessa situação, o comando não será lido corretamente.
 
     //Saída do resultado na tela com as variáveis com seus devidos valores para Carta B.
     printf("Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d\n Àrea: %.2fkm²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontosTuristicos);
 
     return 0; //finalização correta do programa.
}
