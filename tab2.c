#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
int main()
{
    int t[10];
    int size = 10;
    int borne_inf = 35;
    int borne_sup = 40;

    // ABSENCE d'INITIALISATION

    for ( int i = 0; i < size; i++ ){
        t[i] = rand() % 50;
        printf("%d ", t[i]);
    }
    printf("\n");
    int M = mini(t,size);
    printf("minimum : %d\n",M);
    int N = imini(t,size);
    printf("position_minimum : %d\n", N);
    int O = maxi(t,size);
    printf("maximum : %d\n",O);
    int P = imaxi(t,size);
    printf("position_maximum : %d\n",P);
    int Q = somme(t,size);
    printf("somme : %d\n",Q);
    double R = moyenne(t,size);
    printf("moyenne : %f\n",R);
    printf("entre_35_et_40: %d\n",compte(t,size,borne_inf,borne_sup));
    int S = est_trie(t,size);
    printf("Trié : %d\n",S);

return 0;
}