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
		pos.x += velocity;
		pos.y += velocity;
		ball.setPosition(pos);

}

void Ball::updateBall(sf::RectangleShape p1, sf::RectangleShape p2) {

	pos.x += velocity;
	pos.y += velocity;
	ball.setPosition(pos);

	if (ball.getPosition().x < p1.getPosition().x + 30 && ball.getPosition().x > p1.getPosition().x && ball.getPosition().y < p1.getPosition().y + 150 && ball.getPosition().y > p1.getPosition().y) {
		velocity *= -1;
		//velocity = ((ball.getPosition().y - p1.getPosition().y) / 150) - 0.5f;
	}
	if (ball.getPosition().x > p2.getPosition().x && ball.getPosition().x < p2.getPosition().x + 30 && ball.getPosition().y < p2.getPosition().y + 150 && ball.getPosition().y > p2.getPosition().y) {
		velocity *= -1;
	}
	if (ball.getPosition().y < 0 || ball.getPosition().y > 800) {
		velocity *= -1;
	}
	if (ball.getPosition().x < 0 || ball.getPosition().x > 999) {
		pos.x = 500;
		pos.y = 400;
		ball.setPosition(pos);
	}
	//if (ball.getPosition().x == p1.getPosition().x || ball.getPosition().x == p2.getPosition().x) {
	//	velocity *= -1;
	//}
	//if (ball.getPosition().y == p1.getPosition().y || ball.getPosition().y == p2.getPosition().y)
	//if (ball.getPosition().y < 0 || ball.getPosition().y > 799) {
	//	velocity *= -1;
	//}
	//if (ball.getPosition().x < 0 || ball.getPosition().x > 999) {
	//	pos.x = 500;
	//	pos.y = 400;
	//	ball.setPosition(pos);
	//}
}