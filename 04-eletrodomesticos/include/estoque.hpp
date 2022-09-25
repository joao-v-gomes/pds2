#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include "fogao.hpp"
#include "geladeira.hpp"
#include <iostream>
#include <vector>

class Estoque {

  private:
	std::vector<Geladeira> geladeiras;
	std::vector<Fogao> fogoes;
	int _indice_fogao = 0;
	int _indice_geladeira = 0;

  public:
	Estoque();

	void armazena_geladeira(int capacidade, int portas);

	void vende_geladeira(int capacidade, int portas);

	void armazena_fogao(int queimadores, int capacidade);

	void vende_fogao(int queimadores, int capacidade);

	void exibe_geladeiras();

	void exibe_fogoes();

	int quantidade_geladeiras();

	int quantidade_fogoes();
};

#endif