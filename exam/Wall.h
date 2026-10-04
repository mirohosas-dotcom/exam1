#pragma once
#include "Obstacle.h"
class Wall : public Obstacle
{
public:
    Wall(const char* name, double height);

    bool pass(Participant* participant);
};