#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
#include"Ending.h"

using namespace sf;
class Game:public Ending
{
private:
	int c = 400;//x ��� �����
	int m = 440;//y ��� �����
	int n = 0;
	int s = 0;//����
	int win;
	float dx = 0, dy = 0;
	float x = 300, y = 300;
	
public:
	int sGame(RenderWindow & app);
	

};

