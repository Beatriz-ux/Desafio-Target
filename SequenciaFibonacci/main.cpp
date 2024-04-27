#include <iostream>
#include "fibonacci.h"

int main() {
    int num;
    std::cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    std::cin >> num;

    // Calcula a sequência de Fibonacci até o número informado
    std::vector<int> fibonacci = calcularFibonacci(num);

    // Verifica se o número informado pertence à sequência de Fibonacci
    if (pertenceFibonacci(num, fibonacci)) {
        std::cout << "O numero " << num << " pertence a sequencia de Fibonacci.\n";
    } else {
        std::cout << "O numero " << num << " nao pertence a sequencia de Fibonacci.\n";
    }

    return 0;
}
