#include "Menu.h"
#include "Game.h"
#include"Ending.h"
#include<iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

bool startGame() {
	RenderWindow app(VideoMode(520, 450), "Kursavaya");
	app.setFramerateLimit(60);
	menu o;
	o.mMenu(app);
	Game g;
	if (g.sGame(app) == 1) {
		return true;
	}
	else {
		return EXIT_SUCCESS;
	}
}
	
void gameRunning() {
	if (startGame()) { gameRunning(); }
}

int main()
{
	gameRunning();
	return EXIT_SUCCESS;
}
