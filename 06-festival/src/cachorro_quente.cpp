#include "cachorro_quente.hpp"

// CachorroQuente::CachorroQuente(int num_salsichas, std::vector<std::string> &complementos, bool prensado, int qtd, float valor) {

// 	_complementos.reserve(10);

// 	_num_salsichas = num_salsichas;
// 	_complementos = complementos;
// 	_prensado = prensado;
// 	_quantidade = qtd;
// 	_valor_unitario = valor;
// };

CachorroQuente::CachorroQuente(int num_salsichas, std::vector<std::string> &complementos, bool prensado, int qtd) {

	_complementos.reserve(10);

	_num_salsichas = num_salsichas;
	_complementos = complementos;
	_prensado = prensado;
	_quantidade = qtd;
};

int CachorroQuente::getNumSalsichas() const {
	return _num_salsichas;
};

std::vector<std::string> CachorroQuente::getComplementos() const {
	return _complementos;
};

float CachorroQuente::calcPreco() {

	float preco_final = 0;

	preco_final = 5 + (1.5 * _num_salsichas) + (_complementos.size());

	if (_prensado == true) {
		preco_final = preco_final + 0.5;
	}

	preco_final = preco_final * CachorroQuente::getQtd();

	return preco_final;
};

std::string CachorroQuente::descricao() const {
	std::string desc = "";

	// desc = Produto::getQtd() + "X cachorro-quente com " + CachorroQuente::getNumSalsichas() + " salsichas ";

	desc = std::to_string(Produto::getQtd());

	desc = desc + "X cachorro-quente ";

	if (CachorroQuente::getPrensado()) {
		desc = desc + "prensado com ";
	} else {
		desc = desc + "com ";
	};

	desc = desc + std::to_string(CachorroQuente::getNumSalsichas());

	desc = desc + " salsicha(s)";

	for (std::string s : _complementos) {
		desc = desc + ", ";
		desc = desc + s;
	};

	desc = desc + ".";

	return desc;
};

bool CachorroQuente::getPrensado() const {
	return _prensado;
};