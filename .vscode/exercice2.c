#include<stdio.h>
#include<stdlib.h>
int main(){
    float A,B;
    float C;
    printf("Entrer 1er nombre :");
    scanf("%f",&A);
    printf("Entrer 2eme nombre :");
     scanf("%f",&B);
C=A;
A=B;
B=C;
printf("1er=%.2f \n",A);
printf("2eme=%.2f",B);





return 0;



}