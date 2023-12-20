/*
这里对leetcode经典算法进行记录，思考程序运行过程，是否还有改进
并写出每种算法的大O渐进时间
*/

#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>


class Pig
{
public:
    Pig(){}
    void Insert(int val);

private:
    std::unordered_map<int, std::string> pigone;
    std::vector<int> nums;
};