#pragma once

#include <vector>
#include "LevelGUI.h"
#include "Plane.h"
#include "Bomb.h"
#include "Ground.h"
#include "Tank.h"

class SBomber
{
public:

    SBomber();
    ~SBomber();
    
    inline bool GetExitFlag() const { return exitFlag; }

    void ProcessKBHit();
    void TimeStart();
    void TimeFinish();

    void DrawFrame();
    void MoveObjects();
    void CheckObjects();
    void AnimateScrolling();
private:

    void CheckPlaneAndLevelGUI();
    void CheckBombsAndGround();
    void __fastcall CheckDestoyableObjects(Bomb* pBomb);

    void __fastcall DeleteDynamicObj(DynamicObject * pBomb);
    void __fastcall DeleteStaticObj(GameObject* pObj);

    Ground * FindGround() const;
    Plane * FindPlane() const;
    LevelGUI * FindLevelGUI() const;
    std::vector<DestroyableGroundObject*> FindDestoyableGroundObjects() const;
    std::vector<Bomb*> FindAllBombs() const;

    void DropBomb();
    void DropDoubleBomb();
    std::vector<DynamicObject*> vecDynamicObj;
    std::vector<GameObject*> vecStaticObj;
    
    bool exitFlag;

    uint64_t startTime, finishTime, passedTime;
    uint16_t bombsNumber, deltaTime, fps;
    int16_t score;
    static const size_t ScrollHeight = 30;
    static const size_t ScrollWidth = 30;
    inline static const char* ppScroll[ScrollHeight] =
    {   "                      ",
        "                      ",
        " Project manager:     ",
        "   Ivan Ivanovich     ",
        "                      ",
        " Developers:          ",
        "   Nikolay Ivanovich  ",
        "   Dmitriy Ivanovich  ",
        "   Eva Ivanovich      ",
        "                      ",
        " Designers:           ",
        "   Anna Ivanovich     ",
        "   Elena Ivanovich    ",
        "                      ",

    };
};