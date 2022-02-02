#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
class Ending
{
protected:
	int doing = 0;
	double does = 0;
public:
	int End(RenderWindow & app, int doing);
	int End(RenderWindow & app, double does);
};

