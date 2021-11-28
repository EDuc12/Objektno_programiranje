#include "Header.h"


void HangmanController::updateLives(HangmanModel m)
{
	cout << "\nYou have " << m.lives << " lives left!" << endl;
}
void HangmanController::userEntry(char& c)
{
	cout << "Input letter or number you want: " << endl;
	cin >> c;
	if (!isalpha(c) || !isdigit(c))
		while (!isalpha(c) && !isdigit(c))
		{
			cout << "Wrong input! " << endl;
			cout << "Input letter or number: " << endl;
			cin >> c;
		}
}
void HangmanController::checkLetter(char c, HangmanModel& m, int& it)
{
	char cc;
	it = m.movie.find(c);
	if (it < 0)
	{
		it = m.movie.find(toupper(c));
		if (it < 0)
			m.lives--;
		else
			for (int i = 0; i < m.movie.size(); i++)
			{
				cc = c;
				if (isupper(m.movie[i]))
				{
					if (m.movie[i] == toupper(cc)) {
						cc = toupper(cc);
						swap(m.GuessMovie[i], cc);
					}
				}
				cc = c;
				if (m.movie[i] == c)
					swap(m.GuessMovie[i], cc);
			}
	}
	else
		for (int i = 0; i < m.movie.size(); i++)
		{
			cc = c;
			if (isupper(m.movie[i]))
			{
				if (m.movie[i] == toupper(cc)) {
					cc = toupper(cc);
					swap(m.GuessMovie[i], cc);
				}
			}
			cc = c;
			if (m.movie[i] == c)
				swap(m.GuessMovie[i], cc);
		}
}
void HangmanController::checkIfGameIsOver(HangmanModel m, char& c)
{
	if (m.movie == m.GuessMovie)
		cout << "\n\nCongratulations, you won!" << endl;
	if (m.lives == 0 || m.movie == m.GuessMovie)
	{
		cout << "\nDo you wanna play again?" << endl;
		cout << "If yes press 'Y' else press 'N': " << endl;
		cin >> c;
		while (c != 'y' && c != 'n')
		{
			cout << "Wrong input!" << endl;
			cout << "If you wanna continue press 'Y' else press 'N'!" << endl;
			cin >> c;
		}
	}
}