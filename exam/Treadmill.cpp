#include <iostream>
#include "Treadmill.h"
using namespace std;
Treadmill::Treadmill(const char* name, double length)
    : Obstacle(name, length)
{
}

bool Treadmill::pass(Participant* participant)
{
    if (participant->getMaxRun() >= value)
    {
        participant->run();

        cout << "Учасник " << participant->getName()
            << " пройшов перешкоду " << name
            << " на дистанції " << value << ""
            << endl;

        return true;
    }

    cout << "Учасник " << participant->getName()
        << " не пройшов перешкоду " << name
        << " на дистанції " << value
        << " Пройдено " << participant->getMaxRun()
        << "" << endl;

    return false;
}