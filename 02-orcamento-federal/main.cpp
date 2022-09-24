#include <iostream>

#define TAXA_SAUDE		 0.15
#define TAXA_EDUCACAO	 0.15
#define TAXA_SEGURANCA	 0.20
#define TAXA_PREVIDENCIA 0.35
#define TAXA_ADM_PUBLICA 0.15

// #define CODIGO_SAUDE	   0
// #define CODIGO_EDUCACAO	   1
// #define CODIGO_SEGURANCA   2
// #define CODIGO_PREVIDENCIA 3
// #define CODIGO_ADM_PUBLICA 4

using namespace std;

class Categoria {
	// Preencher
  private:
	int _id;
	double _valorCaixa;
	// ************* Dados *************

	// *********************************

	// ************* Operações *************
  public:
	// Construtor
	Categoria(int id) {
		_id = id;
	}

	// Recupera o código correspondente a uma categoria.
	int getCodigo() {
		return _id;
	}

	// Recupera o valor em caixa de uma categoria.
	double getValorCaixa() {
		return _valorCaixa;
	}

	// Adiciona uma quantia ao caixa de uma categoria.
	void adicionaCaixa(double valor) {
		_valorCaixa = _valorCaixa + valor;
	}

	// Remove uma quantia ao caixa de uma categoria.
	void gastaCaixa(double valor) {
		_valorCaixa = _valorCaixa - valor;
	}
	// *********************************
};

class Orcamento {
	// Preencher
  private:
	double _impostos;
	Categoria *categorias[5];
	// ************* Dados *************

	// *********************************

	// ************* Operações *************

	// Construtor do Orçamento que deve conter um objeto categoria para cada
	// pasta. Recebe como parâmetro o valor monetário que deve ser atribuído a
	// aquele orçamento. Este valor deve ser distribuído a cada categoria, nos
	// percentuais descritos anteriormente.
  public:
	Orcamento(double impostos) {
		_impostos = impostos;

		for (int i = 0; i < 5; i++) {
			categorias[i] = new Categoria(i);
		}

		// saude = new Categoria(0);
		// educacao = new Categoria(1);
		// seguranca = new Categoria(2);
		// previdencia = new Categoria(3);
		// adm_publica = new Categoria(4);

		categorias[0]->adicionaCaixa(TAXA_SAUDE * impostos);
		categorias[1]->adicionaCaixa(TAXA_EDUCACAO * impostos);
		categorias[2]->adicionaCaixa(TAXA_SEGURANCA * impostos);
		categorias[3]->adicionaCaixa(TAXA_PREVIDENCIA * impostos);
		categorias[4]->adicionaCaixa(TAXA_ADM_PUBLICA * impostos);
	}

	double getValorOrcamento() {
		return _impostos;
	}

	// Reduz o valor no caixa da categoria especificada.
	void gastoCategoria(int codigo_categoria, double valor) {
		categorias[codigo_categoria]->gastaCaixa(valor);
	}

	// Retorna o valor em caixa da categoria especificada.
	double getSaldo(int codigo_categoria) {
		return categorias[codigo_categoria]->getValorCaixa();
	}

	// Retorna o ponteiro para o objeto da categoria especificada.
	Categoria *getCategoria(int codigo_categoria) {
		return categorias[codigo_categoria];
	}

	// *********************************
};

int main() {
	Orcamento *orcamento;
	cout << "Abriu\n";
	char test = 0;
	cout << "Digite-operacao ";
	while (cin >> test) {
		switch (test) {
			case 'o': { // Inicia novo orçamento
				cout << "Foi-orcamento\n";
				double valor = 0;
				cin >> valor;

				// PREENCHER chamada de orçamento
				orcamento = new Orcamento(valor);

				// cout << orcamento->getValorOrcamento();

			} break;
			case 'g': { // Gastar em uma categoria
				cout << "Foi-gasto\n";
				int categoria = 0;
				double valor = 0;
				cin >> categoria >> valor;

				// PREENCHER chamada de orçamento
				orcamento->getCategoria(categoria)->gastaCaixa(valor);

				cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
			} break;
			case 'p': { // Imprimir todas as categorias e seus saldos
				cout << "Foi-impressao\n";
				for (int categoria = 0; categoria < 5; categoria++) {
					cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
				}
			} break;
			default: {
				cout << "----------" << endl;
			} break;
		}
	}
	return 0;
}