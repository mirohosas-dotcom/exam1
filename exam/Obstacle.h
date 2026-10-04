#pragma once
#include "Participant.h"
class Obstacle
{
protected:
    const char* name;
    double value;

public:
    Obstacle(const char* name, double value);

    virtual bool pass(Participant* participant) = 0;

    const char* getName();
    double getValue();

    virtual ~Obstacle();
};