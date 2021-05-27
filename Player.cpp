#include "Player.h"
Player::Player() {
	gameDifficulty = 0;
	play = "1";
}
void Player::setGameDifficulty() {
	cout << "Please enter game difficulty:\n";
	cout << "1:Easy, 2:Normal, 3:Hard\n";
	cin >> gameDifficulty;
	while (gameDifficulty < 1 || gameDifficulty > 3) {
		cout << "Please re-enter the game difficulty\n";
		cout << "1:Easy, 2:Normal, 3:Hard\n";
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