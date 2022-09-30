#pragma once
#include <SFML/Graphics.hpp>
#ifndef PADDLE_H

class Paddle {
public:
	Paddle();
	Paddle(float x, float y);
	void updatePaddle1();
	void updatePaddle2();
	sf::RectangleShape getPad();

private:
	sf::RectangleShape pad;
	sf::Vector2f pos;
	int top = 0;
	int bottom = 650;
};
#endif // !PADDLE_H

