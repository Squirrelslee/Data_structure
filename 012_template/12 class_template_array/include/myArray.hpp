#pragma once
#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        //cout << "MyArray1" << endl;
        this->m_Capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_Capacity];
    }
    //拷贝构造
    MyArray(const MyArray& arr)
    {
        //cout << "MyArray2" << endl;
        this->m_Capacity = arr.m_Capacity;
        this->m_size = arr.m_size;
        //this->pAddress = arr.pAddress;
        //深拷贝
        this->pAddress = new T[arr.m_Capacity];

        //将arr中的数据都拷贝过来
        for(int i = 0;i<this->m_size;i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //operator=防止浅拷贝
    MyArray& operator=(const MyArray& arr)
    {
        //cout << "MyArray3" << endl;
        //先判断原来堆区是否有数据，如果有先释放
        if(this->pAddress != nullptr)
        {
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_Capacity = 0;
            this->m_size = 0;
        }
        this->m_Capacity = arr.m_Capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_Capacity];
        for(int i = 0; i < this->m_size;i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;

    }

    //尾插法
    void Push_Back(const T & val)
    {
        //判断容量是否等于大小
        if(this->m_Capacity == this->m_size)
        {
            return;
        }
        this->pAddress[this->m_size] = val;
        this->m_size++;//更新数组大小
    }
    //尾删法
    void Pop_Back()
    {
        //让用户访问不到最后一个元素，即为尾删
        if(this->m_size == 0)
        {
            return;
        }
        this->m_size--;
    }
    //通过下标方式访问数组中的元素
    T& operator[](int index)
    {
        return this->pAddress[index];
    }
    //返回数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }
    //返回数组大小
    int getSize()
    {
        return this->m_size;
    }

    ~MyArray()
    {

        if(this->pAddress != nullptr)
        {   
            //cout << "MyArray4" << endl;
            delete [] this->pAddress;
            this->pAddress = nullptr;
        }
    }

private:
    T * pAddress;//指针指向对区开辟的真实数组

    int m_Capacity;//数组容量

    int m_size;

};