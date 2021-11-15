/**
 * @Author: Llaurator
 * @Date:   15-11-2021 18:05:21
 * @Last Modified by:   Llaurator
 * @Last Modified time: 15-11-2021 21:09:54
 */
#include <stdio.h>
#include "calc.h"

int main()
{
    int a = 10;
    int b = 5;

    printf("La suma de %d i %d és %d\n", a, b, suma(a, b));
    printf("La resta entre %d i %d és %d\n", a, b, resta(a, b));
    printf("La multiplicació de %d i %d és %d\n", a, b, multiplica(a, b));
    printf("La divisió entre %d i %d és %d\n", a, b, divideix(a, b));
    printf("El major entre  %d i %d és %d\n", a, b, major(a, b));
}