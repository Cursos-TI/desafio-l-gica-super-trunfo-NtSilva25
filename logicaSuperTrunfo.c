#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int qnt_pontos_turisticos; 
    int qnt_pontos_turisticos1;
    unsigned long int populacao; 
    unsigned long int populacao1;

    int comparacao_populacao;
    int comparacao_area;
    int comparacao_pib;
    int comparacao_pontos_turisticos;
    int comparacao_densidade_populacional;
    int comparacao_pib_per_capta;
    int comparacao_super_poder;

    int comparacao_populacao1;
    int comparacao_area1;
    int comparacao_pib1;
    int comparacao_pontos_turisticos1;
    int comparacao_densidade_populacional1;
    int comparacao_pib_per_capta1;
    int comparacao_super_poder1;

    float pib; 
    float pib1;
    float area; 
    float area1;
    float pib_percapita;
    float pib_percapita1;
    float dense_populacional;
    float dense_populacional1;
    float inverso_dense_populacional;
    float inverso_dense_populacional1;
    float super_poder;
    float super_poder1;

    char cidade[40]; 
    char cidade1[40]; 
    char estado[3]; 
    char estado_1[3]; 
    char cod_carta[4]; 
    char cod_carta1[4]; 

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Digite os Dados Necessarios para a Criação da Primeira Carta\n");

    printf("Digite o Estado Escolhido: ");
    scanf("%s", estado);
   
    printf("Digite a Cidade Escolhida: ");
    scanf("%s", cidade);
    
    printf("Digite o Código da Carta (Letra incial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", cod_carta);

    printf("Digte a População da cidade escolhida: ");
    scanf("%lu", &populacao);

    printf("Digite a Quatidade de Pontos Turísticos a cidade escolhida Possui: ");
    scanf("%d", &qnt_pontos_turisticos);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib);

    printf("Digite a Área (Km²) da cidade escolhida: ");
    scanf("%f", &area);

    pib_percapita = (float) (pib * 1000000000.0f) / populacao; //calculo para obter o pib per capita
    dense_populacional = (float) populacao / area;

    inverso_dense_populacional = (float) area / populacao; //Calculo para obter o inverso da densidade populacional, junto do casting para garantir o formato da variavel
    super_poder = (float) pib + area + pib_percapita + inverso_dense_populacional + qnt_pontos_turisticos + populacao; // Calculo para obter o super poder da carta

    printf("\n");

    //Dados seunda carta

    printf("Agora digite os dados Para criação da segunda carta \n");

    printf("Digite o Estado Escolhido: ");
    scanf("%s", estado_1);
    
    printf("Digite a Cidade Escolhida: ");
    scanf("%s", cidade1);
    
    printf("Digite o Código da Carta (Letra incial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", cod_carta1);

    printf("Digte a População da cidade escolhida: ");
    scanf("%lu", &populacao1);

    printf("Digite a Quatidade de Pontos Turísticos a cidade escolhida Possui: ");
    scanf("%d", &qnt_pontos_turisticos1);

    printf("Digite o PIB da cidade escolhida: ");
    scanf("%f", &pib1);

    printf("Digite a Área (Km²) da cidade escolhida: ");
    scanf("%f", &area1);

    //Calculos para obter os valores do PIB per capta, super poder, densidade populacional e seu inverso
    pib_percapita1 = (float) (pib1 * 1000000000.0f) / populacao1; 
    dense_populacional1 = (float) populacao1 / area1;
    inverso_dense_populacional1 = (float) area1 / populacao1;
    super_poder1 = (float) pib1 + area1 + pib_percapita1 + inverso_dense_populacional1 + qnt_pontos_turisticos1 + populacao1;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    printf("carta 01: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", cod_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", qnt_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n", dense_populacional);
    printf("PIB per Capta: %.2f reais \n", pib_percapita);
    printf("Super Poder: %.2f \n", super_poder);

    //Segunda Carta

    printf("carta 02: \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", qnt_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", dense_populacional1);
    printf("PIB per Capta: %.2f reais \n", pib_percapita1);
    printf("Super Poder: %.2f \n", super_poder1);

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if(populacao > populacao1){
        printf("Cidade 1 tem a maior quantidade de habitantes, Carta 1 Venceu! \n");
    }else{
        printf("Cidade 2 tem a maior quantidade de habitantes, Carta 2 Venceu! \n");
    }

    if(area > area1){
        printf("Cidade 1 tem maior quantidade de área %.2f km², Carta 1 Venceu! \n", area);
    }else{
        printf("Cidade 2 tem maior quantidade de área %.2f km², Carta 2 Venceu!\n", area1);
    }

    if(pib > pib1){
        printf("Ciade 1 tem maior Produto Interno Bruto (PIB), Carta 1 Venceu!\n");
    }else{
        printf("Cidade 2 tem maior Produto Interno Bruto (PIB), Carta 2 Venceu!\n");
    }

    if(qnt_pontos_turisticos > qnt_pontos_turisticos1){
        printf("Cidade 1 tem maior quantidade de pontos turisticos, Carta 1 Venceu!\n");
    }else{
        printf("Cidade 2 tem maior quantidade de pontos turisticos, Carta 2 Venceu!\n");
    }

    if(dense_populacional < dense_populacional1){
        printf("Cidade 1 tem menpr densidade populacional, Carta 1 Venceu!\n");
    }else{
        printf("Cidade 2 tem maior densidade populacional, Carta 2 Venceu!\n");
    }

    if(pib_percapita > pib_percapita1){
        printf("Cidade 1 tem maior quantidade de PIB per Captal, Carta 1 Venceu!\n");
    }else{
        printf("Cidade 2 tem maior quantidade de PIB per Capital, Carta 2 Venceu!\n");
    }

    return 0;
}
