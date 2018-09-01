#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Victory {

private:
	int gameID;
	int vicID;
	string vicName;
	int vicPoints;

public:
	Victory(int vid, string name, int points)
	{
		vicID = vid;
		vicName = name;
		vicPoints = points;
	}

	int getID()
	{
		return vicID;
	}
};
