#include <iostream>

// Comentar / Excluir a linha abaixo:
// #include "old.hpp"

// Descomentar o bloco abaixo:
// /*
#include "estoque.hpp"
#include "fogao.hpp"
#include "geladeira.hpp"
// */

// Não modifique a função main
int main() {
	std::cout << "Abriu\n";
	char opcao;
	Estoque estoque = Estoque();
	std::cout << "Digite a opcao\n";
	while (std::cin >> opcao) {
		switch (opcao) {
			case 'g': {
				std::cout << "Foi-add-geladeira\n";
				int capacidade_em_litros, numero_de_portas;
				std::cin >> capacidade_em_litros >> numero_de_portas;
				estoque.armazena_geladeira(capacidade_em_litros, numero_de_portas);
			} break;
			case 'f': {
				std::cout << "Foi-add-fogao\n";
				int numero_de_queimadores, capacidade_forno;
				std::cin >> numero_de_queimadores >> capacidade_forno;
				estoque.armazena_fogao(numero_de_queimadores, capacidade_forno);
			} break;
			case 'v': {
				std::cout << "Foi-vender";
				char produto;
				std::cin >> produto;
				if (produto == 'g') {
					std::cout << "Foi-vender-geladeira\n";
					int capacidade_em_litros, numero_de_portas;
					std::cin >> capacidade_em_litros >> numero_de_portas;
					estoque.vende_geladeira(capacidade_em_litros, numero_de_portas);
				} else if (produto == 'f') {
					std::cout << "Foi-vender-fogao\n";
					int numero_de_queimadores, capacidade_forno;
					std::cin >> numero_de_queimadores >> capacidade_forno;
					estoque.vende_fogao(numero_de_queimadores, capacidade_forno);
				}
			} break;
			case 'i': {
				std::cout << "Foi-exibir\n";
				estoque.exibe_geladeiras();
				estoque.exibe_fogoes();
			} break;
			case 'q': {
				std::cout << "Foi-quantidade\n";
				std::cout << estoque.quantidade_geladeiras() << " ";
				std::cout << estoque.quantidade_fogoes() << std::endl;
			} break;
			default:
				exit(1);
				break;
		}
		std::cout << "Digite a opcao\n";
	}
	return 0;
}