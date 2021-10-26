//CONDICIONAL II

//switch



#include<stdio.h>
#include<stdlib.h>

int main(){

    int x;
    printf("Entre com o valor numérico");
    scanf("%d",&x);

    switch (x)
    {
        case 2:
        printf("\n Valor2");
        break;

        case 3:
        printf("Valor 3");
        break;

        default:
        printf("Não é número");


    }



    return 0;
}