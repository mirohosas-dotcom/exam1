#pragma once
#include "Obstacle.h"
class Treadmill : public Obstacle
{
public:
    Treadmill(const char* name, double length);

    bool pass(Participant* participant);
};