#include<iostream>
using namespace std;
#include"food.h"
#include"snake.h"

Food::Food() {

}

Food::~Food() {

}

void Food::initfood() {
	this->iseat = true;
}

void Food::createfood(Snake &s) {
	bool mark = false;//不在蛇身上
	if (this->iseat) {
		while (1) {
			mark = false;
			this->x = rand() % 64 * 10;
			this->y = rand() % 48 * 10;
			for (int i = 0; i < s.n; i++) {
				if (this->x == s.szb[i].x && this->y == s.szb[i].y) {
					mark = true;
					break;
				}
			}
			if (mark == false) {
				this->iseat = false;
				break;
			}
		}
	}
}

