#include<stdio.h>
#include<math.h>

main(){

/* 1- Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. */

//variáveis
double num, ref = 0, raiz, quadrado;

//informação inicial
printf("Calculadora");

//entrada do dado
printf("\n Digite um numero:");
scanf("%lf", &num);

//operação e saída
if(num >= ref){
raiz = (sqrt(num));
printf("A raiz quadrada de %.2lf e: %.2lf", num, raiz);
} else{
    quadrado = (pow(num, 2));
    printf("O quadrado de %.2lf e: %.2lf", num, quadrado);
}

}
