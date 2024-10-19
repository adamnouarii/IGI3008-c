#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int order_and_display(int* t1, int size1, int* t2, int size2){
    printf("Affichage ordonné de t1 et t2:\n");
    int j = 0;
    int i = 0;
    while (i < size1 && j < size2){
        if (*(t1+i) < *(t2+j)){
            printf("%d ",*(t1+i));
            i++;
        }
        else{
            printf("%d ",*(t2+j));
            j++;
        }
    }
    while (i < size1) {
        printf("%d ", *(t1 + i));
        i++;
    }
    while (j < size2) {
        printf("%d ", *(t2 + j));
        j++;
        }
    printf("\n");
    return 0;
}
int main(){
    int t1[20];
    int t2[20];
    srand(time(0));
    int size1 = rand() % 10 +10;
    int size2 = rand() % 10 +10;
    t1[0] = rand() % 5;
    t2[0] = rand() % 5;
    for (int i = 1; i < size1; i++) {
        t1[i] = t1[i - 1] + (rand() % 10);
    }
    for (int i = 1; i < size2; i++) {
        t2[i] = t2[i - 1] + (rand() % 10);
    }
    printf("t1 (size1 = %d):\n", size1);
    for (int i = 0; i < size1; i++) {
        printf("%d ", t1[i]);
    }
    printf("\n");

    printf("t2 (size2 = %d):\n", size2);
    for (int i = 0; i < size2; i++) {
        printf("%d ", t2[i]);
    }
    printf("\n");
    order_and_display(t1, size1, t2, size2);

    return 0;
    }