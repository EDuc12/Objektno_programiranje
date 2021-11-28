#include "Header.h"

void main()
{
	HangmanView v;
	HangmanModel m;
	HangmanController c;
	int it;
	fstream fp, fp1;
	int play = 0;
	string usedLettersC, usedLettersF;
	char ch;
	int seek = 0;
	fp.open("movies.txt");
	fp1.open("movies.txt");
	while (fp)
	{
		getline(fp, m.movie);
		m.GuessMovie = 8;
		usedLettersC.clear();
		usedLettersF.clear();
		m.GuessMovie.clear();
		for (int i = 0; i < m.movie.size(); i++)
		{
			if (!isalpha(m.movie[i]) && !isdigit(m.movie[i]))
				m.GuessMovie += m.movie[i];
			else
				m.GuessMovie += '*';
		}
		for (m.lives; m.lives != 0 && m.movie != m.GuessMovie;)
		{
			c.updateLives(m);
			c.userEntry(ch);
			c.checkLetter(ch, m, it);
			v.displayCurrentProgress(m);
			v.displayUserLetters(ch, it, usedLettersC, usedLettersF);
			v.displayHangman(m);
			c.checkIfGameIsOver(m, ch);
		}
		if (ch == 'y')
		{
			if (m.lives == 0)
			{
				cout << "Do you wanna try same sentence?" << endl;
				cout << "If yes press 'Y' else press 'N': " << endl;
				cin >> ch;
				while (ch != 'y' && ch != 'n')
				{
					cout << "Wrong input!" << endl;
					cout << "If you wanna same press 'Y' else press 'N'!" << endl;
					cin >> ch;
				}
				if (ch == 'y')
					fp.seekg(seek);
				else
					seek += m.movie.size();
			}
			else
				seek += m.movie.size();
		}
		else
			break;
	}
}