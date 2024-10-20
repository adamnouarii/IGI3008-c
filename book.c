#include <stdio.h>
#include <string.h>
typedef struct Book {
    char *title;
    char *author;
    long int isbn;
    double price;
} Book;
void printbook(struct Book *book){
    printf("Book Title : %s\n",book->title);
    printf("Book Author : %s\n",book->author);
    printf("Book ISBN : %li\n", book->isbn);
    printf("Book price : %.2f\n", book->price);
}
void changePrice(struct Book *book, double percent){
    book->price *= 1+percent/100;
}
int main(){
    Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
    Book book2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.00};
    printbook(&book1);
    printbook(&book2);
    printf("Baisse de prix !\n");
    changePrice(&book2,-5);
    printbook(&book2);
    printf("Taille du titre de book1: %lu\n", strlen(book1.title));
    printf("Taille de l'auteur de book1: %lu\n", strlen(book1.author));

    printf("Taille du titre de book2: %lu\n", strlen(book2.title));
    printf("Taille de l'auteur de book2: %lu\n", strlen(book2.author));


}