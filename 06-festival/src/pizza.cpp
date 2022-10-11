#include "pizza.hpp"

// Pizza::Pizza(const std::string &sabor, int pedacos, bool borda_recheada, int qtd, float valor) {
// 	_sabor = sabor;
// 	_pedacos = pedacos;
// 	_borda = borda_recheada;
// 	_quantidade = qtd;
// 	_valor_unitario = valor;
// };

Pizza::Pizza(const std::string &sabor, int pedacos, bool borda_recheada, int qtd) {
	_sabor = sabor;
	_pedacos = pedacos;
	_borda = borda_recheada;
	_quantidade = qtd;
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

	// 5 reais por pedaço + 10 reais se borda recheada
	//+ 8 reais se sabor tiver a palavra "especial"

	float preco_final;

	preco_final = 5 * Pizza::getPedacos();

	// std::cout << "Preco pizza1 :" << preco_final << std::endl;

	if (_borda == true) {
		preco_final = preco_final + 10;
	};

	// std::cout << "Preco pizza2 :" << preco_final << std::endl;

	// std::string sab = Pizza::getSabor();

	// size_t pegaEspecial = sab.find("especial");

	// if (pegaEspecial != std::string::npos) {
	// };

	if (Pizza::getSabor().find("especial") != std::string::npos) {
		preco_final = preco_final + 8;
	};

	// std::cout << "Preco pizza3 :" << preco_final << std::endl;

	preco_final = preco_final * Pizza::getQtd();

	// std::cout << "Preco pizza4 :" << preco_final << std::endl;

	return preco_final;
};

std::string Pizza::descricao() const {
	std::string desc = "";

	// desc = Produto::getQtd() + "X com " + Pizza::getPedacos() + " pedaços de " + Pizza::getSabor();
	// desc = std::to_string(Produto::getQtd()) + "X com " + std::to_string(Pizza::getPedacos());

	desc = std::to_string(Produto::getQtd()) + "X pizza " + Pizza::getSabor() + ", " + std::to_string(Pizza::getPedacos()) + " pedaços";

	if (_borda == true) {
		desc = desc + " e borda recheada";
	} else {
		desc = desc + " sem borda recheada";
	}

	desc = desc + ".";

	return desc;
};