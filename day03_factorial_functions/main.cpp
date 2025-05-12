#include <iostream>

int iterative_factorial(int n) {
    int factorial = 1;
    if (n == 0) return 1;
    for(int i = 1; i <=n; i++) {
        factorial *= i;
    }
    return factorial;
}

int recursive_factorial(int n) {
    std::cout << n << std::endl;
    if (n == 0 || n == 1) return 1;
    int factorial = n * recursive_factorial( n - 1 );
    return factorial;
}

int main() {
    std::cout << iterative_factorial(5) << std::endl;
    std::cout << recursive_factorial(5) << std::endl;
    return 0;
}
