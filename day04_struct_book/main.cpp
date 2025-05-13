#include <iostream>
#include <string>

struct Book
{
    std::string title;
    std::string author;
    int year;
    float price;
};

void print_book(const Book &book)
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "Título : " << book.title << std::endl;
    std::cout << "Autor  : " << book.author << std::endl;
    std::cout << "Año    : " << book.year << std::endl;
    std::cout << "Precio : $" << book.price << std::endl;
    std::cout << "-------------------------" << std::endl
              << std::endl;
}

void insert_book(Book &book)
{
    std::cout << "Ingrese titulo: " << std::endl;
    std::cout << "Ingrese titulo: " << std::endl;
    std::getline(std::cin >> std::ws, book.title);
    std::cout << "Ingrese autor: " << std::endl;
    std::getline(std::cin >> std::ws, book.author);
    std::cout << "Ingrese anio: " << std::endl;
    std::cin >> book.year;
    std::cout << "Ingrese precio: " << std::endl;
    std::cin >> book.price;
}

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
