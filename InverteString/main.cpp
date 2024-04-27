#include <iostream>
#include "inverte_string.h"

int main() {
    std::string texto;
    std::cout << "Digite uma string para inverter: ";
    std::getline(std::cin, texto);

    // Inverte a string informada pelo usuário
    std::string invertida = inverteString(texto);

    std::cout << "String invertida: " << invertida << std::endl;

    return 0;
}
