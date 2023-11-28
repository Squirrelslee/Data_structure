#include <bits/stdc++.h>
#include "arrayList.hpp"
#include "chainNode.hpp"

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

int main()
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    test02();
    return 0;
}