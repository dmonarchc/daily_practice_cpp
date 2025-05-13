#include <iostream>
#include <string>
#include "book.h"

void print_book(const Book &book)
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "Título : " << book.title << std::endl;
    std::cout << "Autor  : " << book.author << std::endl;
    std::cout << "Anio    : " << book.year << std::endl;
    std::cout << "Precio : $" << book.price << std::endl;
    std::cout << "-------------------------" << std::endl
              << std::endl;
}

void insert_book(Book &book)
{
    std::cout << "Ingrese titulo: " << std::endl;
    std::getline(std::cin >> std::ws, book.title);
    std::cout << "Ingrese autor: " << std::endl;
    std::getline(std::cin >> std::ws, book.author);
    std::cout << "Ingrese anio: " << std::endl;
    std::cin >> book.year;
    std::cout << "Ingrese precio: " << std::endl;
    std::cin >> book.price;
}