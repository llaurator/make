/**
 * @Author: Llaurator
 * @Date:   15-11-2021 17:42:36
 * @Last Modified by:   Llaurator
 * @Last Modified time: 15-11-2021 21:06:36
 */
// #include <stdio.h>

int suma(int op1, int op2)
{
    return (op1 + op2);
}

int resta(int op1, int op2)
{
    return (op1 - op2);
}

int multiplica(int op1, int op2)
{
    return (op1 * op2);
}

int divideix(int op1, int op2)
{
    return (op1 / op2);
}

int major(int op1, int op2)
{
    if ( op1 > op2){
        return op1;
    }else{
        return op2;
    }
        
}

//El major entre 10 i 5 és 10.


// int main()
// {
//     int a = 10;
//     int b = 5;

//     printf("La suma de %d i %d és %d\n", a, b, suma(a, b));
//     printf("La resta entre %d i %d és %d\n", a, b, resta(a, b));
//     printf("La multiplicació de %d i %d és %d\n", a, b, multiplica(a, b));
//     printf("La divisió entre %d i %d és %d\n", a, b, divideix(a, b));
// }