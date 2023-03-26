#pragma once
#include <list>
#include <vector>
using namespace std;

class Game{

		private:
			vector<string> players;

			int places[6];
			int purses[6];

			bool inPenaltyBox[6];

			list<string> popQuestions;
			list<string> scienceQuestions;
			list<string> sportsQuestions;
			list<string> rockQuestions;

			unsigned int currentPlayer;
			bool isGettingOutOfPenaltyBox;

public:
	Game();
	bool isPlayable();
	bool add(string playerName);

	int howManyPlayers();
	void handleRoll(int roll);

	private:
		void askQuestion();
		string currentCategory();

				public:
					bool wasCorrectlyAnswered();
					bool wrongAnswer();

private:
	bool didPlayerWin();
};