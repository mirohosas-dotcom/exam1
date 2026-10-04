#pragma once
#include "Participant.h"
class Robot : public Participant
{
public:
    Robot(const char* name, double maxRun, double maxJump);

    void run();
    void jump();
};