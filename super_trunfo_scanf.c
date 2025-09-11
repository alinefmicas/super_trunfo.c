#include<stdio.h>
/*Estruturação da Carta*/
int main(){
    char Estado[50];
    char Código[5];
    char Capital[50];
    float População;
    float Área;
    float PIB;
    int Pontos_Turisticos;
    printf("Novo commit\n\n");

// Leitura de Carta 01
    printf("CARTA 01\n");

    printf("Estado: \n"), 
    scanf("%s", &Estado);

    printf("Código: \n");
    scanf("%s", &Código);

    printf("Capital: \n");
    scanf("%s", &Capital);

    printf("População: \n");
    scanf("%f", &População);

    printf("Área: \n");
    scanf("%f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    // Impressão da Carta 01
    printf("CARTA 01\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Capital: %s\n", Capital);
    printf("População: %f habitantes\n", População);
    printf("Área: %f km²\n", Área);
    printf("PIB: %f bilhões\n", PIB);
    printf("Pontos Turisticos: %d\n\n", Pontos_Turisticos);

    // Leitura da Carta 02
    printf("CARTA 02\n");

    printf("Estado: \n"); 
    scanf("%s", &Estado);

    printf("Código: \n");
    scanf("%s", &Código);

    printf("Capital: \n");
    scanf("%s", &Capital);

    printf("População: \n");
    scanf("%f", &População);

    printf("Área: \n");
    scanf("%f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    // Impressão da Carta 02
    printf("CARTA 02\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Código);
    printf("Capital: %s\n", Capital);
    printf("População: %f habitantes\n", População);
    printf("Área: %f km²\n", Área);
    printf("PIB: %f bilhões\n", PIB);
    printf("Pontos Turisticos: %d\n\n", Pontos_Turisticos);
    
    printf("novo commit\n");

    return 0;
}