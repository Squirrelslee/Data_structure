#include "workManager.h"

WorkerManager::WorkerManager()
{
    //文件不存在
    ifstream ifs;
    ifs.open(FILENAME,ios::in);//读文件
    if(!ifs.is_open())
    {
        cout << "文件不存在" << endl;
        this->m_EmpNum = 0;
        this->m_EmpArray = nullptr;
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if(ifs.eof())
    {
        //文件为空
        cout << "文件为空！" << endl;
        this->m_EmpNum = 0;
        this->m_EmpArray = nullptr;
        this->m_FileIsEmpty = true;
        ifs.close();
        return;
    }
    int num =  this->get_EmpNum();
    cout << "职工人数为：" << num << endl;
    this->m_EmpNum = num;
    //开辟空间
    this->m_EmpArray = new Worker*[this->m_EmpNum];
    //将文件中的数据，存到数组中
    this->init_Emp();
    // for(int i = 0;i < this->m_EmpNum ;i++)
    // {
    //     cout << "职工编号：" << this->m_EmpArray[i]->m_Id
    //          << "职工姓名：" << this->m_EmpArray[i]->m_Name
    //          << "职工部门：" << this->m_EmpArray[i]->m_DeptId << endl;
    // }

}
void WorkerManager::Show_Menu()

{
    cout << "***********************************" << endl;
    cout << "*******欢迎使用职工管理系统********" << endl;
    cout << "**********0.退出管理程序***********" << endl;
    cout << "**********1.增加员工信息***********" << endl;
    cout << "**********2.显示员工信息***********" << endl;
    cout << "**********3.删除离职信息***********" << endl;
    cout << "**********4.修改职工信息***********" << endl;
    cout << "**********5.查找职工信息***********" << endl;
    cout << "**********6.按照编号排序***********" << endl;
    cout << "**********7.清空所有文档***********" << endl;
    cout << "***********************************" << endl;
}
void WorkerManager::ExitSystem()
{
    cout << "欢迎下次使用!" << endl;
    exit(0);
}
void WorkerManager::addEmp()
{
    cout << "请输入添加职工数量：" << endl;

    int addNum = 0;//保存用户的输入数量

    cin >> addNum;

    if(addNum > 0)
    {
        //计算添加新空间大小
        int newSize = this->m_EmpNum + addNum;//新空间人数 = 原来记录人数 + 新增人数
        //开辟空间
        Worker** newspace = new Worker*[newSize];
        //将原来空间下数据，拷贝到新空间下
        if(this->m_EmpArray != nullptr)
        {
            for(int i = 0;i < this->m_EmpNum; i++)
            {
                newspace[i] = this->m_EmpArray[i];
            }
        }
        for (int i = 0 ;i < addNum ;i++)
        {
            int id;//职工编号
            string name;//职工姓名
            int dSelect;//部门选择

            cout << "请输入第" << i+1 << "个新员工编号" << endl;
            cin >> id;
            cout << "请输入第" << i+1 << "个新员工姓名" << endl;
            cin >> name;
            cout << "请选择该职工岗位" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;
            Worker *worker = nullptr;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(id , name ,1);
                break;
            case 2:
                worker = new Manager(id , name ,2);
                break;
            case 3:
                worker = new Boss(id , name ,3);
                break;                        
            default:
                break;
            }
            //将创建职工指针，保存到数组中
            newspace[this->m_EmpNum + i] = worker;
        }
        //释放原有空间        
        delete [] this->m_EmpArray;
        //更改空间指向
        this->m_EmpArray = newspace;

        //更新新的职工人数
        this->m_EmpNum = newSize;
        //更新职工不为空标志
        this->m_FileIsEmpty = false;
        //提示添加成功
        this->save();//保存数据到文件中
        cout << "成功添加" << addNum << "名新职工" << endl;

    }
    else
    {
        cout << "输入有误！" << endl;
    }

}
void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);//用输出的方式打开文件--写文件
    //将每个人的数据写入到文件中
    for(int i = 0;i <this->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_Name << " "
            << this->m_EmpArray[i]->getDeptName() << endl;
    }
    //关闭文件
    ofs.close();
}
int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME ,ios::in);
    int id;
    string name;
    int did;
    int num = 0;
    while(ifs >> id && ifs >> name && ifs >> did)
    {
        num++;
    }
    return num;

}
void WorkerManager::init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME,ios::in);

    int id;
    string name;
    int did;
    int index;
    while(ifs >> id && ifs >> name && ifs >> did)
    {
        Worker *worker = nullptr;

        if(did == 1) //普通员工
        {
            worker = new Employee(id , name , did);
        }
        else if(did == 2)
        {
            worker = new Manager(id , name ,did);
        }
        else
        {
            worker = new Boss(id , name , did);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
}
void WorkerManager::show_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout << "文件不存在或记录为空！" << endl;
    }
    else
    {
        for(int i = 0; i < this->m_EmpNum ; i++)
        {
            //利用多态调用程序接口
            this->m_EmpArray[i]->showInfo();
        }
    }
}
void WorkerManager::Del_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout << "文件不存在或记录为空" << endl; 
    }
    else
    {
        //按照职工编号删除
        cout << "请输入想要删除职工编号" << endl;
        int id = 0;
        cin >> id;
        int index = this->IsExist(id);
        if(index != -1)//说明职工存在，并且要删除掉index位置上的职工
        {
            for(int i = index ;i <this->m_EmpNum - 1 ;i++)
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            //更新数组中记录人员个数
            //数据同步更新到文件中
            this->save();
            cout << "删除成功！" << endl;

            this->m_EmpNum--;
        }
        else
        {
            cout << "删除失败，未找到该员工" << endl;
        }
    }
}
int WorkerManager::IsExist(int id)
{
    int index = -1;
    for(int i = 0 ;i < this->m_EmpNum ; i++)
    {
        if(this->m_EmpArray[i]->m_Id == id)
        {
            index = i;
            break;
        }
    }
    return index;

}
void WorkerManager::Mod_Emp()
{
    if(this->m_FileIsEmpty)
    {
        cout << "文件不存在或者记录为空" << endl;
    }
    else
    {
        cout << "请输入修改职工编号：" << endl;
        int id;
        cin >> id;
        int ret = this->IsExist(id);
        if(ret != -1)
        {
            //查找到编号的职工
            delete this->m_EmpArray[ret];
            int newid = 0;
            string newName = "";
            int dSelect = 0;
            cout << "查到：" << id << "号职工，请输入新职工号：" << endl;
            cin >> newid;
            cout << "请输入姓名：" << endl;
            cin >> newName;
            cout << "请选择该职工岗位" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> dSelect;

            Worker* worker = nullptr;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(newid , newName ,1);
                break;
            case 2:
                worker = new Manager(newid , newName ,2);
                break;
            case 3:
                worker = new Boss(newid , newName ,3);
                break;                        
            default:
                break;
            }            
            this->m_EmpArray[ret] = worker;

            cout << "修改成功" << endl;

            //保存文件中
            this->save();
        }
        else
        {
            cout << "查无此人！" << endl;
        }
    }
}
WorkerManager::~WorkerManager()
{
    if(this->m_EmpArray != nullptr)
    {

    delete [] this->m_EmpArray;
    this->m_EmpArray = nullptr;
    }

}