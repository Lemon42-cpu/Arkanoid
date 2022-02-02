#include "Menu.h"
#include "menu.h"



void menu::mMenu(RenderWindow & app)
{

	Texture mt1, mt2, mt3, ab, bm;
	mt1.loadFromFile("images/menu1.png");
	mt2.loadFromFile("images/menu2.png");
	mt3.loadFromFile("images/menu3.png");
	ab.loadFromFile("images/about.jpg");
	bm.loadFromFile("images/main.jpg");
	Sprite menu1(mt1), menu2(mt2), menu3(mt3), about(ab), menuBg(bm);

	menu1.setPosition(30, 230);
	menu2.setPosition(340, 230);
	menu3.setPosition(190, 360);

	
	while (isMenu) {
		Event e;
		while (app.pollEvent(e))
		{
			if (e.type == Event::Closed)
				app.close();
		}

		menu1.setColor(Color::White);
		menu2.setColor(Color::White);
		menu3.setColor(Color::White);
		int menuNum = 0;//для исправление бага в главном меню
		menu1.setColor(Color::White);
		menu2.setColor(Color::White);
		menu3.setColor(Color::White);
	

		if (IntRect(30, 230, 150, 90).contains(Mouse::getPosition(app))) {
			menu1.setColor(Color::Blue); menuNum = 1; 
		}
		if (IntRect(340, 230, 150, 90).contains(Mouse::getPosition(app))) {
			menu2.setColor(Color::Blue); menuNum = 2; 
		}
		if (IntRect(220, 340, 150, 90).contains(Mouse::getPosition(app))) {
			menu3.setColor(Color::Blue); menuNum = 3;
		}

		if (Mouse::isButtonPressed(Mouse::Left)) {
			if (menuNum == 1) {
				isMenu = false;
			}
			if (menuNum == 2) {
				app.draw(about); app.display(); 
			while (!Keyboard::isKeyPressed(Keyboard::Escape));
			}
			if (menuNum == 3) { 
				app.close(); isMenu = false;
			}

		}

		app.draw(menuBg);
		app.draw(menu1);
		app.draw(menu2);
		app.draw(menu3);

		app.display();
	}
}