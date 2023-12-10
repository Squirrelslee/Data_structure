#pragma once
#include <string>
#include <iostream>
using namespace std;
class Gun
{
public:
    Gun(string type)
    {
        this->bullet_count = 0;
        this->_type = type;
    }
    void addBullet(int bullet_num);
    bool shoot();


private:
    string _type;
    int bullet_count;

};