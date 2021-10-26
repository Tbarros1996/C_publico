//Calculadora Básica em C
//Programação Científica
//Thiago Barros
//Versão 1.0

#include<stdio.h>
#include<stdlib.h>


int soma(int x, int y){
    int resutado;
    printf("Você Executou Soma");

    resutado = x + y;
    printf("E a soma é: \n");
    printf("\n %d",resutado);

}

int sub(int x,int y){
    int resutado;
    printf("Você Executou Subtração");

    resutado = x-y;
    printf("E a Subtração é: \n");
    printf("\n %d",resutado);

}

int mult(int x,int y){
    int resutado;
    printf("Você Executou Multiplicação");

    resutado = x * y;
    printf("E a Multiplicação é: \n");
    printf("\n %d",resutado);

}

int divi(int x,int y){
    int resutado;
    printf("Você Executou Divisão");

    resutado = x / y;
    printf("E a Divisão é: \n");
    printf("\n %d",resutado);

}

int rest(int x,int y){
    int resutado;
    printf("Você Executou Resto");

    resutado = x % y;
    printf("E o Resto da divisão é: \n");
    printf("\n %d",resutado);

}

int main(){

    char nome,operacao;
    int x,y;
    printf("Entre com Seu Nome\n");
    nome = getchar();
    printf("\nEntre com a OPERAÇÃO que deseja relizar\n");
    operacao = getchar();
    printf("\n Entre com os Dois Valores \n");
    x = scanf("%d",&x);
    y = scanf("%d",&y);
    
    switch (operacao) {

        case 'x':
        mult(x,y);
        break;

        case '-':
        sub(x,y);
        break;

        case '+':
        soma(x,y);
        break;

        case '/':
        divi(x,y);
        break;

        case '%':
        rest(x,y);
        break;

        default:
        printf("Operação Não Possível");
    }


    return 0;

}