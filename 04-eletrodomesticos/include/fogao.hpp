#ifndef FOGAO_HPP
#define FOGAO_HPP

#include <iostream>

class Fogao {
  private:
	// Adicione suas variaveis globais aqui
	int _indice_fogao = 0;
	int _numero_de_queimadores;
	int _capacidade_forno;

  public:
	// Adicione a assinatura dos seus metodos / construtores aqui
	Fogao(int indice, int queimadores, int capacidade_forno);

	int get_numero_queimadores();

	int get_capacidade_forno();

	int get_indice_fogao();
};

#endif