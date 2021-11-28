#include "Header.h"


void HangmanView::displayHangman(HangmanModel m)
{
	if (m.lives == 8)
		return;
	if (m.lives == 7)
	{
		cout << " _______      " << endl;
		cout << " |/           " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 6)
	{
		cout << " _______      " << endl;
		cout << " |/    |      " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 5)
	{
		cout << " _______      " << endl;
		cout << " |/    |      " << endl;
		cout << " |     O      " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 4)
	{
		cout << " ________     " << endl;
		cout << " |/     |     " << endl;
		cout << " |      O      " << endl;
		cout << " |      |      " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 3)
	{
		cout << " ________     " << endl;
		cout << " |/     |     " << endl;
		cout << " |      O     " << endl;
		cout << " |     /|     " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 2)
	{
		cout << " ________     " << endl;
		cout << " |/     |     " << endl;
		cout << " |      O     " << endl;
		cout << " |     /|\\   " << endl;
		cout << " |            " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 1)
	{
		cout << " ________     " << endl;
		cout << " |/     |     " << endl;
		cout << " |      O     " << endl;
		cout << " |     /|\\   " << endl;
		cout << " |     /      " << endl;
		cout << " |            " << endl;
		cout << " ---------    " << endl;
	}
	if (m.lives == 0)
	{
		cout << " ________  " << endl;
		cout << " |/     |  " << endl;
		cout << " |      O  " << endl;
		cout << " |     /|\\" << endl;
		cout << " |     / \\" << endl;
		cout << " |         " << endl;
		cout << " ---------    " << endl;
		cout << "You lost better luck next time! " << endl;
	}
}
void HangmanView::displayCurrentProgress(HangmanModel m)
{
	cout << "Current state of your sentence is: " << m.GuessMovie << endl;
}
void HangmanView::displayUserLetters(char c, int it, string& usedLettersC, string& usedLettersF)
{
	int brC = 0, brF = 0;
	for (int i = 0; i < usedLettersC.size(); i++)
		if (c == usedLettersC[i])
			brC++;
	for (int i = 0; i < usedLettersF.size(); i++)
		if (c == usedLettersF[i])
			brF++;
	if (it < 0 && brF == 0) {
		usedLettersF += c;
		usedLettersF += ',';
	}
	else if (it >= 0 && brC == 0) {
		usedLettersC += c;
		usedLettersC += ',';
	}
	cout << "You used correct letters: " << usedLettersC << endl << "You used incorrect letters: " << usedLettersF << endl;
}