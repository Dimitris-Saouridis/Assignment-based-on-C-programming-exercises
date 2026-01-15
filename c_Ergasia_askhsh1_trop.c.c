/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Dimitris Saouridis 1/12/2024 Exercise 1
#include <stdio.h>

int main()
{
  float kerdos,sun1,sun2,sun3,mer1,mer2,mer3,apothematiko; //dhlwnoume ola float giati tha exei komma dld dekadiko
  kerdos=12345; //arxikopoioume to kerdos
  sun1=0.2;  //arxikopoioume to pososto tou kathe sunaiterou prosexwntas to athroisma na einai 0.90
  sun2=0.3;
  sun3=0.4;
  mer1=kerdos*sun1; // briskoume to meridio tou kathenas pollaplasiazontas to kerdos me to pososto tou kathe sunaiterou
  mer2=kerdos*sun2;
  mer3=kerdos*sun3;
  apothematiko=kerdos-(mer1+mer2+mer3); //upologizoume to apothematiko
  printf("To meridio tou prwtou sunaiterou einai %.2f\n",mer1); emfanish //meridio 1ou sunaiterou
  printf("To meridio tou deuterou sunaiterou einai %.2f\n",mer2); //meridio 2ou sunaiterou
  printf("To meridio tou tritou sunaiterou einai %.2f\n",mer3); //meridio 3ou sunaiterou
  printf("To apothematiko ths etairias einai %.2f",apothematiko); //emfanish tou apopthematikou
}
