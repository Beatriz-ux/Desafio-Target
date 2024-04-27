#include "inverte_string.h"

// Implementação da função para inverter os caracteres de uma string
std::string inverteString(const std::string& str) {
    std::string invertida;
    int tamanho = str.size();

    // Inverte a string caractere por caractere
    for (int i = tamanho - 1; i >= 0; --i) {
        invertida.push_back(str[i]);
    }

    return invertida;
}
