#include <list>
#include <string>

class SenhaVazada {
	std::string _numeros;
	std::string _digitos;

	SenhaVazada(std::string numeros, std::string digitos);
};

class Intruso {
	/*Continue a implementação da classe Intruso*/
	std::list<SenhaVazada> lista_senhas_vazadas;

  public:
	void set_senha_vazada(std::string vazou);
	std::string crack_senha();
};
