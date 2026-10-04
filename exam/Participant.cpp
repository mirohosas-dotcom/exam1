#include <iostream>
#include "Participant.h"
using namespace std;
Participant::Participant(const char* name, double maxRun, double maxJump)
{
    this->name = name;
    this->maxRun = maxRun;
    this->maxJump = maxJump;
}

void Participant::run()
{
    cout << name << " біжить" << endl;
}

void Participant::jump()
{
    cout << name << " стрибає" << endl;
}

const char* Participant::getName()
{
    return name;
}

double Participant::getMaxRun()
{
    return maxRun;
}

double Participant::getMaxJump()
{
    return maxJump;
}

Participant::~Participant()
{
}