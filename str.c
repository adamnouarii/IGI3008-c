// str.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char s[100];

    printf("Entrez une chaine de caractères : %s\n", s);
    fgets(s, 100, stdin);
    int N = atoi(s);
    printf("La chaine de caractères récupérée dans s : %s\n", s);
    printf("composée de %ld caractères lus au clavier\n", strlen(s));
    for ( int i = 0 ; s[i]!='\0';i++){
        printf(" Caractere %d : %c\n",i,s[i]);
    }
    printf("après conversion : %d\n",N);
    printf("et multiplication par 2 : %d\n",2*N);
    for (int i=0; i < argc ; i++)
    {
        printf("argument %d : %s\n", i, argv[i]);
    }
    return 0;
}