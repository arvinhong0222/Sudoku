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
	int gameDifficulty;//遊戲難度 1:簡單, 2:中等, 3:艱難 
	string play;//是否繼續遊玩 1:繼續 0:結束 

};
#endif
