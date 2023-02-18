#include <iostream>

#include "Bomb.h"
#include "MyTools.h"
#include "DestroyableGroundObject.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "*";
}

void __fastcall Bomb::Accept(const Visitor& v)
{
    v.log(*this);
}



DestroyableGroundObject* Bomb::CheckDestoyableObjects()
{
    for (DestroyableGroundObject* obs : obsVec)
    {
        const double x1 = x - width / 2.0;
        const double x2 = x1 + width;

        if (obs->isInside(x1, x2)) return obs;
    }

    return nullptr;
}

void Bomb::addObservers(DestroyableGroundObject* obj)
{
    obsVec.push_back(obj);
}
