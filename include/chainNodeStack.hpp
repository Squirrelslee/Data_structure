#pragma once 
#include <bits/stdc++.h>
#define ERROR 0
#define OK 1

template <class T>
class NodeStack
{
public:
    T data;
    NodeStack<T>* next;
    NodeStack(int value) : data(value), next(nullptr){}
};

template <class T>
class LinkList
{
public:
    LinkList():head(nullptr){}
    void push(T value)
    {
        NodeStack<T>* newNode = new NodeStack<T>(value);
        if(head == nullptr)//链表为空
        {
            head = newNode;//头指针指向newNode
        }
        else//链表不为空
        {
            NodeStack<T>* current = head;//申请指针指向头部从而找到指向空的指针
            while(current->next != nullptr)//从头部开始
            {
                current = current->next;//直到指针指向空
            }
            //指针指向空时
                current->next = newNode;//指向堆区的value变量

        }       
    }
    void pop()
    {
        NodeStack<T>* second = head;//接受头指针
        if(head == nullptr)
        {return;}
        else
        if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        while(second->next->next != nullptr)//找到指向空的指针的前两个指针
        {
            second = second->next;
        }
        delete second->next;
        second->next = nullptr;
    }
    void size()
    {
        NodeStack<T>* sizeo = head;
        int i = 1;
        while(sizeo->next != nullptr)
        {
            sizeo = sizeo->next;
            i++;
        }
        std::cout << "栈内存 =    " << i << std::endl; 
    }
    void printfLink()
    {
        NodeStack<T>* printLink = head;
        while(printLink!= nullptr)
        {
            std::cout << printLink->data << '\t';
            printLink = printLink->next;
        }
        std::cout << std::endl;
    }
    ~LinkList()//析构
    {
        //使用指针指向头部
        NodeStack<T>* current = head;
        NodeStack<T>* next;
        while(current != nullptr)//循环从头部开始删除指针
        {
            next = current->next;//使用next指针保存当前指针指向的下一个指针
            delete current;//删除当前指针
            current = next;//在赋值当前指针将指向下一个指针
        }
    }
private:
    NodeStack<T>* head;

};