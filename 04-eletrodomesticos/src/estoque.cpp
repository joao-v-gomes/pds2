#include "estoque.hpp"
#include "fogao.hpp"
#include "geladeira.hpp"
#include <vector>

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

void Estoque::vende_geladeira(int capacidade, int portas) {
	int i = 0;
	if (geladeiras.size() == 0) {
		return;
	} else {
		for (Geladeira g : geladeiras) {
			if ((g.get_capacidade_litros() == capacidade) && (g.get_numero_portas() == portas)) {
				geladeiras.erase(geladeiras.begin() + i);
				return;
			}
			i++;
		}
	}
}

void Estoque::vende_fogao(int queimadores, int capacidade) {
	int i = 0;
	if (fogoes.size() == 0) {
		return;
	} else {
		for (Fogao f : fogoes) {
			if ((f.get_numero_queimadores() == queimadores) && (f.get_capacidade_forno() == capacidade)) {
				fogoes.erase(fogoes.begin() + i);
				return;
			}
			i++;
		}
	}
}

void Estoque::exibe_geladeiras() {
	// std::cout << "Geladeiras\n";
	// std::cout << "ID  CAPACIDADE  PORTAS\n";
	for (Geladeira g : geladeiras) {
		std::cout << "G"
				  << " " << g.get_capacidade_litros() << " " << g.get_numero_portas() << "\n";
	}

	// std::cout << "\n";
}

void Estoque::exibe_fogoes() {
	// 	std::cout << "Fogoes\n";
	// std::cout << "ID  QUEIMADORES  CAPACIDADE\n";
	for (Fogao f : fogoes) {
		std::cout << "F"
				  << " " << f.get_numero_queimadores() << " " << f.get_capacidade_forno() << "\n";
	}
	// std::cout << "\n";
}

int Estoque::quantidade_geladeiras() {
	return geladeiras.size();
}

int Estoque::quantidade_fogoes() {
	return fogoes.size();
}
