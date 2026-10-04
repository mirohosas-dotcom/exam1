#include <iostream>
#include "Human.h"
using namespace std;
Human::Human(const char* name, double maxRun, double maxJump)
    : Participant(name, maxRun, maxJump)
{
}

void Human::run()
{
    cout << name << " людина біжить" << endl;
}

void Human::jump()
{
    cout << name << " людина стрибає" << endl;
}