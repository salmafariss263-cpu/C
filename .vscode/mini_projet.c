#include<stdio.h>
#include<stdlib.h>

void affichertab(float note_tab[], int n){
    for (int i = 0; i < n; i++) {
        printf("%.2f \n", note_tab[i]);
    }
    printf("\n");
}

void max(float note_tab[], int C){
    float X = note_tab[0];
    for (int i = 1; i < C; i++) {
        if (X < note_tab[i]) {
            X = note_tab[i];
        }
    }
    printf("la note maximale est : %.2f\n", X);
} 

void min(float note_tab[], int M){
    float m = note_tab[0];
    for (int i = 1; i < M; i++) {
        if (m > note_tab[i]) {
            m = note_tab[i];
        }
    }
    printf("la note minimale est : %.2f\n", m);
}

int ajouter(float note_tab[]){
    int A;
    printf("Combien des notes tu veux entrez : ");
    scanf("%d",&A);
    for (int i = 0; i < A; i++) {
        printf("la note %d : ", i+1);
        scanf("%f",&note_tab[i]);
    }
    return A;
}

void moyenne(float note_tab[], int B){
    float S = 0;
    for (int i = 0; i < B; i++) {
        S = S + note_tab[i];
    }
    printf("la moyenne est : %.2f\n", S / B);
}

int main (){
    int N, n = 0;   
    float note_tab[1000];       

    while (1) {
        printf("\n********************\n");
        printf("1 - afficher les notes\n");
        printf("2 - la moyenne \n");
        printf("3 - la note maximale \n");
        printf("4 - Ajouter les notes\n");
        printf("5 - la note minimale \n");
        printf("6 - exit\n");
        printf("********************\n");
        printf("Entrer un nombre : ");
        scanf("%d",&N);

        if (N == 1) {
            if (n > 0) affichertab(note_tab, n);
            else printf("Aucune note ajoutee!\n");
        }
        else if (N == 2) {
            if (n > 0) moyenne(note_tab, n);
            else printf("Ajoute les notes d'abord!\n");
        }
        else if (N == 3) {
            if (n > 0) max(note_tab, n);
            else printf("Ajoute les notes d'abord!\n");
        }
        else if (N == 4) {
            n = ajouter(note_tab);  
        }
        else if (N == 5) {
            if (n > 0) min(note_tab, n);
            else printf("Ajoute les notes d'abord!\n");
        }
        else if (N == 6) {
            printf("Bye!\n");
            break; 
        }
        else {
            printf("Choix invalide!\n");
        }
    }
    return 0;
}
