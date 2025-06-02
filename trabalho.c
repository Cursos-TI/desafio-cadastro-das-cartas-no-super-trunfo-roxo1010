#include <stdio.h>

int main (){
    
    
    char leter1 = 'A', leter2 = 'B';
    int carta1 = 01, carta2 =02;
    char nome_cidade1 [20] = "Curitiba", nome_cidade2 [20] = "Sao jose";
    int populacao1 = 100000000, populacao2 = 100000;
    float area1 = 3042.20, area2 = 6542.1;
    float PIB1 = 1.8, PIB2 = 1.9;
    int pontos_turisticos1 = 20, pontos_turisticos2 = 50;

    printf ("coloque a letra da primeira carta\n");
    scanf (" %c", &leter1);

    printf ("coloque a letra da segunda carta\n");
    scanf (" %c", &leter2);

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

    printf ("Carta %d (%c) - Cidade: %s - População: %d - Area: %f - PIB: %f - Pontos turisticos: %d\n", carta1, leter1, nome_cidade1, populacao1, area1, PIB1, pontos_turisticos1);

    printf ("Carta %d (%c) - Cidade: %s - População: %d - Area: %f - PIB: %f - Pontos turisticos: %d\n", carta2, leter2, nome_cidade2, populacao2, area2, PIB2, pontos_turisticos2);

 
return 0;



}
