#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc!=3){
        printf("Error : Invalid number of arguments\n");
        printf("Usage : $ ./tab-heap size ubound\n");
        printf("build a random array of integers and return basic stats\n");
        printf("size  : size of the array\n");
        printf("ubound : values randomly choosen between 0 and ubound-1\n");
        exit(-1);
        
    }
    int size = atoi(argv[1]);
    int ubound = atoi(argv[2]);
    int *p;
    p = malloc(size * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed, exiting...\n");
        exit(-1);
    }
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        *(p + i) = rand() % ubound;
    }
    printf("minimum : %d\n",mini(p,size));
    printf("maximum : %d\n",maxi(p,size));
    printf("somme : %li\n",somme(p,size));
    printf("moyenne : %f\n",moyenne(p,size));
    free(p);
    return 0;
}