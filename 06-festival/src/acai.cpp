#include "acai.hpp"

Acai::Acai(int tamanho, std::vector<std::string> &complementos, int qtd, float valor) {

	_complementos.reserve(10);

	_tamanho = tamanho;
	_complementos = complementos;
	_quantidade = qtd;
	_valor_unitario = valor;
}

float Acai::calcPreco() {
	return _quantidade * _valor_unitario;
}

std::string Acai::descricao() const {
	// Exemplo: 2X açai 700ml com leite em pó, granola.

	std::string desc = "";

	desc = Produto::getQtd() + "X açaí" + Acai::getTamanho() + "ml com ";

	for (std::string s : _complementos) {
		desc = desc + s + ", ";
	}

	// std::string complemento = "";

	// for (int i = 0; i < 10; i++) {
	// 	if (_complementos[i] != "") {
	// 		desc = desc + c + ", ";
	// 	}
	// }

	desc = desc + ".";

	return desc;
}