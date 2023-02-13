#pragma once

#include "House.h"

class HouseBuilder
{
public:
	virtual ~HouseBuilder() = default;
	virtual void buildWalls(House& house) {};
	virtual void buildDoors(House& house) {};
	virtual void buildWindows(House& house) {};
	virtual void buildRoof(House& house) {};
	virtual void buildFloor(House& house) {}
	virtual void buildGarage(House& house) {};
};

class HouseBuilderDefault final : public HouseBuilder
{
public:
	void buildWalls(House& house) override;
	void buildDoors(House& house) override;
	void buildWindows(House& house) override;
	void buildRoof(House& house) override;
	void buildFloor(House& house) override;
};

class HouseBuilderWithGarage final : public HouseBuilder
{
public:
	void buildWalls(House& house) override;
	void buildDoors(House& house) override;
	void buildWindows(House& house) override;
	void buildRoof(House& house) override;
	void buildGarage(House& house) override;
	void buildFloor(House& house) override;
};

class HouseBuilderRuins final : public HouseBuilder
{
public:
	void buildWalls(House& house) override;
	void buildDoors(House& house) override;
	void buildWindows(House& house) override;
	void buildFloor(House& house) override;
};


class Director
{
public:
	static void createHouse(HouseBuilder& builder, House& house)
	{
		builder.buildWalls(house);
		builder.buildDoors(house);
		builder.buildWindows(house);
		builder.buildRoof(house);
		builder.buildFloor(house);
		builder.buildGarage(house);
	}
};