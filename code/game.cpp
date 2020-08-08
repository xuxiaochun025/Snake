#include<iostream>
using namespace std;
#include"game.h"
#define SIZE 10

void Game::initgame(Snake &s, Food &f) {
	s.initsnake();
	f.initfood();
}

void Game::drawgame(Snake& s, Food& f) {
	cleardevice();
	setfillcolor(RED);
	fillrectangle(s.szb[0].x, s.szb[0].y,
		s.szb[0].x + SIZE, s.szb[0].y + SIZE);
	for (int i = 1; i < s.n; i++) {
		rectangle(s.szb[i].x, s.szb[i].y,
			s.szb[i].x + SIZE, s.szb[i].y + SIZE);
	}
	setfillcolor(GREEN);
	fillroundrect(f.x, f.y, f.x + SIZE, f.y + SIZE, 5, 5);
}

int Game::gameover(Snake& s, Food& f) {
	//×²Ç½
	if (s.szb[0].x < 0 || s.szb[0].x>640 || s.szb[0].y < 0 || s.szb[0].y>640) {

		return 1;
	}
	//×²×ÔÉí
	for (int i = 1; i < s.n; i++) {
		if (s.szb[0].x == s.szb[i].x && s.szb[0].y == s.szb[i].y) {
			return 1;
		}
	}
	return 0;
}
