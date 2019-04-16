#pragma once

#include <iostream>
using namespace std;

struct score {
	int number = 0;
	string player = "Empty";
};

void AddScore();
//void DeleteScore();
//void ClearList();
//void SortList();
struct score GetScore(struct score[]);
//void createScoreBoard();