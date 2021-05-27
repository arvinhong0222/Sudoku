#ifndef PROBLEM_H
#define PROBLEM_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Problem
{
public:
	Problem();
	void setSudokuAnswer(int [][9]);
	void getSudokuAnswer() ;
	bool set(int, int, int);
	void reset(int, int);
	void initXOrd(int*);
	bool fillFrom(int, int);
	void digHole(int holeCnt);
	void printSudo();

	void setAnswer(string);
	string getAnswer();

private:
	int sudoku[9][9];
	int value, x0, y0;
	static int sudo[9][9];
	static int hole[9][9];

	string answer;
	
};
#endif