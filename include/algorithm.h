/*
这里对leetcode经典算法进行记录，思考程序运行过程，是否还有改进
并写出每种算法的大O渐进时间
*/

#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime>

class RandomizedSet {
public:
    RandomizedSet();   
    bool insert(int val);   
    bool remove(int val);
    //将nums最后一位移动动需要删除的位置，保存下来，使用vector的尾删法删除
    //并且删除哈希val，
    int getRandom();
private:
    std::vector<int> nums;
    std::unordered_map<int, int> Random;
};