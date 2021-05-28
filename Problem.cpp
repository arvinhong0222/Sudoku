#include "Problem.h"

int Problem::sudo[9][9] = {};
int Problem::hole[9][9] = {};

Problem::Problem() {

}

void Problem::setSudokuAnswer(int newSudokuAnswer[][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudoku[i][j] = newSudokuAnswer[i][j];
        }
    }
}

void Problem::getSudokuAnswer()  {
   
    
    int total = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] == sudo[i][j]) {
                total += 1;
            }
        }
    }

    if (total == 81) {  
        setAnswer("Clear");//����
        cout << "���߹L��" << endl;
    }
    else {
        setAnswer("Wrong answer");//�~�򭫷s��J����
        cout << "���׿��~" << endl;
    }

    
}

bool Problem::set(int x, int y, int val)
{
    if (sudo[y][x] != 0)   //�D��    
        return false;
    int x0, y0;
    for (x0 = 0; x0 < 9; x0++)
    {
        if (sudo[y][x0] == val) //�C�Ĭ� 
            return false;
    }
    for (y0 = 0; y0 < 9; y0++)
    {
        if (sudo[y0][x] == val) //��Ĭ� 
            return false;
    }
    for (y0 = y / 3 * 3; y0 < y / 3 * 3 + 3; y0++)
    {
        for (x0 = x / 3 * 3; x0 < x / 3 * 3 + 3; x0++)
        {
            if (sudo[y0][x0] == val) //��Ĭ� 
                return false;
        }
    }
    sudo[y][x] = val;
    return true;
}

void Problem::reset(int x, int y) {
    sudo[y][x] = 0;
}

void Problem::initXOrd(int* xOrd)  //0~9�H���ǦC 
{
    srand((unsigned)time(NULL));
    int i, k, tmp;
    for (i = 0; i < 9; i++)
    {
        xOrd[i] = i;
    }
    for (i = 0; i < 9; i++)
    {
        k = rand() % 9;
        tmp = xOrd[k];
        xOrd[k] = xOrd[i];
        xOrd[i] = tmp;
    }
}

bool Problem::fillFrom(int y, int val)
{
    int xOrd[9];
    initXOrd(xOrd);     //�ͦ���e�檺���y�ǦC 
    for (int i = 0; i < 9; i++)
    {
        int x = xOrd[i];
        if (set(x, y, val))
        {
            if (y == 8)           //��F�̫�@�� 
            {
                if (val == 9 || fillFrom(0, val + 1)) //��e��9�h�����A�_�h�q�U�@���U 
                    return true;
            }
            else
            {
                if (fillFrom(y + 1, val))   //�U�@���~����e�� 
                    return true;
            }
            reset(x, y); //�^�� 
        }
    }
    return false;
}

void Problem::digHole(int holeCnt)
{
    int idx[81];
    int i, k;
    for (i = 0; i < 81; i++)
    {
        hole[i / 9][i % 9] = 0;
        idx[i] = i;
    }
    for (i = 0; i < holeCnt; i++) //�H�����}��m 
    {
        k = rand() % 81;
        int tmp = idx[k];
        idx[k] = idx[i];
        idx[i] = tmp;
    }
    for (i = 0; i < holeCnt; i++)
    {
        hole[idx[i] / 9][idx[i] % 9] = 1;
    }
}

void Problem::printSudo()
{
    for (int y = 0; y < 9; y++)
    {
        (y % 3 == 0) ? (cout << "------------------------\n ") : (cout << " ");
        for (int x = 0; x < 9; x++)
        {
            (hole[y][x] == 0) ? (cout << sudo[y][x] << " ") : (cout << "  ");
            (x % 3 == 2) ? (cout << "| ") : (cout << "");
        }
        cout << endl;
    }
    cout << "------------------------\n";
}

void Problem::setAnswer(string newAnswer) {
    answer = newAnswer;
}

string Problem::getAnswer() {
    return answer;
}
