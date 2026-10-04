#include <iostream>
#include "Obstacle.h"
Obstacle::Obstacle(const char* name, double value)
{
    this->name = name;
    this->value = value;
}

const char* Obstacle::getName()
{
    return name;
}

double Obstacle::getValue()
{
    return value;
}

Obstacle::~Obstacle()
{
}