/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Dimitris Saouridis 1/12/2024 Exercise 5
#include <stdio.h>

int main()
{
    float mesosoros,pososto;  //dhlwnoume pragmatikes metablhtes
    int number,plithos,sum,pl5,plolwn;  //dhlwnoume akeraies metablhtes
    sum=0;   //arxikopoioume ton athroisth me thn timh 0
    plithos=0;  //arxikopoihsh plithous thetikwn
    pl5=0;      //arxikopoihsh plithous pou einai pollaplasia tou 5 me thn timh 0
    plolwn=0;  //arxikopoihsh tou plithous olwn twn arithmwn me 0
    printf("Dwse enan arithmo: ");
    scanf("%d",&number); //Eisagoume enan arithmo
    while(number!=0){ // snithikh me while deixnei oti o arithmos prepei na einai diaforos tou 0 gia na mpei.An einai 0 termatizetai
        if(number>0){ // sunthikh gia thetikous arithmous
            sum=sum+number; //upologizw to athroisma twn thetikwn
            plithos++;  //auksanw to plithos twn thetikwn
        }
        if(number%5==0){ //sunithikh gia arithmous pou einai pollaplasia tou 5
            pl5=pl5+1; //auksanw to plithos twn pollaplasiwn tou 5
        }
        plolwn++; //kathe epanaleiphsh auksanetai to plithos olwn twn arithmwn kata mia monada
        printf("Dwse enan arithmo: "); //eisagoume enan arithmo
        scanf("%d",&number);
    }
    mesosoros=(float)sum/plithos; //upologizoume ton mero oro kanoume casting gia na bgei pragmatikos arithmos
    pososto=((float)pl5/plolwn)*100; //upologizoume to pososto kanwnas casting gia na bgei pragmatikos arithmos
    printf("To athroisma twn thetikwn arithmwn einai: %d\n",sum); //emfanizoume to athroisma twn thetikwn
    printf("O mesos oros twn thetikwn arithmwn einai: %.2f\n",mesosoros);  //emfanizoume twn meso oro twn thetikwn
    printf("To plithos pou einai pollaplasia tou 5 einai: %d\n",pl5); //emfanizoume to plithos twn pollaplasiwn twn 5
    printf("To pososto pou einai pollaplasia twn 5 einai: %.2f %",pososto); //emfanizoume to pososto twn pollaplasio twn 5

}

