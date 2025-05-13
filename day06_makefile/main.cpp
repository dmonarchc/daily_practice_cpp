#include "book.h"

int main()
{
    Book book1;
    book1 = {"1984", "George Orwell", 1949, 300.0f};
    Book book2;
    book2 = {"Dune", "Frank Herbert", 1965, 500.0f};
    print_book(book1);
    print_book(book2);
    Book book3;
    insert_book(book3);
    print_book(book3);
    return 0;
}
