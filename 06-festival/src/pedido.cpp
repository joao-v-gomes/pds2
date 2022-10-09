#include "pedido.hpp"

void Pedido::adicionaProduto(Produto *p) {
	_produtos.push_back(p);
};

void Pedido::setEndereco(const std::string &endereco) {
	_endereco = endereco;
};

float Pedido::calculaTotal() const {
	float precoPedido = 0;

	for (Produto *p : _produtos) {
		precoPedido = precoPedido + p->calcPreco()
	};

	return precoPedido;
};

std::string Pedido::resumo() const {
	std::string resumoPedido = "";

	for (Produto *p : _produtos) {
		resumoPedido = p->descricao();
		resumoPedido = "\n";
	};

	return resumoPedido;
};