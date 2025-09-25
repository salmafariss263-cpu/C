#include<stdio.h>
#include<stdlib.h>
int main (){
    float M,A;
    int i;
    printf("ENter a number : \n");
    scanf("%f",&A);
    printf("<MULTIPLICATION TABLE>\n");
    for ( i = 0; i <=10 ; i++)
    {
        M=A*i;
      printf("%.2f*%d=%.2f\n",A,i,M);
        
    }
    return 0;
    
}