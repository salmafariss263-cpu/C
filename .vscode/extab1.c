#include<stdio.h>
#include<stdlib.h>
int main(){
     float note_tab [10]={12,20,14,17,20,15.7,03,04,1.5,14.25};
     float N;
     int found ;
     printf("Enter a number :");
     scanf("%f",&N);

     for (int i = 0; i <11; i++)
     {
       if (note_tab[i]==N){
        printf("the number is present in the array");
        found=1;
          break;
        } 
     }
     if (found!=1)
     {
        printf("not present");
     }
     
    
     
    return 0;

}