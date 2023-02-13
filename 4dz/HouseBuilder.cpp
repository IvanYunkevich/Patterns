#include "House.h"
#include "HouseBuilder.h"

void HouseBuilderDefault::buildWalls(House& house)
{
    for (size_t i = 2; i < house.getHeight() - 1; ++i)
    {
        house.look[i][1] = '|';
        house.look[i][house.getWidth() - 6] = '|';
    }
}

void HouseBuilderDefault::buildDoors(House& house)
{
    for (size_t i = 6; i < house.getHeight() - 1; ++i)
    {
        house.look[i][3] = '#';
    }
}

void HouseBuilderDefault::buildWindows(House& house)
{
    for (size_t i = 4; i < 6; ++i)
    {
        house.look[i][5] = '#';
        house.look[i][6] = '#';
    }
}

void HouseBuilderDefault::buildRoof(House& house)
{
    for (size_t i = 1; i < 10; ++i)
    {
        house.look[0][i] = '-';
    }
    for (size_t i = 0; i < 11; ++i)
    {
        house.look[1][i] = '-';
    }
}

void HouseBuilderDefault::buildFloor(House& house)
{
    for (size_t i = 1; i < 10; ++i)
    {
        house.look[8][i] = '_';
    }
}

void HouseBuilderWithGarage::buildWalls(House& house)
{
    for (size_t i = 2; i < house.getHeight() - 1; ++i)
    {
        house.look[i][1] = '|';
        house.look[i][house.getWidth() - 6] = '|';
    }
}

void HouseBuilderWithGarage::buildDoors(House& house)
{
    for (size_t i = 6; i < house.getHeight() - 1; ++i)
    {
        house.look[i][6] = '#';
    }
}

void HouseBuilderWithGarage::buildWindows(House& house)
{
    for (size_t i = 4; i < 6; ++i)
    {
        house.look[i][3] = '#';
        house.look[i][4] = '#';
    }
}

void HouseBuilderWithGarage::buildRoof(House& house)
{
    for (size_t i = 1; i < 10; ++i)
    {
        house.look[0][i] = '-';
    }
    for (size_t i = 0; i < 11; ++i)
    {
        house.look[1][i] = '-';
    }
}

void HouseBuilderWithGarage::buildGarage(House& house)
{
    for (size_t i = 10; i < house.getWidth(); ++i)
    {
        house.look[5][i] = '-';
    }
    for (size_t i = 6; i < house.getHeight() - 1; ++i)
    {
        house.look[i][house.getWidth() - 1] = '|';
    }
}

void HouseBuilderWithGarage::buildFloor(House& house)
{
    for (size_t i = 1; i < MaxHouseWidth; ++i)
    {
        house.look[8][i] = '_';
    }
}

void HouseBuilderRuins::buildWalls(House& house)
{
    for (size_t i = 2; i < house.getHeight() - 1; ++i)
    {
        house.look[i][1] = '|';
    }

    for (size_t i = 4; i < house.getHeight() - 1; ++i)
    {
        house.look[i][house.getWidth() - 1] = '|';
    }
}

void HouseBuilderRuins::buildDoors(House& house)
{
    for (size_t i = 6; i < house.getHeight() - 1; ++i)
    {
        house.look[i][11] = '#';
    }
}

void HouseBuilderRuins::buildWindows(House& house)
{
    for (size_t i = 4; i < 6; ++i)
    {
        house.look[i][5] = '#';
        house.look[i][6] = '#';
        house.look[i][7] = '#';
    }
}

void HouseBuilderRuins::buildFloor(House& house)
{
    for (size_t i = 1; i < MaxHouseWidth; ++i)
    {
        house.look[8][i] = '_';
    }
}