#include "Player.h"
Player::Player() {
	gameDifficulty = 0;
	play = "1";
}
void Player::setGameDifficulty() {
	cout << "請輸入遊戲難度:\n";
	cout << "1:簡單, 2:適中, 3:艱難\n";
	cin >> gameDifficulty;
	while (gameDifficulty < 1 || gameDifficulty > 3) {
		cout << "請重新輸入遊戲難度\n";
		cout << "1:簡單, 2:適中, 3:艱難\n";
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
