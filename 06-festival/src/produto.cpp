#include "produto.hpp"

// Produto::Produto(int quantidade, float valor) {
// 	_quantidade = quantidade;
// 	_valor_unitario = valor;
// }

int Produto::getQtd() const {
	return _quantidade;
}

float Produto::getValor() const {
	return _valor_unitario;
}