#include<stdio.h>

main(){

    int ddd;

    printf("De que cidade é este DDD?");
    
    printf("Informe o DDD: \n");
    scanf("%d", &ddd);

    switch (ddd)
    {
        case 61:
        printf("Brasília");
        break;

        case 71:
        printf("Salvador");
        break;

        case 11:
        printf("São Paulo");
        break;

        case 21:
        printf("Rio de Janeiro");
        break;

        case 32:
        printf("Juíz de Fora");
        break;

        case 19:
        printf("Campinas");
        break;

        case 27:
        printf("Vitória");
        break;

        case 31:
        printf("Belo Horizonte");
        break;

        default:
        printf("Uma cidade no Brasil sem identificação");
        break;
    }

}