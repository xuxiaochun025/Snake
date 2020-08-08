#include<iostream>
using namespace std;
#include"snake.h"
#include<conio.h>
#define SIZE 10

Snake::Snake() {

}

Snake::~Snake() {

}

void Snake::initsnake() {
	this->n = 3;
	this->ch = right;
	this->szb[0].x = 100;
	this->szb[0].y = 100;
	this->szb[1].x = 90;
	this->szb[1].y = 100;
	this->szb[2].x = 80;
	this->szb[2].y = 100;
}

void Snake::snakemove() {
	for (int i = this->n - 1; i > 0; i--) {
		this->szb[i].x = this->szb[i - 1].x;
		this->szb[i].y = this->szb[i - 1].y;
	}
	switch (this->ch) {
	case left:
		this->szb[0].x -= SIZE;
		break;
	case up:
		this->szb[0].y -= SIZE;
		break;
	case right:
		this->szb[0].x += SIZE;
		break;
	case down:
		this->szb[0].y += SIZE;
		break;
	}
}
void Snake::changech() {
	char key;
	key = _getch();
	switch (key) {
	case left:
		if (this->ch != right) {
			this->ch = left;
		}
		break;
	case up:
		if (this->ch != down) {
			this->ch = up;
		}
		break;
	case right:
		if (this->ch != left) {
			this->ch = right;
		}
		break;
	case down:
		if (this->ch != up) {
			this->ch = down;
		}
		break;
	}
}

void Snake::eatfood(Food &f) {
	if (this->szb[0].x == f.x && this->szb[0].y == f.y) {
		this->n++;
		f.iseat = true;
	}
}
