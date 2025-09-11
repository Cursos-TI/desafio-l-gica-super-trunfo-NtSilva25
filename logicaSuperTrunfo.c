int main(){

    int pontosturisticos, pontosturisticos1;
    int escolhajogador;

    unsigned long int populacao, populacao1;

    float pib, pib1; 
    float pibcapital, pibcapital1; 
    float densepopulacional, densepopulacional1;
    float superpoder, superpoder1;
    float area, area1;
    float inversodesinidade, inversodesinidade1;

    char cidade[40], cidade1[40];
    char estado[3], estado1[3]; 
    char codcarta[4], codcarta1[4]; 
    char escolhajogador1[2];
    
    //CADASTRO DAS CARTAS

    // CARTA 01

    printf("Digite o Estado escolhido: ");
    scanf("%s", estado);

    printf("Digite a cidade escolhida: ");
    scanf("%s", cidade);

    printf("Digite o Código da Carta (Letra inicial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", codcarta);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Qunatidades de Pontos Túristicos: ");
    scanf("%d", &pontosturisticos);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("àrea (km²): ");
    scanf("%f", &area);

    // CARTA 02

    printf("Digite o Estado escolhido: ");
    scanf("%s", estado1);

    printf("Digite a cidade escolhida: ");
    scanf("%s", cidade1);

    printf("Digite o Código da Carta (Letra inicial da cidade seguida de um numero de 01 a 04): ");
    scanf("%s", codcarta1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Qunatidades de Pontos Túristicos: ");
    scanf("%d", &pontosturisticos1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("àrea (km²): ");
    scanf("%f", &area1);

    // CALCULOS

    pibcapital = (pib * 100000000.0f) / populacao;
    pibcapital1 = (pib1 * 100000000.0f) / populacao1;

    densepopulacional = populacao / area;
    densepopulacional1 = populacao1 / area1;

    inversodesinidade = area / populacao;
    inversodesinidade1 = area1 / populacao1;

    superpoder = pib + area + pibcapital + densepopulacional + pontosturisticos + populacao;
    superpoder1 = pib1 + area1 + pibcapital1 + densepopulacional1 + pontosturisticos1 + populacao1;

    // MENU PARA ESCOLHER OS ATRIBUTOS A SERE COMPARADOS

    printf("### ESCOLHA UM ATRIBUTOS A SEGUIR PARA SEREM COMPARADOS ###\n");

    printf("1 - População.\n");
    printf("2 - PIB per Captal. \n");
    printf("3 - Densidade Demográfica. \n");
    printf("4 - Número de Pontos Turisticos. \n");
    printf("Escolha um tipo de valor para a comparação: \n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador){

    case 1:

        printf("Você escolheu População como o primeiro atributo para a a comparação\n");
        printf("Escolha um segundo atributo: \n");

        printf("A - PIB per Captal. \n");
        printf("B - Densidade Demográfica. \n");
        printf("C - Número de Pontos Turisticos. \n");
        printf("Escolha um tipo de valor para a comparação: \n");
        scanf("%s", &escolhajogador1);

        switch (escolhajogador1[2])
        {
        case 'A':
        case 'a':

            printf("Você escolheu PIB como segundo atributo para comparação");
            printf("Atributos Escolhidos: \nPolulação \nPIB \n");

            if ((populacao > populacao1) && (pib > pib1))
            {
                printf("Carta 1 Verceu!");
            }else if ((populacao < populacao1) && (pib < pib1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }

            break;
            
            case 'B':
            case 'b':
                printf("Você escolheu Densidade Demográfica como segundo atributo para comparação");
                printf("Atributos Escolhidos: \nPolulação \nDensidade Demográfica \n");

                if ((populacao > populacao1) && (inversodesinidade < inversodesinidade1))
                {
                    printf("Carta 1 Verceu!");
                }else if ((populacao < populacao1) && (inversodesinidade > inversodesinidade1)){
                    printf("Carta 02 Venceu!");
                }else{
                    printf("Empate!");
                }
                

                break;

            case 'C':
            case 'c':    
                printf("Você escolheu Pontos Turisticos como segundo atributo para comparação");
                printf("Atributos Escolhidos: \nPolulação \nPontos Turisticos \n");  

                if ((populacao > populacao1) && (pontosturisticos > pontosturisticos1))
                {
                    printf("Carta 01 Venceu!\n");
                }else if ((populacao < populacao1) && (pontosturisticos < pontosturisticos1)){
                    printf("Carta 02 Venceu!");
                }else{
                    printf("Empate!");
                }   
                
                break; 
        }     
            break;        

    case 2: 

        printf("Você escolheu PIB Per Capital como o primeiro atributo para a a comparação\n");
        printf("Escolha um segundo atributo: \n");

        printf("A - População. \n");
        printf("B - Densidade Demográfica. \n");
        printf("C - Número de Pontos Turisticos. \n");
        printf("Escolha um tipo de valor para a comparação: \n");
        scanf("%s", &escolhajogador1);
 
        switch (escolhajogador1[2])
        {
        case 'A':
        case 'a':    
            printf("Você escolheu População como seu segundo atributo para comparçõa");

            if ((pibcapital > pibcapital1) && (populacao > populacao1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pibcapital < pibcapital1) && (populacao < populacao1)){
                printf("Carta 02 Venceu!");
             }else{
                printf("Empate!");
            }

            break;

        case 'B':
        case 'b':    
            printf("Você escolheu Densidade Demográfica com segundo atributo para comparação");

            if ((pibcapital > pibcapital1) && (inversodesinidade < inversodesinidade1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pibcapital < pibcapital1) && (inversodesinidade > inversodesinidade1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }
            break;
                
        case 'C':
        case 'c':

            printf("Você escolheu Pontos Turisticos como seu segundo atributo para comparçõa");

            if ((pibcapital > pibcapital1) && (pontosturisticos > pontosturisticos1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pibcapital < pibcapital1) && (pontosturisticos < pontosturisticos1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }

            break;
        break;    
        }    

    case 3:

        printf("Você escolheu Densidade Demográfica como o primeiro atributo para a a comparação\n");
        printf("Escolha um segundo atributo: \n");

        printf("A - População. \n");
        printf("B - PIB Per Capital. \n");
        printf("C - Número de Pontos Turisticos. \n");
        printf("Escolha um tipo de valor para a comparação: \n");
        scanf("%s", &escolhajogador1);

        switch (escolhajogador1[2])
        {
        case 'A':
        case 'a':    
            printf("Você escolheu População como seu segundo atributo para comparçõa");

            if ((inversodesinidade < inversodesinidade1) && (populacao > populacao1))
            {
                printf("Carta 1 Verceu!");
            }else if ((inversodesinidade > inversodesinidade1) && (populacao < populacao1)){
                printf("Carta 02 Venceu!");
             }else{
                printf("Empate!");
            }

            break;

        case 'B':
        case 'b':    
            printf("Você escolheu PIB Per Capital como segundo atributo para comparação");

            if ((inversodesinidade < inversodesinidade1) && (pibcapital > pibcapital1))
            {
                printf("Carta 1 Verceu!");
            }else if ((inversodesinidade > inversodesinidade1) && (pibcapital < pibcapital1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }

            break;
                
        case 'C':
        case 'c':

            printf("Você escolheu Pontos Turisticos como seu segundo atributo para comparçõa");

            if ((inversodesinidade < inversodesinidade1) && (pontosturisticos > pontosturisticos1))
            {
                printf("Carta 1 Verceu!");
            }else if ((inversodesinidade > inversodesinidade1) && (pontosturisticos < pontosturisticos1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }
        }   
        break;

    case 4:

        printf("Você escolheu Densidade Pontos Turisticos como o primeiro atributo para a a comparação\n");
        printf("Escolha um segundo atributo: \n");

        printf("A - População. \n");
        printf("B - PIB Per Capital. \n");
        printf("C - Densidade Demográfica. \n");
        printf("Escolha um tipo de valor para a comparação: \n");
        scanf("%s", &escolhajogador1);

        switch (escolhajogador1[2])
        {
        case 'A':
        case 'a':    
            printf("Você escolheu População como seu segundo atributo para comparçõa");

            if ((pontosturisticos > pontosturisticos1) && (populacao > populacao1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pontosturisticos < pontosturisticos1) && (populacao < populacao1)){
                printf("Carta 02 Venceu!");
             }else{
                printf("Empate!");
            }

            break;

        case 'B':
        case 'b':    
            printf("Você escolheu PIB Per Capital como segundo atributo para comparação");

            if ((pontosturisticos > pontosturisticos1) && (pibcapital > pibcapital1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pontosturisticos < pontosturisticos1) && (pibcapital < pibcapital1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }

            break;
                
        case 'C':
        case 'c':

            printf("Você escolheu Densidade Demográfica como seu segundo atributo para comparçõa");

            if ((pontosturisticos > pontosturisticos1) && (inversodesinidade < inversodesinidade1))
            {
                printf("Carta 1 Verceu!");
            }else if ((pontosturisticos < pontosturisticos1) && (inversodesinidade > inversodesinidade1))
            {
                printf("Carta 02 Venceu!");
            }else{
                printf("Empate!");
            }            
    
            break;
        break;

    default:
        printf("Opção Inválida X<");
        break;      
    }
    }
    return 0;
}