#pragma onece//防止头文件重复
#include <iostream>
using namespace std;
#include "worker.h"
#include "Employee.h"
#include "Boss.h"
#include "Manager.h"
#include <fstream>

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
    WorkerManager();
    void Show_Menu();//展示菜单
    //退出系统
    void ExitSystem();
    //记录职工人数
    int m_EmpNum;
    //职工数组指针
    Worker** m_EmpArray;
    //添加职工函数
    void addEmp();
    //保存文件
    void save();
    //判断文件是否为空
    bool m_FileIsEmpty;
    //统计文件中人数
    int get_EmpNum();
    //初始化员工
    void init_Emp();
    void show_Emp();
    void Del_Emp();
    //判断职工是否存在  如果存在返回职工所在数组中的位置，不存在返回-1
    int IsExist(int id);
    //修改职工
    void Mod_Emp();
    ~WorkerManager();
private:

};