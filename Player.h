#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
	Player();
	void setGameDifficulty();
	int getGameDifficulty() const;
	void setPlay(string);
	string getPlay() const;

private:
	int gameDifficulty;//遊戲難度 1:easy, 2:normal, 3:hard
	string play;//是否繼續遊玩 1:Continue 0:Quit

};
#endif