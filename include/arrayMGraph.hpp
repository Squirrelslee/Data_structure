#pragma once
#define TRUE 1
#define FALSE 0

#define MAXSIZE 9//队列长度
#define MAXEDGE 15//边数
#define MAXVEX  9//顶点数
template<class T>
class Queue
{
public:
    T data[MAXSIZE];
    int front;//头指针
    int rear;//尾指针
    Queue():front(0),rear(0){}//初始化指针
    bool empty()
    {
        if(front == rear)
            return TRUE;
            return FALSE;
        

    }
    void Insert(T e)
    {
        if((rear + 1)%MAXSIZE == front)//队列满      
            return;
        data[rear] = e;
        rear = (rear + 1)%MAXSIZE;
    }
    int Delete()
    {
        if(front == rear)
        exit(0);
        front = (front + 1)%MAXSIZE;
        return data[front - 1];
    }
};
template <class T>
class MGraph
{
public:
    MGraph(){}//默认构造函数
    T vexs[MAXSIZE];//顶点表
    int arc[MAXVEX][MAXVEX];//边表
    int numVertexes,numEdges;//图中当前顶点数和边数
    MGraph(std::string x)
    {
        int i,j;
        for(i = 0; i < MAXSIZE; i++)
        vexs[i] = x[i];
        numVertexes = MAXSIZE;
        numEdges = MAXEDGE;
        for(i = 0; i < numVertexes; i++)//赋初值
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
    void DFS(int i)//邻接矩阵的深度优先递归算法
    {
        int j;
        visited[i] = TRUE;
        std::cout << vexs[i];
        for(j = 0; j < numVertexes; j++)
            if(arc[i][j] == 1 && !visited[j])
                DFS(j);
    }
    void DFSTraverse()
    {
        int i;
        for(i = 0; i < numVertexes; i++)
            visited[i] = FALSE;
        for(i = 0; i < numVertexes; i++)
            if(!visited[i])
            DFS(i);
        std::cout << std::endl;
    }
    void BFSTraverse()
    {
        int i, j;
        Queue<int>Q;
        for(i = 0; i < numVertexes;i++)
            visited[i] = FALSE;
        for(i = 0; i < numVertexes; i++)
        {
            if(!visited[i])
            {
                visited[i] = TRUE;
                std::cout << vexs[i];
                Q.Insert(i);
                while(!Q.empty())
                {
                    i = Q.Delete();
                    for(j = 0; j < numVertexes; j++)
                    {
                        if(arc[i][j] == 1 && !visited[j])
                        {
                            visited[j] = TRUE;
                            std::cout << vexs[j];
                            Q.Insert(j);
                        }
                    }
                }
            }
        }
    }

private:
    bool visited[MAXVEX];
};

