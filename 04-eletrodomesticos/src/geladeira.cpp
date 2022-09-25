#include "geladeira.hpp"

// Adicione seus metodos / construtores aqui

Geladeira::Geladeira(int indice, int capacidade, int portas) {
  _indice_geladeira = indice;
  _capacidade_em_litros = capacidade;
  _numero_de_portas = portas;
}

int Geladeira::get_indice_geladeira() { return _indice_geladeira; }

int Geladeira::get_capacidade_litros() { return _capacidade_em_litros; }

int Geladeira::get_numero_portas() { return _numero_de_portas; }
