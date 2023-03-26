#include "Game.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <deque>

using namespace std;

Game::Game() : places{}, purses{}, currentPlayer(0){
	for (int i = 0; i < 50; i++)
	{
		{
		ostringstream oss (ostringstream::out);
		oss << "Pop Question " << i;

		popQuestions.push_back(oss.str());
		}

		{
		ostringstream oss (ostringstream::out);
		oss << "Science Question " << i;

		scienceQuestions.push_back(oss.str());
		}

		{
		ostringstream oss (ostringstream::out);
		oss << "Sports Question " << i;
		sportsQuestions.push_back(oss.str());
		}

		{
		ostringstream oss (ostringstream::out);
		oss << "Rock Question " << i;
		rockQuestions.push_back(oss.str());
		}
	}
}

bool Game::add(string playerName){
	players.push_back(playerName);
	places[howManyPlayers()] = 0;
	purses[howManyPlayers()] = 0;
	inPenaltyBox[howManyPlayers()] = false;

	cout << playerName << " was added" << endl;
	cout << "They are player number " << players.size() << endl;
	return true;
}

int Game::howManyPlayers()
{
	return players.size();
}

void Game::handleRoll(int roll)
{
	cout << players[currentPlayer] << " is the current player" << endl;
	cout << "They have rolled a " << roll << endl;

	if (inPenaltyBox[currentPlayer])
	{
		if (roll % 2 == 1)
		{
			isGettingOutOfPenaltyBox = true;

			cout << players[currentPlayer] << " is getting out of the penalty box" << endl;
			places[currentPlayer] += roll;
			if (places[currentPlayer] > 11) places[currentPlayer] -= 12;

			cout << players[currentPlayer] << "'s new location is " << places[currentPlayer] << endl;
			cout << "The category is " << currentCategory() << endl;
			askQuestion();
		}
		else
		{
			cout << players[currentPlayer] << " is not getting out of the penalty box" << endl;
			isGettingOutOfPenaltyBox = false;
		}

	}
	else
	{
		places[currentPlayer] = ((places[currentPlayer] + roll) % 12);
		
		places[currentPlayer] = places[currentPlayer] + roll;
		if (places[currentPlayer] > 11) places[currentPlayer] = places[currentPlayer] - 12;

		cout << players[currentPlayer] << "'s new location is " << places[currentPlayer] << endl;
		cout << "The category is " << currentCategory() << endl;
		askQuestion();
	}

}

void Game::askQuestion()
{

    // Map to store category strings and their question lists. In this way, code is cleaner and easier to expand.
    unordered_map<string, list<string>> questionMap = {
        {"Pop", popQuestions},
        {"Science", scienceQuestions},
        {"Sports", sportsQuestions},
        {"Rock", rockQuestions}
    };
    
    // Get current category
    string current = currentCategory();
    
    // If category is in map, print front of question list and remove it
    if (questionMap.count(current))
    {
        list<string>& questionList = questionMap[current];
        cout << questionList.front() << endl;
        questionList.pop_front();
    }
	else {
		throw ("Error, category not found.");
	}

}


string Game::currentCategory()
{
	vector<string> categories = {"Pop", "Science", "Sports", "Rock"};
	
	return categories[places[currentPlayer] % 4];
}

bool Game::wasCorrectlyAnswered()
{
	if (inPenaltyBox[currentPlayer])
	{
		if (isGettingOutOfPenaltyBox)
		{
			cout << "Answer was correct!!!!" << endl;
			purses[currentPlayer]++;
			cout << players[currentPlayer]
			     << " now has "
			     << purses[currentPlayer]
				<<  " Gold Coins." << endl;

			bool winner = didPlayerWin();
			currentPlayer++;
			if (currentPlayer == players.size()){
				currentPlayer = 0;
			}

			return winner;
		}
		else
		{
			currentPlayer++;
			if (currentPlayer == players.size()){
				currentPlayer = 0;
			}
			return true;
		}



	}
	else
	{

		cout << "Answer was correct!!!!" << endl;
		purses[currentPlayer]++;
		cout << players[currentPlayer]
				<< " now has "
				<< purses[currentPlayer]
			<< " Gold Coins." << endl;

		bool winner = didPlayerWin();
		currentPlayer++;
		if (currentPlayer == players.size()){
			currentPlayer = 0;
		} 

		return winner;
	}
}

bool Game::wrongAnswer()
{
	cout << "Question was incorrectly answered" << endl;
	cout << players[currentPlayer] << " was sent to the penalty box" << endl;
	inPenaltyBox[currentPlayer] = true;

	currentPlayer++;
	if (currentPlayer == players.size()){
		currentPlayer = 0;
	}
	return true;
}


bool Game::didPlayerWin()
{
	return !(purses[currentPlayer] == 6);
}