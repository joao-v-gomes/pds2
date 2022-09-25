#include "fogao.hpp"

// Adicione seus metodos / construtores aqui
Fogao::Fogao(int indice, int queimadores, int capacidade_forno) {
	_indice_fogao = indice;
	_numero_de_queimadores = queimadores;
	_capacidade_forno = capacidade_forno;
}

int Fogao::get_numero_queimadores() {
	return _numero_de_queimadores;
}

int Fogao::get_capacidade_forno() {
	return _capacidade_forno;
}

int Fogao::get_indice_fogao() {
	return _indice_fogao;
}
