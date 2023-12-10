#include "Gun.h"
#include "Soldier.h"


void test01()
{
    Solider marklee("marklee");
    marklee.addGun(new Gun("AK47"));
    marklee.addBulletToGun(20);
    marklee.fire();
}


int main()
{
    test01();

    return 0;
}