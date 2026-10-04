#include <iostream>
#include "Wall.h"
using namespace std;
Wall::Wall(const char* name, double height)
    : Obstacle(name, height)
{
}

bool Wall::pass(Participant* participant)
{
    if (participant->getMaxJump() >= value)
    {
        participant->jump();

        cout << "Учасник " << participant->getName()
            << " пройшов перешкоду " << name
            << " на висоті " << value << ""
            << endl;

        return true;
    }

    cout << "Учасник " << participant->getName()
        << " не пройшов перешкод " << name
        << " на висоті " << value
        << " Пройдено " << participant->getMaxJump()
        << "" << endl;

    return false;
}