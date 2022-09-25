#include "estoque.hpp"
#include "fogao.hpp"
#include "geladeira.hpp"

Estoque::Estoque() { /*TODO*/
}

void Estoque::armazena_geladeira(int capacidade, int portas) {
	Geladeira g(_indice_geladeira, capacidade, portas);

	geladeiras.push_back(g);

	_indice_geladeira++;
}

void Estoque::armazena_fogao(int queimadores, int capacidade) {
	Fogao f(_indice_fogao, queimadores, capacidade);

	fogoes.push_back(f);

	_indice_fogao++;
}

void Estoque::vende_geladeira(int capacidade, int portas) { /*TODO*/
}

void Estoque::vende_fogao(int queimadores, int capacidade) { /*TODO*/
}

void Estoque::exibe_geladeiras() {
	std::cout << "Geladeiras\n";
	std::cout << "ID  CAPACIDADE  PORTAS\n";
	for (Geladeira g : geladeiras) {
		std::cout << g.get_indice_geladeira() << "  " << g.get_capacidade_litros() << "  " << g.get_numero_portas() << "\n";
	}

	std::cout << "\n\n";
}

void Estoque::exibe_fogoes() {
	std::cout << "Fogoes\n";
	std::cout << "ID  QUEIMADORES  CAPACIDADE\n";
	for (Fogao f : fogoes) {
		std::cout << f.get_indice_fogao() << "  " << f.get_numero_queimadores() << "  " << f.get_capacidade_forno() << "\n";
	}
	std::cout << "\n\n";
}

int Estoque::quantidade_geladeiras() {
	return _indice_geladeira++;
}

int Estoque::quantidade_fogoes() {
	return _indice_geladeira++;
}
