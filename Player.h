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
	int gameDifficulty;//�C������ 1:easy, 2:normal, 3:hard
	string play;//�O�_�~��C�� 1:Continue 0:Quit

};
#endif