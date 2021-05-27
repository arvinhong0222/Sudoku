#include "Start.h"
Start::Start() {

}
Start::Start(Problem newProblem, Player newPlayer) {
	setProblem(newProblem);
	setPlayer(newPlayer);
}
void Start::setProblem(Problem newProblem) {
	problem = newProblem;
}
Problem Start::getProblem() {
	return problem;
}
void Start::setPlayer(Player newPlayer) {
	player = newPlayer;
}
Player Start::getPlayer() {
	return player;
}
void Start::toString() {
		player.setGameDifficulty();
		if (player.getGameDifficulty() == 1) {
			while (!problem.fillFrom(0, 1));
			problem.digHole(15);
			problem.printSudo();
		}
		else if (player.getGameDifficulty() == 2) {
			while (!problem.fillFrom(0, 1));
			problem.digHole(35);
			problem.printSudo();
		}
		else if (player.getGameDifficulty() == 3) {
			while (!problem.fillFrom(0, 1));
			problem.digHole(50);
			problem.printSudo();
		}

		const int size = 9;
		int answer[size][size];
		cout << "\nPlease enter your answer:\n";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cin >> answer[i][j];
			}
		}
		problem.setSudokuAnswer(answer);
		problem.getSudokuAnswer();

		while (problem.getAnswer() == "Wrong answer") {
			cout << "\nPlease re-enter your answer:\n";
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cin >> answer[i][j];
				}
			}
			problem.setSudokuAnswer(answer);
			problem.getSudokuAnswer();
		}

		cout << "-------------" << endl;
		cout << "| Game over |" << endl;
		cout << "-------------" << endl;
		/*cout << "�O�_�n�~��C��?\n";
		cout << "1:�O, 0:�_\n";
		string play;
		cin >> play;
		player.setPlay(play);*/
}