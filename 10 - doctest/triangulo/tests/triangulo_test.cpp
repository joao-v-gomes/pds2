#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../triangulo.hpp"
#include "doctest.h"

TEST_CASE("Testando a getPerimiter") {
	SUBCASE("Caso Positivo: O codigo soma side2 duas vezes") {
		shapes::Triangle tri(10, 6, 5);

		// getPerimiter faz 10 + 6 + 6
		CHECK_EQ(22, tri.getPerimeter());
	}

	SUBCASE("Caso Negativo: O codigo soma os tres lados corretamente") {
		shapes::Triangle tri(10, 6, 5);

		// getPerimiter faz 10 + 6 + 5
		CHECK_EQ(21, tri.getPerimeter());
	}
}

TEST_CASE("Testando a getKind") {
	SUBCASE("Caso Positivo: O codigo verifica isoceles antes de equilatero") {

		shapes::Triangle tri(6, 6, 6);

		CHECK_EQ(shapes::Triangle::Kind::ISOSCELES, tri.getKind());
	}

	SUBCASE("Caso Negativo: O codigo deve verificar equilatero primeiro") {

		shapes::Triangle tri(6, 6, 6);

		CHECK_EQ(shapes::Triangle::Kind::EQUILATERAL, tri.getKind());
	}
}

TEST_CASE("Testando a getArea") {
	SUBCASE("Caso Positivo: Com a getPerimete errada") {
		shapes::Triangle tri(10, 6, 5);

		CHECK_EQ(18.1659, tri.getArea());
	}

	SUBCASE("Caso Negativo: Com a getPerimetro correta") {
		shapes::Triangle tri(10, 6, 5);

		CHECK_EQ(11.4, tri.getArea());
	}
}

// TEST_CASE("Intruso crack_senha") {

// 	SUBCASE("Caso válido 1: duas senhas crackeável") {
// 		Intruso i;
// 		REQUIRE_NOTHROW(i.set_senha_vazada("1 7 3 9 0 8 5 6 2 4 B C E A E B"));
// 		REQUIRE_NOTHROW(i.set_senha_vazada("9 0 7 5 8 4 6 2 3 1 E C C B D A"));

// 		CHECK_EQ("3 8 4 7 2 9 ", i.crack_senha());
// 	}

// 	SUBCASE("Caso geral 2: três senhas crackeável") {
// 		Intruso i;
// 		REQUIRE_NOTHROW(i.set_senha_vazada("0 1 2 3 4 5 6 7 8 9 B C D D E E"));
// 		REQUIRE_NOTHROW(i.set_senha_vazada("1 3 5 4 6 8 7 9 0 2 E B C D C D"));
// 		REQUIRE_NOTHROW(i.set_senha_vazada("3 2 0 4 5 9 7 6 8 1 A C D D E C"));

// 		CHECK_EQ("2 5 6 7 8 9 ", i.crack_senha());
// 	}

// 	SUBCASE("Caso inválido 1: nenhuma senha cadastrada") {
// 		Intruso i;
// 		CHECK_THROWS(i.crack_senha());
// 	}

// 	SUBCASE("Caso inválido 2: impossível crackear") {
// 		Intruso i;
// 		REQUIRE_NOTHROW(i.set_senha_vazada("0 1 2 3 4 5 6 7 8 9 B C D D E E"));
// 		REQUIRE_NOTHROW(i.set_senha_vazada("1 3 5 4 6 8 7 9 0 2 E B C D C D"));

// 		CHECK_THROWS(i.crack_senha());
// 	}
// }
