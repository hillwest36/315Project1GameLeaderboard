// GameLeaderboard.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "Victory.h"
#include "Game.h"
#include "Player.h"
using namespace std;

//GIVEN COMMANDS--------------------------------

class GameLeaderboard
{
private:
	vector<Game> Games;
	vector<Player> Players;

public:
	GameLeaderboard() {};

	void AddPlayer(int pID, string pName)
	{
		Player newPlayer(pID, pName);
		Players.push_back(newPlayer);
	};

	void AddGame(int gID, string gName)
	{
		Game newGame(gID, gName);
		Games.push_back(newGame);
	};

	void AddVictory(int gID, int vID, string vName, int vPoints)
	{
		Victory newVictory(vID, vName, vPoints);

		for (int i = 0; i < Games.size(); i++)
		{
			if (gID == Games.at(i).getID())
			{
				Games.at(i).gameVictories().push_back(newVictory);
			}
		}
	};

	void Plays(int pID, int gID, string pIGN)
	{
		pIGN = '"' + pIGN + '"';
		for(int i = 0; i < Games.size(); i++)
		{
			if (gID = Games.at(i).getID())		//Compares given game ID to the list of games, looking for a match;
			{
				Games.at(i).getIGN().push_back(pIGN);
				Games.at(i).getIGN().push_back(pIGN);	
			}

			return;
		}
	};

	void AddFriends(int pID1, int pID2)
	{
		int numPlayersUpdated = 0;
		for (int i = 0; i < Players.size(); i++)
		{
			if (pID1 == Players.at(i).getID())
			{
				Players.at(i).getFriends().push_back(pID2);
				numPlayersUpdated++;
			}
			else if (pID2 == Players.at(i).getID())
			{
				Players.at(i).getFriends().push_back(pID1);
				numPlayersUpdated++;
			}

			if (numPlayersUpdated == 2)
			{
				return;
			}
		}
	};

	void WinVictory(int pID, int gID, int vID)
	{
		for (int i = 0; i < Players.size(); i++)
		{
			if (pID == Players.at(i).getID())
			{
				for (int j = 0; j < Players.at(i).playerVictories().size(); j++)	//Finds the correct Player, then searches through given Player's Victories
				{
					if (vID == Players.at(i).playerVictories().at(j).getID());
					{
						return;			//Return if Victory ID is already present
					}
				}

				for (int j = 0; j < Games.size(); j++)		//Finds the correct Game
				{
					if (gID == Games.at(j).getID())
					{
						for (int k = 0; k < Games.at(j).gameVictories().size(); k++)	//Finds the Victory within that Game
						{
							if (vID == Games.at(j).gameVictories().at(k).getID())
							{
								Players.at(i).playerVictories().push_back(Games.at(j).gameVictories().at(k));	//Adds the Victory to the Player's Victories
							}
						}
					}
				}
			}
		}
	};

	void FriendsWhoPlay(int pID, int gID)
	{
		int gameIndex = 0;
		int playerIndex = 0;

		for (int i = 0; i < Games.size(); i++)		//Find Game index
		{
			if (gID == Games.at(i).getID())
			{
				gameIndex = i;
				return;
			}
		}

		for (int i = 0; i < Players.size(); i++)	//Find Player index
		{
			if (pID == Players.at(i).getID())
			{
				playerIndex = i;
				return;
			}
		}

		for (int i = 0; i < Players.at(playerIndex).getFriends().size(); i++)	//Loop through friend IDs
		{
			for (int j = 0; j < Games.at(gameIndex).getIGID().size(); j++)		//Loop through in-game IDs
			{
				if (Players.at(playerIndex).getFriends().at(i) == Games.at(gameIndex).getIGID().at(j))	//IF friend ID == in-game ID
				{
					cout << Players.at(i).getName() << endl;		//Prints name of friend who plays
				}
			}
		}
	};

	void ComparePlayers(int pID1, int pID2, int gID)
	{
		int gameIndex = 0;

		for (int i = 0; i < Games.size(); i++)
		{
			if (gID == Games.at(i).getID())
			{
				gameIndex = i;
			}
		}


	};

	void SummarizePlayer(int pID)
	{

	};

	void SummarizeGame(int gID)
	{

	};

	void SummarizeVictory(int vID)
	{

	};

	void VictoryRanking()
	{

	};

};

//MAIN METHOD-----------------------------------------------------

int main()
{
	GameLeaderboard gl();

	System::Console::WriteLine("Still working");

	return 0;
}



