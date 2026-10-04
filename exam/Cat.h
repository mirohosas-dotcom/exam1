#pragma once
#include "Participant.h"
class Cat : public Participant
{
public:
    Cat(const char* name, double maxRun, double maxJump);

    void run();
    void jump();
};