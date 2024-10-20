#include <stdio.h>

typedef struct Book
{
    char *title;
    char *author;
    long int isbn;
    double price;
} Book;

void printBook(Book *book)
{
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book ISBN : %li\n", book->isbn);
    printf("Book price : %.2f\n", book->price);
}

int main()
{
    Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
    Book book2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0};

    printBook(&book1);
    printBook(&book2);

    Books books;
    setBookFields(&books[0], "Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90);
    setBookFields(&books[1], "Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0);
    setBookFields(&books[2], "Le Nom de la rose", "Umberto Eco", 2253033138, 8.90);

    return 0;
}