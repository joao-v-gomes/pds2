#include "intruso.hpp"
#include <iostream>

SenhaVazada::SenhaVazada(std::string numeros, std::string digitos) {
	_numeros = numeros;
	_digitos = digitos;
};

void Intruso::set_senha_vazada(std::string vazou) {
	std::string aux_numeros;
	std::string aux_digitos;

	for (int i = 0; i < 10; i++) {
		aux_numeros = aux_numeros + vazou[i];
	};

	std::cout << aux_numeros << "\r\n";

	for (int i = 10; i < '\0'; i++) {
		aux_digitos = aux_digitos + vazou[i];
	};

	std::cout << aux_digitos << "\r\n";
};

std::string Intruso::crack_senha() {
	return 0;
};