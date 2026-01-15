/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Dimitris Saouridis 1/12/2024 Exercise 6
#include <stdio.h>
int main()
{
	int max,ba,i; // dhlosh metablhtwn tupou int
	char name,maxname; //dhlwsh metablhtwn tupou char
	max=-1; //arxikopoioume to max
	for(i=1; i<=30; i++) { //h for tha treksei 30 fores gia na emfanish thn bathmologia tou kathe spoudasth to onoma tou kai tha upologizei thn megaluterh bathmologia
		printf("Dwse mou thn bathmologia tou spoudasth\n");//eisagoume thn bathmologia tou spoudasth
		scanf("%d",&ba);
		getchar();
		printf("\nDwse mou to onoma tou spoudasth\n");//eisagoume to onoma tou spoudasth
		scanf("%c",&name);
		if(max<ba) { //sinthikh an
			max=ba;//ekxwroume sto max thn timh ths bathmologias
			maxname=name; // ekxwroume sto maxame to onoma tou spoudasth me thn megaluterh bathmologia
		}
	}
	printf("O megistos bathmos einai %d kai to onoma tou spoudasth einai %c",max,maxname); /*emfanizoume thn megaluterh bathmologia
                                                                                            tou spoudasth kai to onoma tou*/
}


