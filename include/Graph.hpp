#pragma once
#include <queue>
#define TRUE 1
#define FALSE 0
#define MAXSIZE 9
#define MAXEDGE 15
#define MAXVEX 9
#include <string>



template <class T>
class ArrayGraph
{
public:
    ArrayGraph(){}//默认构造函数
    ArrayGraph(std::string x);
    T vexs[MAXSIZE];//顶点表
    int arc[MAXVEX][MAXVEX];//边表
    int numVertexes;//图中当前顶点数和边数
    void DFSTraverse();
    void DFS(int i);
    void BFSTraverse();
private:
    bool visited[MAXVEX];
    std::queue<int> que;
};
template <class T>
ArrayGraph<T>::ArrayGraph(std::string x)
{
    int i,j;
    for(i = 0; i < MAXSIZE; i++)
    vexs[i] = x[i];
    numVertexes = MAXSIZE;
    for(i = 0; i < numVertexes; i++)
    {
        for(j = 0; j < numVertexes; j++)
        {
            arc[i][j] = 0;
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
            arc[j][i] =arc[i][j];
        }
    }
}
template <class T>
void ArrayGraph<T>::DFSTraverse()
{
    for(int i = 0; i < numVertexes; i++)
        visited[i] = FALSE;
    for(int i = 0; i < numVertexes; i++)
        if(!visited[i])
        DFS(i);
    std::cout << std::endl;
}
template <class T>
void ArrayGraph<T>::DFS(int i)
{
    visited[i] = TRUE;
    std::cout << vexs[i];
    for(int j = 0; j < numVertexes; j++)
        if(arc[i][j] == 1 && !visited[j])
        DFS(j);
}
template <class T>
void ArrayGraph<T>::BFSTraverse()
{
    int i,j;
    for(i = 0; i < numVertexes; i++)
    visited[i] = FALSE;
    for(i = 0; i < numVertexes; i++)
    {
        if(!visited[i])
        {
            visited[i] = TRUE;
            std::cout << vexs[i];
            que.push(i);
            while(!que.empty())
            {
                i = que.front();//获取队头
                que.pop();//pop为void不返回值....
                for(j = 0; j < numVertexes; j++)
                {
                    if(arc[i][j] == 1 && !visited[j])
                    {
                        visited[j] = TRUE;
                        std::cout << vexs[j];
                        que.push(j);
                    }
                }
            }
        }
    }
}

template <class T>
class Chain_Node
{
public:
    Chain_Node<T>* next;
    Chain_Node(T value):next(nullptr),data(value){}
};
template <class T>
class Vex_Node
{
public:
    Vex_Node<T>* head;//顶点结点
    T data;
    int in;//入度
    int weight;//权重
};
template <class T1, class T2>
class Chain_Graph
{
public:
    Chain_Graph()
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
    void CreatGraph();
    Vex_Node<T1>* GL[MAXVEX];//用于存储顶点
    bool visited[MAXSIZE];
    char vexs[MAXVEX];//顶点表
    int arc[MAXVEX][MAXVEX];//边表
    int numVertexes,numEdges;
private:

};
template <class T1, class T2>
void Chain_Graph<T1, T2>::CreatGraph()
{
    int i,j;
    for(i = 0; i < MAXVEX; i++)
    {
        GL[i].data = vexs[i];
        GL[i].in = 0;
        GL[i].head = nullptr;
    }
    for(i = 0; i < numVertexes; i++)
    {
        for(j = 0; j < numVertexes; j++)
        {
            Chain_Node<T> *e = new EdgeNode;
            
        }
    }
}

