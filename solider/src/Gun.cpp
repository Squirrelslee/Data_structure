#include "Gun.h"

void Gun::addBullet(int bullet_num)
{
    this->bullet_count+=bullet_num;
}
bool Gun::shoot()
{
    if(this->bullet_count<=0)
    {
        cout << "There is no bullet!" << endl;
        return false;
    }
    this->bullet_count-=1;
    cout << "shoot successdully!" << endl;
    return true;
}