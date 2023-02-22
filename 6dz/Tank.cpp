#include <iostream>
#include <Windows.h>
#include "Tank.h"
#include "MyTools.h"
#include <future>

using namespace std;
using namespace MyTools;

bool Tank::isInside(double x1, double x2) const
{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void Tank::Draw() const
{
	MyTools::SetColor(CC_Brown);
	GotoXY(x, y - 3);
	cout << "       ___";
	GotoXY(x - 2, y - 2);
	cout << "o=======(   )";
	GotoXY(x, y - 1);
	cout << "  _-|=======_";
	GotoXY(x, y);
	cout << " (O_0_O_0_O_0)";

future<void> th(async(launch::async, &Tank::Tank_Messsage, this));
}

void Tank::Tank_Messsage() const {
	//Sleep(1000);
	int x = rand() % 5;
	pMediator->Message(messages[x]);
}

Tank::Tank() {
	messages.push_back("You're in deep trouble");
	messages.push_back("Pray for mercy");
	messages.push_back("I will kill you!");
	messages.push_back("Fear me!");
	messages.push_back("Boo");
}
