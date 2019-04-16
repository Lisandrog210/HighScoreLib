#include <iostream>
#include <string>
using namespace std;
string auxString;
int auxNumber;
int mayor = 0;
int index;

struct score{	
	int number = 0;
	string player = "Empty";
};

struct score score[10];
/*
void createScoreBoard(){
	for (int i = 0; i < 10; i++){
		score[i];
	}
}*/

void AddScore(){
	cin >> auxString;
	for (int  i = 0; i < 10; i ++){
		if (score[i].player == "Empty")
			score[i].player = auxString;
	}
	cin.get();
	cin >> auxNumber;
	for (int i = 0; i < 10; i++) {
		if (score[i].number == 0)
			score[i].number = auxNumber;
	}
}

 struct score GetScore(struct score score[]){
	cin >> index;
	for (int i = 0; i < 10; i++) {
		if (index == i)
			return score[i];		
	}
}

