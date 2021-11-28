#ifndef _HEADER_H
#define _HEADER_H

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
class HangmanModel {
public:
	string movie;
	string GuessMovie;
	int lives = 8;
};
class  HangmanView {
public:
	void displayCurrentProgress(HangmanModel m);
	void displayUserLetters(char ch, int it, string& usedLettersC, string& usedLettersF);
	void displayHangman(HangmanModel m);
};
class HangmanController {
public:
	void userEntry(char& ch);
	void checkLetter(char ch, HangmanModel& m, int& it);
	void updateLives(HangmanModel m);
	void checkIfGameIsOver(HangmanModel m, char& ch);
};
#endif 

