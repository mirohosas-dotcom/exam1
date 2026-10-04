#pragma once
class Participant
{
protected:
    const char* name;
    double maxRun;
    double maxJump;

public:
    Participant(const char* name, double maxRun, double maxJump);

    virtual void run();
    virtual void jump();

    const char* getName();

    double getMaxRun();
    double getMaxJump();

    virtual ~Participant();
};