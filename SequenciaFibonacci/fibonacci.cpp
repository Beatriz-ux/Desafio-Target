#include "fibonacci.h"

// Implementação da função para calcular a sequência de Fibonacci
std::vector<int> calcularFibonacci(int n) {
    std::vector<int> fibonacci;
    fibonacci.push_back(0); // Primeiro termo da sequência
    fibonacci.push_back(1); // Segundo termo da sequência

    // Calcula os próximos termos da sequência até o n-ésimo termo
    for (int i = 2; i <= n; ++i) {
        int next = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci.push_back(next);
    }

    return fibonacci;
}

// Implementação da função para verificar se um número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num, const std::vector<int>& fibonacci) {
    for (int i = 0; i < fibonacci.size(); ++i) {
        if (fibonacci[i] == num) {
            return true;
        }
    }
    return false;
}
