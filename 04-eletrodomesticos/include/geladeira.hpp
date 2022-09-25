#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>

class Geladeira {
  private:
	// Adicione suas variaveis globais aqui
	int _indice_geladeira = 0;
	int _capacidade_em_litros;
	int _numero_de_portas;

  public:
	// Adicione a assinatura dos seus metodos / construtores aqui
	Geladeira(int indice, int capacidade, int portas);

	int get_indice_geladeira();

	int get_capacidade_litros();

	int get_numero_portas();
};

#endif