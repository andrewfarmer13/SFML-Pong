#include "Paddle.h"

Paddle::Paddle() {
	pos.x = 100.f;
	pos.y= 200.f;
	pad.setPosition(pos);
	pad.setSize(sf::Vector2f(30.f, 150.f));
	pad.setFillColor(sf::Color::White);

}

Paddle::Paddle(float x, float y) {
	pos.x = x;
	pos.y = y;
	pad.setPosition(pos);
	pad.setSize(sf::Vector2f(30.f, 150.f));
	pad.setFillColor(sf::Color::White);
}

sf::RectangleShape Paddle::getPad() {
	return pad;
}

void Paddle::updatePaddle1() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
		pos.y = pos.y - .3;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
		pos.y = pos.y + .3;
	}
	if (pos.y > bottom) {
		pos.y = bottom;
	}
	if (pos.y < top) {
		pos.y = top;
	}
	pad.setPosition(pos);
}

void Paddle::updatePaddle2() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up)) {
		pos.y = pos.y - .3;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down)) {
		pos.y = pos.y + .3;
	}
	if (pos.y > bottom) {
		pos.y = bottom;
	}
	if (pos.y < top) {
		pos.y = top;
	}
	pad.setPosition(pos);
}