#include <iostream>
#include <string>

using namespace std;

int main() {
  //   std::cout << "Teste";
  string palavra;

  int qtde_A = 0;
  int qtde_E = 0;
  int qtde_I = 0;
  int qtde_O = 0;
  int qtde_U = 0;

  cin >> palavra;

  //   cout << palavra;

  for (char l : palavra) {
    // cout << l << endl;
    if (l == 'a' || l == 'A') {
      qtde_A++;
    };
    if (l == 'e' || l == 'E') {
      qtde_E++;
    };
    if (l == 'i' || l == 'I') {
      qtde_I++;
    };
    if (l == 'o' || l == 'O') {
      qtde_O++;
    };
    if (l == 'u' || l == 'U') {
      qtde_U++;
    };
  }

  if (qtde_A > 0) {
    cout << "a " << qtde_A << endl;
  }

  if (qtde_E > 0) {
    cout << "e " << qtde_E << endl;
  }

  if (qtde_I > 0) {
    cout << "i " << qtde_I << endl;
  }

  if (qtde_O > 0) {
    cout << "o " << qtde_O << endl;
  }

  if (qtde_U > 0) {
    cout << "u " << qtde_U << endl;
  }

  return 0;
}