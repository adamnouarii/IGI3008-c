#include <stdio.h>
#include <stdlib.h>
int mini (int t[], int size)
{
    int min = t[0];
    for (int i = 0; i < size; i++){
        if (t[i] < min) {
            min = t[i];
        }
    }
    return min;
}
int imini(int t[], int size){
    int min = t[0];
    int indice = 0;
    for (int i = 0; i < size ;i++){
        if (t[i] < min){
            min = t[i];
            indice = i;
        }
    }
    return indice;
}
int maxi (int t[], int size)
{
    int max = t[0];
    for (int i = 0; i < size; i++){
        if (t[i] > max) {
            max = t[i];
        }
    }
    return max;
}

int imaxi(int t[], int size){
    int max = t[0];
    int indice = 0;
    for (int i = 0; i < size ;i++){
        if (t[i] > max){
            max = t[i];
            indice = i;
        }
    }
    return indice;
}
int somme(int t[], int size){
    int somme = 0;
    for (int i=0; i < size; i++){
        somme+=t[i];
    }
    return somme;
}
double moyenne(int t[], int size){
    double moy = 0;
    int sum = somme(t,size);
    moy = (double)sum/size;
    return moy;
}
int compte(int t[], int size, int lowest, int highest){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (t[i] >= lowest && t[i]<= highest){
            count+=1;        
            }
    }
    return count;
    }
int est_trie(int t[], int size){
    int croissant = 1;
    int decroissant = 1;
    for (int i = 0; i < size - 1; i++){
        if (t[i] < t[i+1]) {
            decroissant = 0;
        }
        else if (t[i] > t[i+1]){
            croissant = 0;
        }
    }
    if (croissant == 1){
        return 1;}
    else if (decroissant == 1){
        return -1;
    }
    else {
        return 0;
    }
    }

