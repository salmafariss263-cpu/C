#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum_tab[3]={1,3,6};
    int S=0;
    for (int i = 0; i < 3; i++)
    {
       S=S+sum_tab[i];
    }
    printf("%d",S);
    
}