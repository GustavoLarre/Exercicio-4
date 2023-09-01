#include<stdio.h>

main(){

/* 3- Dados três valores a, b e c, construa um alogoritmo, que imprima os valores de forma ascendente (do menor para o maior).*/

//variáveis
float num1, num2, num3;

//informação inicial
printf("Ranking");
printf("\n Digite tres numeros diferentes");

//entrada dos dados
printf("\n Informe o primeiro numero:");
scanf("%f", &num1);
printf("\n Informe o segundo numero:");
scanf("%f", &num2);
printf("\n Informe o ultimo numero:");
scanf("%f", &num3);

//operações e saída
if(num1 < num2 && num1 < num3){
    printf("O terceiro numero do Rankig e: %.2f", num1);
    if(num2 < num3){
        printf("\n O segundo numero do Ranking e: %.2f", num2);
        printf("\n O primeiro numero do Ranking e: %.2f", num3);
    } else if(num2 > num3){
        printf("\n O segundo numero do Ranking e: %.2f", num3);
        printf("\n O primeiro numero do Ranking e: %.2f", num2);
    }
} else if(num2 < num3){
    printf("O terceiro numero do Ranking e: %.2f", num2);
    if(num1 < num3){
        printf("\n O segundo numero do Ranking e: %.2f", num1);
        printf("\n O primeiro numero do Ranking e: %.2f", num3);
    } else if(num1 > num3){
        printf("\n O segundo numero do Ranking e: %.2f", num3);
        printf("\n O primeiro numero do Ranking e: %.2f", num1);
    }
} else if(num3 < num2){
    printf("O terceiro numero do Ranking e: %.2f", num3);
    if(num1 < num2){
        printf("\n O segundo numero do Ranking e: %.2f", num1);
        printf("\n O primeiro numero do Ranking e: %.2f", num2);
    } else if(num1 > num2){
        printf("\n O segundo numero do Ranking e: %.2f", num2);
        printf("\n O primeiro numero do Ranking e: %.2f", num1);
    }
}

}