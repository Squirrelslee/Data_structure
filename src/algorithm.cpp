#include "algorithm.h"
RandomizedSet::RandomizedSet()
{
    srand((unsigned)time(nullptr));
}

bool RandomizedSet::insert(int val)
{
    if(Random.count(val))//存在不插入
    return false;
    int index = nums.size();
    nums.emplace_back(val);
    Random[val] = index;//下标，用于在vector中获取val
    return true;
}
bool RandomizedSet::remove(int val)
{
    if(!Random.count(val))//不存在
    return false;
    int index = Random[val];//获取哈希下标
    int last = nums.back();//数组最后一位
    nums[index] = last;//将最后一位赋值给index
    Random[last] = index;//
    nums.pop_back();
    Random.erase(val);
    return true;
}
int RandomizedSet::getRandom() {
    int randomIndex = rand()%nums.size();
    return nums[randomIndex];
}
