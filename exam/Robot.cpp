#include <iostream>
#include "Robot.h"
using namespace std;
Robot::Robot(const char* name, double maxRun, double maxJump)
    : Participant(name, maxRun, maxJump)
{
}

void Robot::run()
{
    cout << name << " робот біжить" << endl;
}

void Robot::jump()
{
    cout << name << " робот стрибає" << endl;
}