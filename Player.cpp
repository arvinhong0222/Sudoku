#include "Player.h"
Player::Player() {
	gameDifficulty = 0;
	play = "1";
}
void Player::setGameDifficulty() {
	cout << "�п�J�C������:\n";
	cout << "1:²��, 2:�A��, 3:�}��\n";
	cin >> gameDifficulty;
	while (gameDifficulty < 1 || gameDifficulty > 3) {
		cout << "�Э��s��J�C������\n";
		cout << "1:²��, 2:�A��, 3:�}��\n";
		cin >> gameDifficulty;
	}
}
int Player::getGameDifficulty() const {
	return gameDifficulty;
}
void Player::setPlay(string newPlay) {
	play = newPlay;
}
string Player::getPlay() const {
	return play;
}
