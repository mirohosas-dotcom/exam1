#include <iostream>
#include "Participant.h"
#include "Human.h"
#include "Cat.h"
#include "Robot.h"
#include "Obstacle.h"
#include "Treadmill.h"
#include "Wall.h"
using namespace std;
int main()
{
    system("chcp 65001");
    Participant* participants[3];
    participants[0] = new Human("Мирослав", 100, 2);
    participants[1] = new Cat("Кіт", 80, 3);
    participants[2] = new Robot("Робот", 150, 1.5);
    Obstacle* obstacles[3];
    obstacles[0] = new Treadmill("Бігова доріжка 1", 80);
    obstacles[1] = new Wall("Стіна 1", 2);
    obstacles[2] = new Treadmill("Бігова доріжка 2", 100);
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "========" << endl;
        cout << "Учасник: " << participants[i]->getName() << endl;
        cout << "========" << endl;
        bool active = true;
        for (int j = 0; j < 3; j++)
        {
            if (active == true)
            {
                active = obstacles[j]->pass(participants[i]);
            }
        }
        if (active == false)
        {
            cout << "Учасник " << participants[i]->getName()
                << " вибув з участі!" << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        delete participants[i];
    }
    for (int i = 0; i < 3; i++)
    {
        delete obstacles[i];
    }
}