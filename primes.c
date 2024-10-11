#include <stdio.h>
#include <math.h>
int isprime(int p){
    if (p <2) return 0;
    if(p==2) return 1;
    if (p%2 == 0) return 0; // p n'est pas premier
    for (int i = 3 ; i <= (int)sqrt(p) ; i+=2){
        if (p%i == 0)
            return 0; //p n'est pas premier
    }
    return 1; //p est premier
}
int main(){
    int n = 100000;
    int N = 0;
    for (int i = 2 ; i < n ; i++){
        if (isprime(i) == 1)
            N+=1;
            }
    printf("%d\n",N);
    return 0;}