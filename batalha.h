#pragma once
#include <iostream>
#include <string>
using namespace std;

void exibir(string nome, int vida, int ataque) {
	
	cout << "--- " << nome << " ---" << enl;
	cout << "vida: " << vida << endl;
	cout << "Ataque: " << ataque << endl;
	
	
}

int dano (int ataque, int defesa) {
	 
	int d = ataque - defesa;
	return (d > 0) ? d : 0;
}
