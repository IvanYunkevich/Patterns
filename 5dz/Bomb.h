#pragma once

#include "DynamicObject.h"
#include <vector>

class DestroyableGroundObject;

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // ñòîèìîñòü áîìáû â î÷êàõ

	void Draw() const override;

	void Accept(const Visitor& v) override;

	DestroyableGroundObject* CheckDestoyableObjects();

	void addObservers(DestroyableGroundObject* obj);

private:

	std::vector<DestroyableGroundObject*> obsVec;

};
