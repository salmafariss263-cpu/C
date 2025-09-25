#include<stdio.h>
#include<stdlib.h>
int main (){
    float A,B;
    printf("Enter two numbers:  ");
    scanf("%f%f",&A,&B);
    if (A>B)
    {
        printf("%.2f",A);
    }
    else{
        printf("%.2f",B);
    }
    return 0;
    
}