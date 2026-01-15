/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Dimitris Saouridis 1/12/2024 Exercise 4
#include <stdio.h>
#define pagio 2 
int main()
{
float katnerou,xrnerou,xrdhm,fpa,telikoposo; // dhlwnoume oles tis metablhtes ws tupo float
printf("Dwse mou thn mhniaia katanalwsh tou nerou\n"); //eisagwgoume thn katanalwsh tou nerou
scanf("%f",&katnerou);
if(katnerou>=0 && katnerou<=5){ // xrhsimopoioume thn sinthikh an me thn katanalwsh na einai apo to 0 mexri to 5
    xrnerou=0;     //upologizoume klhmakota thn xrewsh nerou
    xrdhm=katnerou*0.4;  //upologizoume mh klhmakota thn xrewsh ta dhmotika telh
}
else if (katnerou<=10){ //sinthikh katanalwsh nerou mikroterh h ish tou 10
    xrnerou=5*0+(katnerou-5)*0.5; //upologizoume klhmakota thn xrewsh nerou
    xrdhm=katnerou*0.6;          //upologizoume mh klhmakota thn xrewsh ta dhmotika telh
}
else if (katnerou<=20){  //sinthikh katanalwsh nerou mikroterh h ish tou 20
    xrnerou=5*0+5*0.5+(katnerou-10)*0.7; //upologizoume klhmakota thn xrewsh nerou
    xrdhm=katnerou*0.8;                 //upologizoume mh klhmakota thn xrewsh ta dhmotika telh
}
else{                       // diaforetika sunithink h katanalwsh nerou na einai megaluterh tou 20
    xrnerou=5*0+0.5*0.5+10*0.7+(katnerou-20)*1.0; //upologizoume klhmakota thn xrewsh nerou
    xrdhm=katnerou*1.1;                           //upologizoume mh klhmakota thn xrewsh ta dhmotika telh  
}
fpa=0.24*(xrnerou+xrdhm+katnerou); //upologizoume ton fpa
printf("O fpa einai %.2f\n",fpa);  //emfanizoume ton fpa
telikoposo=fpa+pagio+xrnerou+xrdhm; //upologizoume to telikoposo
printf("To Teliko poso einai %.2f\n",telikoposo); //emfanizoume to telikoposo
    
}
