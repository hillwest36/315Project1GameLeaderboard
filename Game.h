#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Game {

private:
	int gameID;
	string gameName;
	vector<string> inGameNames;			//indeces for inGameNames will correspond to indeces of inGameIDs
	vector<int> inGameIDs;
	vector<Victory> victories;
	
public:
	Game(int id, string name)
	{
		gameID = id;
		gameName = name;
	}

	int getID()
	{
		return gameID;
	}

	vector<string> getIGN() 
	{
		return inGameNames;
	}

	vector<int> getIGID()
	{
		return inGameIDs;
	}
	
	vector<Victory> gameVictories()
	{
		return victories;
	}

	string getName()
	{
		return gameName;
	}
};
