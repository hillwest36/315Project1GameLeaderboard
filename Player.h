#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {

private:
	int playerID;
	string playerName;
	vector<Victory> victories;
	vector<int> friends;

public:
	Player(int id, string n)
	{
		playerID = id;
		playerName = n;
	}

	int getID()
	{
		return playerID;
	}

	string getName()
	{
		return playerName;
	}

	vector<int> getFriends()
	{
		return friends;
	}

	vector<Victory> playerVictories()
	{
		return victories;
	}
};