#include <SFML/Graphics.hpp>
#include "Pong.h"
#include "Paddle.h"

Pong::Pong() {
    window.create(sf::VideoMode(1000, 800), "PONG");
    
    
}

void Pong::Run() {
    

    while (window.isOpen())
    {
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == event.KeyPressed) {
                ball.init();
            }
        }
        pad_1.updatePaddle1();
        pad_2.updatePaddle2();
        ball.updateBall(pad_1.getPad(), pad_2.getPad());
        window.clear();
        drawNet();
        window.draw(ball.getBall());
        window.draw(pad_1.getPad());
        window.draw(pad_2.getPad());
        window.display();
    }
}

void Pong::drawNet() {
    int x = 500;
    int y = 0;
    sf::Vector2f pos;
    pos.x = x;
    pos.y = y;
    sf::RectangleShape line;
    line.setPosition(pos);
    line.setFillColor(sf::Color::White);
    line.setSize(sf::Vector2f(5, 20));
    for (int c = 0; c <= 25; c++) {
        window.draw(line);
        pos.y += 35;
        line.setPosition(pos);
    }
}
