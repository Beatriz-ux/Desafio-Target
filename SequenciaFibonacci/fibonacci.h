#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>

// Declaração da função para calcular a sequência de Fibonacci
std::vector<int> calcularFibonacci(int n);

// Declaração da função para verificar se um número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num, const std::vector<int>& fibonacci);

#endif // FIBONACCI_H
