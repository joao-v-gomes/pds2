#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	std::vector<std::string> teste;
	for (int i = 0; i < 10; i++) {
		teste.push_back("Teste");
	}

	for (string s : teste) {
		cout << s;
	}

	cout << "Testeee";

	return 0;
}