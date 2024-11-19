/*

Exos 1 et 2

*/
#include <stdio.h>

void afficherTableau(double t[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("t[%d] = %f\n", i, t[i]);
    }
}

double* raz(double t[], int n){
    for (int i = 0; i < n; i++) {
        t[i] = 0.0;
    }
    return t;
}


int main() {
    double t[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    afficherTableau(t, 5);
    int taille = 5;

    raz(t, 5);
    printf(" \n");
    
    for (int i = 0; i < taille; i++) {
        printf("t[%d] = %f\n", i, t[i]);
    }
    
    return 0;
}
