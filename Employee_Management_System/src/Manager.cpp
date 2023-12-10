#include "Manager.h"

    Manager::Manager(int id, string name, int did)
    {
        this->m_Id = id;
        this->m_Name = name;
        this->m_DeptId = did;
    }

    //显示个人信息
    void Manager::showInfo()
    {
        cout << "职工编号：" << this->m_Id
         << "\t职工姓名：" << this->m_Name 
         << "\t职工部门：" << this->getDeptName()
         << "\t岗位职责：完成Boss交给的任务分配任务给员工" << endl;
    }
    
    //获取岗位
    string Manager::getDeptName()
    {
        return string("经理");
    }
