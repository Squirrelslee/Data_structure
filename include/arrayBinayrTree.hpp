#pragma once 
#include <bits/stdc++.h>
#define MAXSIZE 100 //存储空间初始分配量
#define MAX_TREE_SIZE 100 //二叉最大结点数
#define ERROR 0
#define OK 1
class Position
{
public:
    int level, order;//结点的层，本层序号(按满二叉树计算)
};

template <class T>
class arrayBinaryTree
{
public:
    T Tree[MAX_TREE_SIZE];
    arrayBinaryTree()
    {
        init = 0;
        for(int i = 0; i < MAX_TREE_SIZE; i++)
        Tree[i] = init;//构造空二叉树，假定0为空
    }
protected:

private:
    T init;
};