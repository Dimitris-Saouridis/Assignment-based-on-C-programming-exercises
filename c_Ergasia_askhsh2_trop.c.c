/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Dimitris Saouridis 1/12/2024 Exercise 2
#include <stdio.h>

int main()
{
    int number, rounded; //dhlwnoume  metablhtes tupou int
    printf("Dwste enan akeraio arithmo o opoios na einai 3psifios : ");
    scanf("%d", &number); //eisagoume enan akeraio arithmo
    rounded = (number / 100) * 100; //upologizoume thn stroggulopoihsh ta 2 teleutaia tou psifia
    printf("O arithmos %d stroggulopoihthke se %d\n", number, rounded); //emfanizoume ton arithmo me thn stroggulopoihsh

}
