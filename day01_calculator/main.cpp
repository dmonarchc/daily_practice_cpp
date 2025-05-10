#include <stdio.h>
#include <iostream>

int total = 0;

void menu() {
    std::cout << "#############Calculadora##############" << std::endl;
    std::cout << "1.Sumar +" << std::endl;
    std::cout << "2.Restar -" << std::endl;
    std::cout << "3.Multiplicar *" << std::endl;
    std::cout << "4.Dividir /" << std::endl;
    std::cout << "5.Reset" << std::endl;
    std::cout << "6.Salir" << std::endl;
}    

void ingresar_numero() {
    std::cout << "Ingrese un nunero" << std::endl;
}

void print_total() {
    std::cout << "Total :" << total << std::endl;
}    

void reset() {
    total = 0;
}

void sumar(int adicion) {
    total += adicion;    
}

void restar(int resta) {
    total -= resta;
}

void multiplicar(int multiplicador) {
    total *= multiplicador;
}    

void dividir(int divisor) {
    if(divisor != 0)
        total /= divisor;
    else
        std::cout << "Error: no se puede dividir por cero." << std::endl;
}

int main (void) {
    int option = 0;
    int numero = 0;
    print_total();
    while(option != 6) {
    menu();    
    std::cout << "Elija una operacion" << std::endl;    
    std::cin >> option;
        switch (option) {
            case 1:
                ingresar_numero();
                numero = 0;
                std::cin >> numero;
                sumar(numero);
                print_total();
                break;
            case 2:
                ingresar_numero();
                numero = 0;
                std::cin >> numero;
                restar(numero);
                print_total();
                break;
            case 3:
                ingresar_numero();
                numero = 0;
                std::cin >> numero;
                multiplicar(numero);
                print_total();
                break;
            case 4:
                ingresar_numero();
                numero = 0;
                std::cin >> numero;
                dividir(numero);
                print_total();
                break;
            case 5:
                reset();
                break;
            case 6:
                break;
            default:
                std::cout << "Opcion invalida. Intente de nuevo." << std::endl;
        }
    }
    return 0;
}
