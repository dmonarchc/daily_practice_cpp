#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book {
    std::string title;
    std::string author;
    int year;
    float price;
};

void print_book(const Book &book);
void insert_book(Book &book);

#endif