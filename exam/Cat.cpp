#include <iostream>
#include "Cat.h"
using namespace std;
Cat::Cat(const char* name, double maxRun, double maxJump)
    : Participant(name, maxRun, maxJump)
{
}

void Cat::run()
{
    cout << name << " кіт біжить" << endl;
}

void Cat::jump()
{
    cout << name << " кіт стрибає" << endl;
}