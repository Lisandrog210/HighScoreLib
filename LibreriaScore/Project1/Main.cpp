#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

void main(){	
	
	struct score scoreAux[10];

	for (int i = 0; i < 10; i++) {
		scoreAux[i].number = 0; 
		scoreAux[i].player = "Empty";
	}

	//createScoreBoard();	

	cout << "Ingrese un nombre de jugador y un puntaje" << endl;
	AddScore();
	cout << "Ingrese un índice de 0 a 9 para imprimir un nombre y un puntaje" << endl;
	GetScore(scoreAux);
	cout << scoreAux[1].number << " - " << scoreAux[1].player << endl;

	cin.get();
	cin.get();
	
}

