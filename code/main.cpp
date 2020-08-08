#include<iostream>
using namespace std;
#include"game.h"
#include<conio.h>
#define SIZE 10

int main()
{
	srand((unsigned int)time(NULL));
	initgraph(640, 480);
	Snake s;
	Food f;
	Game game; 
	game.speed = 150;
	int over = 0;
	game.initgame(s, f);
	while (1) {
		while (!_kbhit()) {
			s.snakemove();
			game.drawgame(s, f);
			f.createfood(s);
			s.eatfood(f);
			over = game.gameover(s, f);
			if (over == 1) {
				break;
			}
			Sleep(150);
		}
		if (over == 1) {
			break;
		}
		s.changech();
	}
	closegraph();
	system("pause");
	return 0;
}