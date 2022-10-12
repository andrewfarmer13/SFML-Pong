#include "Ball.h"
#include "Paddle.h"

Ball::Ball() {
	pos.x = 500;
	pos.y = 400;
	ball.setPosition(pos);
	ball.setSize(sf::Vector2f(20.f, 20.f));
	ball.setFillColor(sf::Color::White);
}

sf::RectangleShape Ball::getBall() {
	return ball;
}

void Ball::init() {

	for(int i = 0; i < 15; i++)
		pos.x += x_velocity;
		pos.y += y_velocity;
		ball.setPosition(pos);

}

void Ball::updateBall(sf::RectangleShape p1, sf::RectangleShape p2) {

	checkCollision(p1, p2);
	pos.x += x_velocity;
	pos.y += y_velocity;
	ball.setPosition(pos);

}

void Ball::checkCollision(sf::RectangleShape p1, sf::RectangleShape p2) {

	
	if (p1.getGlobalBounds().intersects(ball.getGlobalBounds())) {
		x_velocity *= -1;
	}
	if (p2.getGlobalBounds().intersects(ball.getGlobalBounds())) {
		x_velocity *= -1;
	}
	if (ball.getPosition().y < 0 || ball.getPosition().y > 800) {
		y_velocity *= -1;
	}
	if (ball.getPosition().x < 0 || ball.getPosition().x > 999) {
		x_velocity *= -1;
		pos.x = 500;
		pos.y = 400;
		ball.setPosition(pos);
	}

}