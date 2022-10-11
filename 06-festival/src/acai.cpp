#include "acai.hpp"

// Acai::Acai(int tamanho, std::vector<std::string> &complementos, int qtd, float valor) {

// 	_complementos.reserve(10);

// 	_tamanho = tamanho;
// 	_complementos = complementos;
// 	_quantidade = qtd;
// 	_valor_unitario = valor;
// };

Acai::Acai(int tamanho, std::vector<std::string> &complementos, int qtd) {

	_complementos.reserve(10);

	_tamanho = tamanho;
	_complementos = complementos;
	_quantidade = qtd;
	// _valor_unitario = valor;
};

float Acai::calcPreco() {
	float precoFinal = 0;

	precoFinal = Acai::getTamanho() * 0.02;

	precoFinal = precoFinal + (_complementos.size() * 2);

	precoFinal = precoFinal * Produto::getQtd();

	return precoFinal;
};

int Acai::getTamanho() const {
	return _tamanho;
};

std::vector<std::string> Acai::getComplementos() const {
	return _complementos;
};

std::string Acai::descricao() const {
	// Exemplo: 2X açai 700ml com leite em pó, granola.

	std::string desc = "";

	// desc = Produto::getQtd() + "X açaí" + Acai::getTamanho() + "ml com ";

	desc = std::to_string(Produto::getQtd()) + "X açai ";
	desc = desc + std::to_string(Acai::getTamanho()) + "ml com ";

	int i = 0;

	for (std::string s : _complementos) {
		if (i == 0) {
			desc = desc + s;
			i++;
		} else {
			desc = desc + ", ";
			desc = desc + s;
		};
	};

	desc = desc + ".";

	return desc;
};