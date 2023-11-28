#pragma once
#include <bits/stdc++.h>

#define MAXSIZE 20
#define OK 1
#define ERROR 0
typedef int ElemType;
template<class T>
class arrayList
{
public:
    T data[MAXSIZE];
    int length;
    void InitList(arrayList<T> *L);
    T GetElem(arrayList<T> L, int i);
    T ListInsert(arrayList<T> *L, int i, T e);
    bool ListDelete(arrayList<T> *L, int i);
    int ListSize(arrayList<T> L);
    void ListClear(arrayList<T> *L);
};

template <class T>
void arrayList<T>::InitList(arrayList<T> *L)//一定要初始化数组长度，否则访问就会出错！！！
{
    L->length = 0;
}
template <class T>
T arrayList<T>::GetElem(arrayList<T> L, int i)
{
    if(L.length == 0 || i > L.length)
    return ERROR;
    return L.data[i - 1];
}
template <class T>
T arrayList<T>::ListInsert(arrayList<T> *L, int i, T e)
{
    int k;
    if(L->length == MAXSIZE)//表满了停止，动态扩展的意思在vector中便是，MAXSIZE这个量视为变量，乘以2
    return ERROR;
    if(i < 1 || i > L->length + 1)//当i在第一位前或者最大位后
    return ERROR;
    if(i <= L->length)//若插入数据位置不在表尾
    {
        for(k = L->length - 1; k >= i -1; k--)//将要插入位置后的元素向后移一位
            L->data[k + 1] = L->data[k];//不难发现，k为最后一位，k+1为最后一位的后一位，依次挪动
    }
    L->data[i - 1] = e;
    L->length++;
    return OK;
}
template <class T>
bool arrayList<T>::ListDelete(arrayList<T> *L, int i)//删除第i个元素
{
    int k;
    if(L->length == 0)//表为空
    return ERROR;
    if(i < 1 || i > L->length)
    return ERROR;
    if(i < L->length)
    {
        for(k = i; k < L->length; k++)
        L->data[k - 1] = L->data[k];
    }
    L->length--;
    return OK;
}
template <class T>
int arrayList<T>::ListSize(arrayList<T> L)
{
    return L.length;
}
template <class T>
void arrayList<T>::ListClear(arrayList<T> *L)//可以发现数组中length为0，代表清空表
{
    L->length = 0;
}