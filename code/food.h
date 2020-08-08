#pragma once
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

class Snake;
class Food {
public:
	Food();
	void initfood();
	void createfood(Snake &);
	~Food();
public:
	int x;
	int y;
	bool iseat;
};