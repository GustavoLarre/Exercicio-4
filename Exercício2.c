#include<stdio.h>

main(){

/* 2- Construa um algoritmo que dado quatro valores, a, b, c e d, imprima o maior e o menor valor.*/

//variáveis
float num1, num2, num3, num4;

//informação inicial
printf("Organizador de paremetros");
printf("\n Digite quatro numeros diferentes");

//entrada dos dados
printf("\n Informe o primeiro numero:");
scanf("%f", &num1);
printf("\n Insira o segundo numero:");
scanf("%f", &num2);
fflush(stdin);
printf("\n Digite o terceiro numero:");
scanf("%f", &num3);
printf("\n Por fim digite o quarto numero:");
scanf("%f", &num4);

//operação e saída
if(num1 > num2 && num1 > num3 && num1 > num4){
    printf("O maior numero da lista e: %.2f", num1);

    if(num2 < num3 && num2 < num4){
        printf("\n E o menor numero e: %.2f", num2);
    } else if(num3 < num4){
        printf("\n E o menor numero e: %.2f", num3);
    } else if(num4 < num3){
        printf("\n E o menor numero e: %.2f", num4);
    }
} else if(num2 > num3 && num2 > num4){
    printf("O maior numero da lista e: %.2f", num2);
    if(num1 < num3 && num1 < num4){
        printf("\n E o menor numero e: %.2f", num1);
    } else if(num3 < num4){
        printf("\n E o menor numero e: %.2f", num3);
    } else if(num4 < num3){
        printf("\n E o menor numero e: %.2f", num4);
    }
} else if(num3 > num4){
    printf(" O maior numero da lista e: %.2f", num3);
    if(num1 < num2 && num1 < num4){
        printf("\n E o menor numero e: %.2f", num1);
    } else if(num2 < num4){
        printf("\n E o menor numero e: %.2f", num2);
    } else if(num4 < num2){
        printf("\n E o menor numero e: %.2f", num4);
    }
} else if(num4 > num3){
    printf("O maior numero da lista e: %.2f", num4);
    if(num1 < num2 && num1 < num3){
        printf("\n E o menor numero e: %.2f", num1);
    } else if(num2 < num3){
        printf("\n E o menor numero e: %.2f", num2);
    } else if(num3 < num2){
        printf("\n E o menor numero e: %.2f", num3);
    }
}

}