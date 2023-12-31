
#include "arrayList.hpp"
#include "chainNode.hpp"
#include "arrayStack.hpp"
#include "chainNodeStack.hpp"
#include "arrayCirculatequeue.hpp"
#include "chainNodeQueue.hpp"
#include "chainbinaryTree.hpp"
#include "arrayMGraph.hpp"
#include "chainMGraph.hpp"
#include <iostream>
void test01()//线性表
{
    arrayList<int> SqList;
    SqList.InitList(&SqList);
    for(int i = 10; i >0; i--)
    {
        SqList.ListInsert(&SqList, 1, i);
    }
    int c;
    c = SqList.GetElem(SqList, 10);
    std::cout <<"第10位   " << c << std::endl;
    int sizeo = SqList.ListSize(SqList);
    std::cout <<"数组大小   " << sizeo << std::endl;
    SqList.ListDelete(&SqList, 5);
    sizeo = SqList.ListSize(SqList);
    std::cout <<"删除一位，数组大小    " << sizeo << std::endl;
    SqList.ListClear(&SqList);
    sizeo = SqList.ListSize(SqList);
    std::cout << "清空表,数组大小" << sizeo << std::endl;
}

void test02()//单链表
{
    chain<int> L(0);
    L.insert(0,7);
    L.insert(0,6);
    L.insert(0,5);
    L.insert(0,4);
    L.insert(0,3);
    L.insert(0,2);
    L.insert(0,1);
    std::cout << L.size() << std::endl;
    L.erase(3);
    std::cout << L.size() << std::endl;

    std::cout << L.get(0) << std::endl;

    std::cout << L << std::endl;
    L.clear();
    std::cout << L.size() << std::endl;
    chain<int> s;
}

void test03()//顺序栈，双向，单向用x = 1
{
    arrayStack<int> L;
    L.push(&L, 1, 1);
    L.push(&L, 2, 1);
    L.push(&L, 3, 1);
    L.push(&L, 4, 1);
    L.push(&L, 5, 1);
    L.push(&L, 1, 2);
    L.push(&L, 2, 2);
    L.push(&L, 3, 2);
    L.push(&L, 4, 2);
    L.push(&L, 5, 2);
    std::cout << L.size(L) << std::endl;
    for(int i = 0; i < 5; i++)
    std::cout << L.pop(&L, 1) << '\t' << L.pop(&L, 2) << std::endl;
}

void test04()//链栈
{
    LinkList<int> L;
    L.push(10);
    L.push(20);
    L.push(30);
    L.printfLink();
    L.size();
    L.pop();
    L.printfLink();
    L.size();
}

void test05()//循环顺序队列
{
    arrayCirculatequeue<int>L;
    std::cout << L.size() << std::endl;
    L.EndQueue(10);
    L.EndQueue(20);
    L.EndQueue(20);
    L.EndQueue(20);
    std::cout << "长度" << L.size() << std::endl;
    L.DeQueue();
    std::cout << "长度" << L.size() << std::endl;
    L.DeQueue();
    L.DeQueue();
    L.DeQueue();
    L.DeQueue();
}

void test06()//栈队列
{
    chainNodeQueue<int> L;
    L.pushback(10);
    L.pushback(20);
    L.pushback(30);
    L.pushback(40);
    L.printQueue();
    L.size();
    L.popfront();

    L.printQueue();
    L.popfront();

    L.popfront();
    L.size();

}

void test07()//二叉树
{

    BinaryTree<char> L;
    L.IsEmpty();
    L.CreatBinaryTree(L.head);
    std::cout << "前序遍历：";
    L.PreOrder(L.head);
    std::cout << std::endl;
    std::cout << "中序遍历：";
    L.InOrder(L.head);
    std::cout << std::endl;
    std::cout << "后序遍历：";
    L.PostOrder(L.head);
    std::cout << std::endl;    

}

void test08()//图矩阵
{
    std::string Vexs = "ABCDEFGHI";
    MGraph<char>G(Vexs);
    G.DFSTraverse();
    G.BFSTraverse();
    std::cout << std::endl;
}

void test09()//图链表
{
    chainQueue<int>L;
    GRAPH c;
    c.creatGraph();
    c.DFSTraverse();
    std::cout << std::endl;
    c.BFSTraverse();
    std::cout << std::endl;
}


int main()
{
    test09();
    return 0;
}