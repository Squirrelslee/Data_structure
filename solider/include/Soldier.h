#pragma once
#include "Gun.h"
#include <string>
#include <iostream>
using namespace std;

class Solider

{
public:
    Solider(string name);
    ~Solider();
    void addBulletToGun(int num);
    void addGun(Gun* _ptr_gun);
    bool fire();
private:
    string _name;
    Gun *_ptr_gun;
};