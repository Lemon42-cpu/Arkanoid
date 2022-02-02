#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>
using namespace sf;
class menu
{
private:
	bool isMenu = 1;
	int menuNum = 0;

public:
	void mMenu(RenderWindow & app);

};