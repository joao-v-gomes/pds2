#include <iostream>
#include <map>
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
	Fatura(int id, char tipo_pag, double valor, string cod_pag) {
		_id_fatura = id;
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

	void paga_fatura() {
		_ja_foi_paga = true;
	}

	void imprimir_fat() {
		cout << _id_fatura << ": " << _tipo_pagamento << "  " << _cod_pagamento << "  " << _valor << "  " << _ja_foi_paga << "\n";
	}
};

class Colecao {
  private:
	int _id_fatura;
	vector<Fatura *> _faturas;
	map<char, int> status;

  public:
	Colecao() {
	}

	void adicionar(Fatura *f) {
		_faturas.push_back(f);
	}

	void proxima() {
	}

	void imprimir() {
		cout << "ID TIPO COD VALOR PAGA\n";
		for (Fatura *f : _faturas) {
			f->imprimir_fat();
		}
	}

	void status_colecao() {
	}
};

int main() {
	Colecao *colecao = new Colecao();
	Fatura *f;

	int id = 0;

	// cout << "Abriu\n";
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

				f = new Fatura(id, tipo_pag, valor, cod_paga);

				cout << "Gerou fatura\n";

				colecao->adicionar(f);

				id++;

				cout << "Add na colecao\n";
			} break;

			case 'r':
				cout << "Foi-pagamento\n";
				break;

			case 'p': {
				cout << "Foi-imprimir-elementos\n";
				colecao->imprimir();
			} break;

			case 's': {
				cout << "Foi-imprimir-faturas-restantes\n";
			} break;

			case 'e': {
				cout << "Foi-sair\n";
				exit(1);
			} break;

			default: {
				cout << "Erro no menu\n";
			} break;
		}
		cout << "Digite-operacao ";
	}
	return 0;
}