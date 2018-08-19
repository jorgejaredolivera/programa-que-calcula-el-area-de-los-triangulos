/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 18 de agosto de 2018, 06:35 PM
 */

#include <stdio.h>
#include <math.h>

/*
 * 
 */
int main() {
    printf("hola amigo vamos a calcular el area de un triangulo\n");
    printf("dime el valor de la base\n");
    int base = 0;
    scanf("%d",&base); 
    printf("dame el valor de la altura\n");
    int altura = 0;
    scanf("%d",&altura);
    float producto = base*altura;
    float area = producto/2;
    printf("el area del triangulo es de %f", area);
            
    

    return 0.0;
}

