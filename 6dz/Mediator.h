#pragma once

#include <iostream>
#include <vector>

class LevelGUI;

class Mediator
{
public:
	void Message(std::string m);
private:
	LevelGUI* mt;
};
