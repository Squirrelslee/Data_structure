#pragma once
#define TRUE 1
#define FLASE 0

#define MAXSIZE 9//队列长度
#define MAXEDGE 15//边数
#define MAXVEX  9//顶点数

template <class T>
class MGraph
{
public:
    T vexs[MAXSIZE];//顶点表
    int arc[MAXVEX][MAXVEX];//边表
    int numVertexes,numEdges;//图中当前顶点数和边数
};
template<class T>
class Queue
{
public:
    T data[MAXSIZE];
    int front;//头指针
    int rear;//尾指针
    Queue():front(0),rear(0){}//初始化指针
    void empty()
    {
        if(front == rear)
        std::cout << "队列为空！" << std::endl;
    }
    void Insert(T e)
    {
        if((rear + 1)%MAXSIZE == front)//队列满
        std::cout << "队列已满！" << std::endl;
    }
};
