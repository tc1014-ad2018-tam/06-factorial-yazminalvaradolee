/*
 * En este programa al poner el numero que te pide
 * el usuario te dara dependiendo el numero
 * su factor como tabla de multiplicar
 *
 * Autora: Yasmin Alvarado Lee
 * Correo: yazminalvlee@gmail.com
 *Fecha: 7 de septiembre 2018
 */
#include <stdio.h>

int main() {
    double factorial=1;
    double number;
    double i=1;

    //Aqui le pregunto al usuario algun numero
    printf ("Dame un numero: ");
    scanf("%lf", &number);

    //Aqui si el usuario da un numero negativo o diferente a 0 le dira que no
    //se puede hacer dicha operación
    if(number<0) {
        printf("No aceptamos numeros negativos :(");
    }
    //La operacion para sacar el factor de los numeros
    else {
        while (number > i) {
            //La operación que es factor * numero
            factorial *= number;
            number--;
        }
        printf("El factor de tu numero es: %lf.",factorial);

    }


    return 0;

}