#pragma once
#include "SFML/Graphics.hpp"
#ifndef BALL_H
class Ball {
public:
	Ball();
	sf::RectangleShape getBall();
	void init();
	void updateBall(sf::RectangleShape, sf::RectangleShape);


private:
	sf::RectangleShape ball;
	sf::Vector2f pos;
	float x_velocity = .2;
	float y_velocity = .2;

};
#endif // !BALL_H
