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
        window.draw(ball.getBall());
        window.draw(pad_1.getPad());
        window.draw(pad_2.getPad());
        window.display();
    }
}
