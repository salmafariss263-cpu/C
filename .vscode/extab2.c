#include <stdio.h> 
int main() { 
    int rev_tab[4]={1,2,3,4};
     for(int i=3;i>=0;i--){ 
        scanf("%d",&rev_tab[i]); 
    }
    for(int i=0;i<4;i++){ 
        printf("%d",rev_tab[i]); 
    } 
            
            
        
        return 0;
         }