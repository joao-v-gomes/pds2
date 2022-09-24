#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Fatura {
  private:
	int _id_fatura;
	char _tipo_pagamento;
	string _cod_pagamento;
	double _valor;
	bool _ja_foi_paga;

  public:
	Fatura(char tipo_pag, double valor, string cod_pag) {
		_tipo_pagamento = tipo_pag;
		_cod_pagamento = cod_pag;
		_valor = valor;
		_ja_foi_paga = false;
	}

	string get_cod_pagamento() {
		return _cod_pagamento;
	}

	double get_valor() {
		return _valor;
	}

	char get_tipo_pagamento() {
		return _tipo_pagamento;
	}

	bool is_paga() {
		return _ja_foi_paga;
	}

	void imprimir() {
		cout << _id_fatura << " : " << _tipo_pagamento << "  " << _cod_pagamento << "  " << _valor << "  " << _ja_foi_paga;
	}
};

class Colecao {
  private:
	int _id_fatura;
	vector<Fatura *> _faturas;

  public:
	Colecao() {
	}

	void adicionar(Fatura *f) {
		_faturas.push_back(f);
	}

	void proxima() {
	}

	void imprimir() {
	}

	void status() {
	}
};

int main() {
	Colecao *colecao = new Colecao();
	Fatura *f;
	cout << "Abriu\n";
	char test = 0;
	cout << "Digite-operacao ";
	while (cin >> test) {
		switch (test) {
			case 'f': {
				cout << "Foi-cadastro-fatura\n";
				char tipo_pag;
				string cod_paga;
				double valor;

				cin >> tipo_pag >> valor >> cod_paga;

				f = new Fatura(tipo_pag, valor, cod_paga);
			} break;

			case 'r':
				cout << "Foi-pagamento\n";
				break;

			case 'p':
				cout << "Foi-imprimir-elementos\n";
				break;

			case 's':
				cout << "Foi-imprimir-faturas-restantes\n";
				break;

			case 'e':
				cout << "Foi-sair\n";
				exit(1);
				break;

			default:
				cout << "Erro no menu\n";
		}
		return 0;
	}
}