#include <stdio.h>

void sumult(int a, int b, int *somme, int *produit) {
    *somme = a + b;
    *produit = a * b;
}

int main() {
    int a = 3, b = 4;
    int somme, produit;
    sumult(a, b, &somme, &produit);
    printf("%d + %d = %d\n", a, b, somme);
    printf("%d x %d = %d\n", a, b, produit);
    return 0;
}
