#ifndef START_H
#define START_H
#include <iostream>
#include <string>
#include "Problem.h"
#include "Player.h"
using namespace std;
class Start
{
public:
	Start();
	Start(Problem, Player);
	void setProblem(Problem);
	Problem getProblem();
	void setPlayer(Player);
	Player getPlayer();
	void toString();

private:
	Problem problem;
	Player player;
};
#endif