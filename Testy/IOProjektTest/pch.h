//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#include "..\\..\\Projekt\\Graf.h"


namespace PlikTest{
	struct PlikTest : ::testing::Test {
		plik::Plik* plik;
		PlikTest() {
			plik = new plik::Plik;
		}
		~PlikTest() {
			delete plik;
		}
	};

	struct plik_parametry {
		std::string nazwa_pliku;
		int test_ilosc_funkcji;
	};

	struct TestZnajdzDefinicje : PlikTest, testing::WithParamInterface<plik_parametry> {
		TestZnajdzDefinicje() {
			plik->nazwa_pliku = GetParam().nazwa_pliku;
		}
	};
}





