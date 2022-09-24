#include<iostream>

using namespace std;

class Categoria{
    // Preencher
    
    // ************* Dados *************
 
    // *********************************
    
    
    // ************* Operações *************
    
    // Construtor
    Categoria() {
    }
    
    // Recupera o código correspondente a uma categoria.
    int getCodigo() {
    }
    
    // Recupera o valor em caixa de uma categoria.
    double getValorCaixa(){
    }
    
    // Adiciona uma quantia ao caixa de uma categoria.
    void adicionaCaixa(double valor) {
    }
    
    // Remove uma quantia ao caixa de uma categoria.
    void gastaCaixa(double valor) {
    }
    // *********************************

};



class Orcamento {
    // Preencher
    
    // ************* Dados *************
 
    // *********************************
    
    // ************* Operações *************
    
    // Construtor do Orçamento que deve conter um objeto categoria para cada pasta.
    // Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento.
    // Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.
    Orcamento(double impostos) {
    }
    
    // Reduz o valor no caixa da categoria especificada.
    void gastoCategoria(int codigo_categoria, double valor) {;
    }
    
    // Retorna o valor em caixa da categoria especificada.
    double getSaldo(int codigo_categoria) {
    }
    
    // Retorna o ponteiro para o objeto da categoria especificada.
    Categoria* getCategoria(int codigo_categoria) {
    }
    
    // *********************************
};



int main() {
  Orcamento *orcamento;

  char test = 0;
  while(cin >> test) {
      switch (test) {
        case 'o': { // Inicia novo orçamento
          double valor = 0;
          cin >> valor;
          
          // PREENCHER chamada de orçamento   
          
        }
        break;
        case 'g': { // Gastar em uma categoria
          int categoria = 0;
          double valor = 0;
          cin >> categoria >> valor;
          
          // PREENCHER chamada de orçamento
          
          cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
        }
        break;
        case 'p': { // Imprimir todas as categorias e seus saldos
          for (int categoria = 0; categoria < 5; categoria++) {
            cout << categoria << ": " << orcamento->getSaldo(categoria) << endl;
          }
        }
        break;
        default: {
          cout << "----------" << endl;
        } break;
      }
  }
  return 0;
}