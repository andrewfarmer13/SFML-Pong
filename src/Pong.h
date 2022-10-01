#pragma once
#include "Paddle.h"
#include "Ball.h"
#ifndef PONG_H

class Pong {
public:
	Pong();
	void Run();
	void drawNet();

private:
	sf::RenderWindow window;
	Ball ball;
	Paddle pad_1;
	Paddle pad_2 = Paddle(850.f, 200.f);
	
};
#endif // !PONG_H
