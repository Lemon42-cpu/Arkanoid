#include "Ending.h"

int Ending::End(RenderWindow & app, int doing)
{
	Texture go, d, ne;
	go.loadFromFile("images/GO.jpg");
	d.loadFromFile("images/button_yes.png");//кнопка да
	ne.loadFromFile("images/button_no.png");//кнопка нет
	Sprite gameO(go), yes(d), no(ne);
	while (app.isOpen()) {
		app.draw(gameO);
		yes.setPosition(100, 260);
		no.setPosition(320, 260);
		app.draw(yes);
		app.draw(no);
		yes.setColor(Color::White);
		no.setColor(Color::White);
		if (IntRect(120, 240, 150, 90).contains(Mouse::getPosition(app))) { yes.setColor(Color::Blue); doing = 1; }
		if (IntRect(320, 240, 150, 90).contains(Mouse::getPosition(app))) { no.setColor(Color::Blue); doing = 2; }
		if (Mouse::isButtonPressed(Mouse::Left)) {
			if (doing == 1) {
				return doing;
			}
			if (doing == 2) {
				return doing;

			}
		}//game over
		app.display();

	}

}
int Ending::End(RenderWindow & app, double does) {
	Texture w, d, ne;
	w.loadFromFile("images/WIN.jpg");
	d.loadFromFile("images/button_yes.png");//кнопка да
	ne.loadFromFile("images/button_no.png");//кнопка нет
	Sprite gameO(w), yes(d), no(ne);
	while (app.isOpen()) {
		app.draw(gameO);
		yes.setPosition(30, 330);
		no.setPosition(340, 330);
		app.draw(yes);
		app.draw(no);
		yes.setColor(Color::White);
		no.setColor(Color::White);
		if (IntRect(30, 330, 150, 90).contains(Mouse::getPosition(app))) { yes.setColor(Color::Blue); does = 1; }
		if (IntRect(340, 330, 150, 90).contains(Mouse::getPosition(app))) { no.setColor(Color::Blue); does = 2; }
		if (Mouse::isButtonPressed(Mouse::Left)) {
			if (does == 1) {
				return does;
			}
			if (does == 2) {
				return does;

			}
		}//WIN
		app.display();

	}
}
