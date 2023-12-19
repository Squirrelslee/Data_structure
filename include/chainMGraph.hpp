#pragma once 
#include <iostream>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 9
#define MAXEDGE 15
#define MAXVEX 9

template <class T>
class chainQueue
{
public:
    int front;
    int rear;
    T data[MAXSIZE];
    chainQueue():front(0),rear(0){}
    void Insert(T e)
    {
        if((rear + 1)%MAXSIZE == front)
        return;
        data[rear] = e;
        rear = (rear + 1)%MAXSIZE;
    }
    void Delete()
    {
        if(rear == front)
        return;
        front = (front + 1)%MAXSIZE;
    }
    bool Empty()
    {
        if(front == rear)
        return TRUE;
        return FALSE;
    }
};

class EdgeNode//结点
{
public:

    int adjvex;
    int weight;
    EdgeNode *next;
    EdgeNode():adjvex(0),weight(0),next(nullptr){}
};

class VertexNode//边结点
{
public:
    int in;//入度
    char data;
    EdgeNode *firstedge;
};


class GRAPH
{
public:

    VertexNode GL[MAXVEX];//为每条边申请边结点
    bool visited[MAXSIZE];
    char vexs[MAXVEX];//顶点表
    int arc[MAXVEX][MAXVEX];//边表
    int numVertexes,numEdges;
    GRAPH()
    {
        int i, j;
        numEdges=15;
        numVertexes=9;

        /* 读入顶点信息,建立顶点表 */ 
        vexs[0]='A';
        vexs[1]='B';
        vexs[2]='C';
        vexs[3]='D';
        vexs[4]='E';
        vexs[5]='F';
        vexs[6]='G';
        vexs[7]='H';
        vexs[8]='I';

        for (i = 0; i < numVertexes; i++)/* 初始化图 */
        {
            for ( j = 0; j < numVertexes; j++)
            {
                arc[i][j]=0;
            }
        }
        arc[0][1]=1;
        arc[0][5]=1;
        arc[1][2]=1; 
        arc[1][8]=1; 
        arc[1][6]=1; 
        arc[2][3]=1; 
        arc[2][8]=1; 	
        arc[3][4]=1;
        arc[3][7]=1;
        arc[3][6]=1;
        arc[3][8]=1;
        arc[4][5]=1;
        arc[4][7]=1;
        arc[5][6]=1; 	
        arc[6][7]=1;
        for(i = 0; i < numVertexes; i++)
        {
            for(j = i; j < numVertexes; j++)
            {
                arc[j][i] = arc[i][j];
            }
        }
    }
    void creatGraph()
    {
        int i, j;
        for(i = 0; i < numVertexes; i++)//为每一个顶点赋处值
        {
            GL[i].in = 0;
            GL[i].data = vexs[i];
            GL[i].firstedge = nullptr;
        }
        for(i = 0; i < numVertexes; i++)
        {
            for(j = 0; j < numVertexes; j++)
            {
                EdgeNode *e = new EdgeNode;//将指针e开辟到对堆区
                if(arc[i][j] == 1)
                {
                if (i==1 && j==8) 
					e->adjvex=6;
				else if (i==1 && j==6) 
					e->adjvex=8;
				else
					e->adjvex=j;
                    e->next = GL[i].firstedge;//指向空
                    GL[i].firstedge = e;
                }
            }
        }

    }
    void DFS(int i)
    {
        EdgeNode *p;
        visited[i] = TRUE;
        std::cout << GL[i].data;
        p = GL[i].firstedge;
        while(p)
        {
            if(!visited[p->adjvex])
                DFS(p->adjvex);
                p = p->next;
        }
    }
    void DFSTraverse()
    {
        int i;
        for(i = 0; i < numVertexes; i++)
        visited[i] = FALSE;
        for(i = 0; i < numVertexes; i++)
            if(!visited[i])
            DFS(i);
    }
    void BFSTraverse()
    {
        int i;
        EdgeNode *p;
        chainQueue<int> Q;
        for(i = 0; i < numVertexes; i++)
            visited[i] = FALSE;
        for(i = 0; i < numVertexes; i++)
        {
            if(!visited[i])
            {
                p = GL[i].firstedge;
                visited[i] = TRUE;
                std::cout << GL[i].data;
                Q.Insert(i);
                while(!Q.Empty())
                {
                    Q.Delete();

                    while(p)
                    {
                        if(!visited[p->adjvex])
                        {
                            visited[p->adjvex] = TRUE;
                            std::cout << GL[p->adjvex].data;
                            Q.Insert(p->adjvex);
                        }
                        p = p->next;
                    }
                }
            }
        }
    }
};