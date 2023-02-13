
#include <iostream>

#include "House.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

House::House()
{
	for (size_t i = 0; i < MaxHouseHeight; ++i)
	{
		for (size_t j = 0; j < MaxHouseWidth; ++j)
		{
			look[i][j] = ' ';
		}
	}
}

bool House::isInside(double x1, double x2) const
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

void House::Draw() const
{
	MyTools::SetColor(CC_Yellow);
	for (size_t i = 0; i < MaxHouseHeight; ++i)
	{
		GotoXY(x, y - i);
		for (size_t j = 0; j < MaxHouseWidth; ++j)
		{
			cout << look[MaxHouseHeight - i - 1][j];
		}
	}
}