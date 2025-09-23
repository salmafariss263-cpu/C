#include <stdio.h>

int main() {
    char nom[50];
    printf("-------------*******--------------\n");
    printf(" What is your name ?\n");

    scanf("%s", nom); 

    printf(" Hello! %s\n", nom); 
    printf("----------------------------------");

    return 0;
}
