/*

Exo 3 et 4

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double* remplit_alea (double t[], int n){
    for (int i = 0; i < n; i++) {
        t[i] = (double)rand() / RAND_MAX;
    }
    return t;
}

double* remplit_trie (double t[], int n){
    for (int i = 0; i < n; i++) {
        if (t[i] > t[i+1])
            int temp = t[i+1]
            t[i+1] = t[i];
            t[i] = temp;
    }
    return t;
}

int main() {
    srand(time(NULL));
    int taille = 5;
    double t[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    remplit_alea (t, 5);
    remplit_trie(t,5);

    for (int i = 0; i < taille; i++) {
        printf("t[%d] = %f\n", i, t[i]);
    }

    return 0;
}
