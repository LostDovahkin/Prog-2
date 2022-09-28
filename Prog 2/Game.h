#pragma once


using namespace std;

class Game
{
private:
	int choice;
	bool playing;

public:
	Game();
	virtual ~Game();

	void Map();


	inline bool getPlaying() const { return this->playing; }

};

#pragma once
