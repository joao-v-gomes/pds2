
#include "venda.hpp"

Venda::~Venda(){};

void Venda::adicionaPedido(Pedido *p) {
	_pedidos.push_back(p);
};
void Venda::imprimeRelatorio() const {

	float totalVendas = 0;

	for (Pedido *p : _pedidos) {
		std::cout << p->resumo();
		std::cout << "\n";
	};

	for (Pedido *p : _pedidos) {
		totalVendas = totalVendas + p->calculaTotal();
	};

	std::cout << totalVendas;

	std::cout << _pedidos.size();
};