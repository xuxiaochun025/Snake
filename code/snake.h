#pragma once
#include<iostream>
using namespace std;
#define NUM 200
#include"food.h"

class Coor {
public:
	Coor(){}
	~Coor(){}
public:
	int x;
	int y;
};

class Snake {
public:
	Snake();
	void initsnake();
	void snakemove();
	void changech();
	void eatfood(Food &);
	~Snake();
public:
	enum Ch { left = 75, up = 72, right = 77, down = 80 };
	int n;
	Coor szb[NUM];
	Ch ch;
};