#pragma once
#include<iostream>
using namespace std;
#include"snake.h"
#include"food.h"
#include<graphics.h>

class Snake;
class Food;
class Game {
public:
	void initgame(Snake&, Food&);
	void drawgame(Snake&, Food&);
	int gameover(Snake&, Food&);
public:
	int speed;
};