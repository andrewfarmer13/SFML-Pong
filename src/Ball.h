#pragma once
#include "SFML/Graphics.hpp"
#include "Paddle.h"
#ifndef BALL_H
class Ball {
public:
	Ball();
	sf::RectangleShape getBall();
	void init();
	void updateBall(sf::RectangleShape p1, sf::RectangleShape p2);



private:
	sf::RectangleShape ball;
	sf::Vector2f pos;
	float x_velocity = .3;
	float y_velocity = 0.3;
	void checkCollision(sf::RectangleShape, sf::RectangleShape);

};
#endif // !BALL_H
