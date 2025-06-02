#include <stdio.h>

int main (){
    
    
    char estado1 [20] = "Parana", estado2 [20] = "Parana";
    char letra1 = 'A', letra2 = 'B';
    int carta1 = 01, carta2 =02;
    char nome_cidade1 [20] = "Curitiba", nome_cidade2 [20] = "Sao jose";
    int populacao1 = 1773733, populacao2 = 337248;
    float area1 = 434.892, area2 = 945.717;
    float PIB1 = 63.3, PIB2 = 20.6;
    int pontos_turisticos1 = 40, pontos_turisticos2 = 15;

    printf ("coloque a letra da primeira carta\n");
    scanf (" %c", &letra1);

    printf ("coloque a letra da segunda carta\n");
    scanf (" %c", &letra2);

    printf ("numero da primeira carta\n");
    scanf (" %d", &carta1);

    printf ("numero da segunda carta\n");
    scanf (" %d", &carta2);

    printf ("nome da primeira cidade\n");
    scanf (" %s", nome_cidade1);

    printf ("numero da segunda cidade\n");
    scanf (" %s", nome_cidade2);

    printf ("população da primeira cidade\n");
    scanf (" %d", &populacao1);

    printf ("popuilação da segunda cidade\n");
    scanf (" %d", &populacao2);

    printf ("area da primeira cidade\n");
    scanf (" %f", &area1);

    printf ("area da segunda cidade\n");
    scanf (" %f", &area2);

    printf ("PIB da primeira cidade\n");
    scanf (" %2f", &PIB1);

    printf ("PIB da segunda cidade\n");
    scanf (" %2f", &PIB2);

    printf ("quantidade de pontos turisticos da primeira cidade\n");
    scanf (" %d", &pontos_turisticos1);

    printf ("quantidade de pontos turisticos da segunda cidade\n");
    scanf (" %d", &pontos_turisticos2);

    printf ("Carta %d (%c) - Cidade: %s - População: %d - Area: %f - PIB: %f - Pontos turisticos: %d\n", carta1, letra1, nome_cidade1, populacao1, area1, PIB1, pontos_turisticos1);

    printf ("Carta %d (%c) - Cidade: %s - População: %d - Area: %f - PIB: %f - Pontos turisticos: %d\n", carta2, letra2, nome_cidade2, populacao2, area2, PIB2, pontos_turisticos2);

    if (populacao1 > populacao2){
        printf ("população da cidade 1 ganhou!!\n");
    }  else {
        printf ("população da cidade 2 ganhou!!\n");
    }
    if (area1 > area2){
        printf ("Area da cidade 1 ganhou!!\n");
    } else {
        printf ("Area da cidade 2 ganhou!!\n");
    }
    if (PIB1 > PIB2){
        printf ("PIB da cidade 1 e maior e ganhou!!\n");
    } else {
        printf ("PIB da cidade 2 e maior e ganhou!!\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2){
        printf ("A cidade 1 tem mais pontos turisticos e ganhou!!\n");
    } else {
        printf ("A cidade 2 tem mais pontos turisticos e ganhou!!\n");
    }
    
    
    


 
return 0;

    

}
