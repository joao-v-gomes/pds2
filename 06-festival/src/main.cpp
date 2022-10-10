/**
 * Este arquivo contem testes para o VPL. Ele nao deve ser modificado em
 * hipotese alguma. Voce pode usa-lo para testar seu VPL localmente.
 */

#include "util.hpp"
#include "venda.hpp"
#include <iostream>

int main() {

	Venda vendas;
	std::string command;
	std::cout << "digite pedido:\n";
	std::getline(std::cin, command);
	while (command == "pedido") {
		std::cout << "foi pedido\n";
		Pedido *pedido = new Pedido();
		while (std::cin >> command) {
			if (command == "pizza") {
				std::cout << "foi pizza\n";
				readPizza(pedido);
			} else if (command == "acai") {
				std::cout << "foi acai\n";
				readAcai(pedido);
			} else if (command == "cachorro-quente") {
				std::cout << "foi dogao\n";
				readCachorroQuente(pedido);
			} else if (command == "endereco") {
				std::cout << "foi endereço\n";
				readAddress(pedido);
			} else {
				break;
			}
		}
		std::cout << "adicionou pedido\n";
		vendas.adicionaPedido(pedido);
	}
	std::cout << "foi relatorio\n";
	vendas.imprimeRelatorio();
	return 0;
}