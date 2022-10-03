#include <iostream>
#include "Score.h"

Score::Score() {
	data = 0;
}

void Score::updateScore() {
	data++;
	std::cout << data;
}

int Score::getScore() {
	return data;
}