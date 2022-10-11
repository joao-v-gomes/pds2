
#include "venda.hpp"

Venda::~Venda(){};

void Venda::adicionaPedido(Pedido *p) {
	_pedidos.push_back(p);
};
void Venda::imprimeRelatorio() const {

	float totalVendas = 0;

	int i = 0;

	for (Pedido *p : _pedidos) {
		i++;
		std::cout << "Pedido " << std::to_string(i) << std::endl;
		std::cout << p->resumo();
		std::cout << "\n";
	};

	for (Pedido *p : _pedidos) {
		totalVendas = totalVendas + p->calculaTotal();
	};

	std::cout << "Relatorio de Vendas" << std::endl;

	std::cout << "Total de vendas: R$";

	std::cout << totalVendas;

	std::cout << std::endl;

	std::cout << "Total de pedidos: " << std::to_string(_pedidos.size()) << std::endl;
};