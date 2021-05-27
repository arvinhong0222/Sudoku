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
	int gameDifficulty;//�C������ 1:²��, 2:����, 3:�}�� 
	string play;//�O�_�~��C�� 1:�~�� 0:���� 

};
#endif
