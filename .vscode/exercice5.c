#include<stdio.h>
#include<stdlib.h>
int main(){
float A,B,S,D,P,Q;
printf("-------------SIMPLE CALCULATOR-------------\n");
printf("*Enter two numbers : \n");
scanf("%f%f",&A,&B);
S=A+B;
D=A-B;
P=A*B;
printf("*Sum=%.2f\n",S);
printf("*Difference=%.2f\n",D);
printf("*Product=%.2f\n",P);
printf("*Quotient=%.2f\n",Q);
printf("----------------------------------------");


    return 0;
}