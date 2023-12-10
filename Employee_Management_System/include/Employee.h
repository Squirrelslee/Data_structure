#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee:public Worker
{
public:
    Employee(int id, string name, int did);

    //显示个人信息
    void showInfo();
    
    //获取岗位
    string getDeptName();



};