#pragma once
#include "Participant.h"
class Human : public Participant
{
public:
    Human(const char* name, double maxRun, double maxJump);

    void run();
    void jump();
};