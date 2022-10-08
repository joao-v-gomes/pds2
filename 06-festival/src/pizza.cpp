#include "pizza.hpp"

Pizza::Pizza(const std::string &sabor, int pedacos, bool borda_recheada, int qtd, float valor) {
	_sabor = sabor;
	_pedacos = pedacos;
	_borda = borda_recheada;
	_quantidade = qtd;
	_valor_unitario = valor;
};

bool Pizza::getBorda() const {
	return _borda;
};

int Pizza::getPedacos() const {
	return _pedacos;
};

std::string Pizza::getSabor() const {
	return _sabor;
};

float Pizza::calcPreco() {
	float preco_final;

	preco_final = 5 * Pizza::getPedacos();

	if (_borda == true) {
		preco_final = preco_final + 10;
	}

	if (Pizza::getSabor().find("especial")) {
		preco_final = preco_final + 8;
	}
};

std::string Pizza::descricao() const {
	std::string desc = "";

	desc = Produto::getQtd() + "X com " + Pizza::getPedacos() + " pedaços de " + Pizza::getSabor();

	if (_borda == true) {
		desc = desc + " e borda recheada"
	}

	desc = desc + ".";
}