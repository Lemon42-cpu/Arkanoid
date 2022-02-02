#include "Game.h"

int Game::sGame(RenderWindow & app)
{
	Texture t1, t2, t3, t4;
	t1.loadFromFile("images/block01.jpg");
	t2.loadFromFile("images/background.jpg");
	t3.loadFromFile("images/ball.png");
	t4.loadFromFile("images/paddle.jpg");
	;
	
	


	Sprite sBackground(t2), sBall(t3), sPaddle(t4);
	
	sPaddle.setPosition(c, m);//респ платформы


	Sprite block[100];

	

	for (int i = 1; i <= 10; i++)//ряд
		for (int j = 1; j <= 10; j++)//строка
		{
			block[n].setTexture(t1);
			
			block[n].setPosition(i * 43, j * 20);
			n++;


		}

	

	while (app.isOpen())
	{

		Event e;
		while (app.pollEvent(e))
		{
			if (e.type == Event::Closed)
				app.close();
		}

		x += dx;
		sBall.move(dx, 0);
		for (int i = 0; i < n; i++)
		
			if (FloatRect(x + 3, y + 3, 6, 6).intersects(block[i].getGlobalBounds()))
			{
				block[i].setPosition(-100, 0); dx = -dx;

				s++;
			}
		if (s == 100) {
			win = 1;
		}


		y += dy;
		sBall.move(0, dy);
		for (int i = 0; i < n; i++)
			
			if (FloatRect(x + 3, y + 3, 6, 6).intersects(block[i].getGlobalBounds()))
			{
				block[i].setPosition(-100, 0); dy = -dy;
				s++;

			}


		if (x < 0 || x>520) dx = -dx;
		if (y < 0) dy = -dy;


		if (Keyboard::isKeyPressed(Keyboard::Right)) sPaddle.move(9, 0);
		if (Keyboard::isKeyPressed(Keyboard::Left)) sPaddle.move(-9, 0);
		if (Keyboard::isKeyPressed(Keyboard::Space)) {//старт игры
			dx = 6;
			dy = 5;
		}
		if (FloatRect(x, y, 12, 12).intersects(sPaddle.getGlobalBounds())) dy = -(rand() % 5 + 2);

		sBall.setPosition(x, y);


		app.clear();
		app.draw(sBackground);
		app.draw(sBall);
		app.draw(sPaddle);


		for (int i = 0; i < n; i++)
			app.draw(block[i]);

		Ending te;
		if (y > 481) {
			if (te.End(app, doing) == 1) {
				return 1;
			}
			else {
				return 2;
			}
			
		}
		if (win == 1) {
			if (te.End(app, does) == 1) {
				return 1;
			}
			else {
				return 2;
			}
		}
		
		app.display();
	}
}


