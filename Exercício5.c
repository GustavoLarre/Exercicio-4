#include<stdio.h>

main(){

/* 5- Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ele está fora dos escopos anteriores.*/

//variáveis
float num;

//informação inicial
printf("Verificacao de parametros");

//entrada do dado
printf("\n Digite um numero qualquer:");
scanf("%f", &num);

//operação e saída
if(num <= 1000){
    if(num == 5){
      printf("O numero %.2f e igual a (5)", num);
    } else if(num == 200){
     printf("O numero %.2f e igual a (200)", num);
    } else if(num == 400){
        printf("O numero %.2f e igual a (400)", num);
    } else if(num >= 500 && num <= 1000){
        printf("O numero %.2f esta no intervalo (500 ~ 1000)", num);
    } else if(num < 500){
        printf("O numero %.2f esta fpra dos escopos estabelecidos", num);
    }

} else if(num > 1000){
    printf("O numero %.2f esta fora dos escopos estabelecidos", num);
}


}