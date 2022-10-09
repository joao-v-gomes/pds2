#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

/**
 * @brief Classe responsavel pelo armazenamento e gerenciamento das informacoes
 * de um produto do tipo Pizza.
 *
 */
class Pizza : public Produto {
  private:
	// TODO: Declare aqui as variaveis da classe. Note que as variaveis quantidade
	// quantidade e valor_unitario ja sao herdadas de Produto
	std::string _sabor;
	int _pedacos;
	bool _borda;

  public:
	/**
	 * @brief Construtor padrao que inicializa todas as variaveis da classe.
	 * Note que o valor unitario (membro da classe mãe) deve ser calculado
	 * através do método calcPreco.
	 *
	 * @param sabor Sabor da pizza: Ex: 4 queijos
	 * @param pedacos Quantidade de pedacos da pizza
	 * @param borda_recheada Informa se a pizza tem borda recheada ou nao
	 * @param qtd Quantidade de pizzas
	 */
	Pizza(const std::string &sabor,
		  int pedacos,
		  bool borda_recheada,
		  int qtd);

	// Pizza(const std::string &sabor,
	// 	  int pedacos,
	// 	  bool borda_recheada,
	// 	  int qtd,
	// 	  float valor);

	/**
	 * @brief Calcula o valor da pizza de acordo com as regras:
	 * 5 reais por pedaço + 10 reais se borda recheada
	 * + 8 reais se sabor tiver a palavra "especial"
	 * (ex: especial bacon, frango com catupiry especial)
	 *
	 * @return float preço da pizza em reais
	 */
	float calcPreco() override;

	/**
	 * @brief Retorna uma descricao detalhada da pizza.
	 *
	 * @return std::string Descricao da pizza.
	 */
	std::string descricao() const override;

	std::string getSabor() const;

	int getPedacos() const;

	bool getBorda() const;
};

#endif