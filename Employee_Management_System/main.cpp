#include "workManager.h"
#include "worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <iostream>
using namespace std;

int main()
{


    // Worker* worker = NULL;
    // worker = new Employee(1,"mark",1);
    // worker->showInfo();
    // delete worker;
    // worker = new Manager(2,"squirrels",1);
    // worker->showInfo();
    // delete worker;
    // worker = new Boss(3,"makrlee",1);
    // worker->showInfo();
    // delete worker;
    WorkerManager wm;
    int choice = 0;
    while(true)
    {
        wm.Show_Menu();
        cout << "请输入您的选择" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0://退出系统
        wm.ExitSystem();
            break;
        case 1://增加员工
        wm.addEmp();
            break;
        case 2://显示员工
        wm.show_Emp();
            break;
        case 3://删除员工
        wm.Del_Emp();
            break;
        case 4://修改员工
        wm.Mod_Emp();
            break;
        case 5://查找员工
        
            break;
        case 6://按序排号
        
            break;
        case 7://清空员工
        
            break;
        default:
            system("clear");
            break;
        }

    }

    return 0;
}