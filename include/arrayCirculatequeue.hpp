#pragma once 
#include <bits/stdc++.h>
#define MAXSIZE 5
#define ERROR 0
#define OK 1
template <class T>
class arrayCirculatequeue
{
public:
    int front;//头部标志
    int rear;//尾部标志
    T data[MAXSIZE];//防止两个标志重叠
    arrayCirculatequeue()
    {
        front = 0;
        rear = 0;
    }
    int size(){return (rear - front + MAXSIZE)%(MAXSIZE);}
    void EndQueue(T value)
    {
        if((rear + 1)%(MAXSIZE) == front)//队列已满
        {
            std::cout << "队列已满" << std::endl;
            return;
        }
        data[rear] = value;
        rear = (rear + 1)%(MAXSIZE);

    }
    void DeQueue()
    {
        if(front == rear)
        {
            std::cout << "队列为空" << std::endl;
            return;
        }
        front = (front + 1)%(MAXSIZE);
    }
};