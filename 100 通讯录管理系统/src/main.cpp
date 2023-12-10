#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
#define MAX 1000
void shouMenu()
{
    cout << "*****************************" << endl;
    cout << "*****   1、添加联系人   *****" << endl;
    cout << "*****   2、显示联系人   *****" << endl;
    cout << "*****   3、删除联系人   *****" << endl;
    cout << "*****   4、查找联系人   *****" << endl;
    cout << "*****   5、修改联系人   *****" << endl;
    cout << "*****   6、清空联系人   *****" << endl;
    cout << "*****   0、退出通讯录   *****" << endl;
    cout << "*****************************" << endl;
} 
struct Person
{
    string m_Name;
    string m_Sex;
    int m_Age;
    int m_Phone;
    string m_Addr;
};
struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};
void addPerson(Addressbooks * abs)
{
    //判定通讯录是否满了，如果满了就不再添加
    if(abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        //添加具体联系人
        cout << "请输入姓名：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Name;
        cout << "请输入姓别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int sexx = 0;
        while(true)
        {
                cin >> sexx;
            if(sexx == 1||sexx == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sexx;
                break;
            }
                cout << "输入有误，请重新输入！" << endl;
                cout << "1 --- 男" << endl;
                cout << "2 --- 女" << endl;
        }
        cout << "请输入年龄：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Age;
        cout << "请输入电话：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Phone;
        cout << "请输入地址：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Addr;
        //更新通讯录的值
        abs->m_Size++;
        system("clear");
        cout << "添加成功！" << endl;
        system("sleep 2s");
        system("clear");
    }
}
void showPerson(Addressbooks *abs)
{
    if(abs->m_Size == 0)
    {
        cout << "当前记录为空" << endl;
    }
    else
    {
    for(int i = 0;i < abs->m_Size;i++)
    {
        cout << "姓名：" << abs->personArray[i].m_Name << "\t";
        cout << "性别：" << abs->personArray[i].m_Sex << "\t";
        cout << "年龄：" << abs->personArray[i].m_Age << "\t";
        cout << "电话：" << abs->personArray[i].m_Phone << "\t";
        cout << "地址：" << abs->personArray[i].m_Addr << "\t" << endl;
    }  
    }

}
//检测联系人是否存在，如果存在，返回联系人所在数组中具体位置，不存在返回-1
int isExist(Addressbooks *abs ,string name)
{
    for(int i = 0;i < abs->m_Size;i++)
    {
        if(abs->personArray[i].m_Name == name)
        {
            return i;//找到了，返回这个人在数组中的编号
        }
    }
    return -1;//如果遍历结束都没找到。返回-1
}
void deletePerson(Addressbooks *abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs ,name);
    if(ret != -1)
    {
        //查到此人，要进行删除工作
        for(int i = ret ;i < abs->m_Size;i++)
        {
            abs->personArray[i]=abs->personArray[i+1];
        }
        abs->m_Size--;//更新通讯录人员数
        system("clear");
        cout << "删除成功！" << endl;;
    }
    else
    {
        cout << "查无此人！" << endl;
    }
}
void findPerson(Addressbooks *abs)
{
    cout << "请输入要查找的联系人" << endl;
    string name;
    cin >> name;
    //判断联系人是否存在
    int ret = isExist(abs,name);
    if(ret != -1)
    {
        cout << "姓名" << abs->personArray[ret].m_Name << "\t";
        cout << "性别" << abs->personArray[ret].m_Sex << "\t";
        cout << "年龄" << abs->personArray[ret].m_Age << "\t";               
        cout << "电话" << abs->personArray[ret].m_Phone << "\t";
        cout << "地址" << abs->personArray[ret].m_Addr << "\t" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
}
void modifyPerson(Addressbooks *abs)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs ,name);
    if(ret != -1)
    {
        cout << "请输入姓名" << endl;
        cin >> abs->personArray[ret].m_Name;
        cout << "请输入性别" << endl;
        cin >> abs->personArray[ret].m_Sex;
        cout << "请输入年龄" << endl;
        cin >> abs->personArray[ret].m_Age;
        cout << "请输入电话" << endl;
        cin >> abs->personArray[ret].m_Phone;
        cout << "请输入地址" << endl;
        cin >> abs->personArray[ret].m_Addr;
    }
    else
    {
        cout << "查无此人" << endl;
    }


}
void ClearPerson(Addressbooks *abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空！" << endl;
    system("sleep 01s");
    system("clear");
}
int main()
{
    Addressbooks abs;//创建通信录
    abs.m_Size = 0;


    int select = 0;
    while(true)
    {
        shouMenu();
        cin >> select;
        switch(select)
        {
        case 1://1、添加联系人
            addPerson(&abs);//利用地址传递，修饰实参

            break;
        case 2://2、显示联系人
            showPerson(&abs);
            break;
        case 3://3、删除联系人
        {
            // cout << "请输入删除联系人姓名：" << endl;
            // string name;
            // cin >> name;
            // if(isExist(&abs,name) == -1)
            // {
            //     cout << "查无此人" << endl;
            // }
            // else
            // {
            //     cout << "找到此人" << endl;
            // }
            deletePerson(&abs);
        }
            
            break;
        case 4://4、查找联系人
        findPerson(&abs);
            break;
        case 5://5、修改联系人
        modifyPerson(&abs);
            break;
        case 6://6、清空联系人
        ClearPerson(&abs);
            break;
        case 0://0、退出通讯录
            cout << "欢迎下次使用" << endl;
            
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
