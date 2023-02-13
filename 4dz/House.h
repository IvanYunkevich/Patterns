#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

constexpr size_t MaxHouseHeight = 9;
constexpr size_t MaxHouseWidth = 15;

class House : public DestroyableGroundObject
{
public:

	House();

	friend class HouseBuilderDefault;
	friend class HouseBuilderWithGarage;
	friend class HouseBuilderRuins;

	bool __fastcall isInside(double x1, double x2) const override;
	inline uint16_t GetScore() const override { return score; }
	void Draw() const override;

	size_t getHeight() const
	{
		return MaxHouseHeight;
	}

	size_t getWidth() const
	{
		return MaxHouseWidth;
	}

private:

	const uint16_t score = 40;
	char look[MaxHouseHeight][MaxHouseWidth];
};