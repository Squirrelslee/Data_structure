#pragma once

#define ERROR 0
#define OK 1
#define MAXSIZE 20

template <class T>
class arrayStack
{
public:
    T data[MAXSIZE];
    arrayStack()
    {
        top_one = 0;
        top_two = MAXSIZE - 1;
    }
    int size(arrayStack<T> L){return L.top_one + MAXSIZE - 1 - L.top_two;}
    bool push(arrayStack<T> *L, T e, int x)
    {
        if(L->top_one == L->top_two)
        return ERROR;
        if(x == 1)
        {
            L->data[L->top_one] = e;
            L->top_one++;
        }
        else
        {
            L->data[L->top_two] = e;
            L->top_two--;
        }
    }
    T pop(arrayStack<T> *L, int x)
    {
        if(x == 1)
        {
        if(L->top_one == -1)
        return ERROR;
        L->top_one--;
        return L->data[L->top_one];
        }
        else
        {
        if(L->top_two == MAXSIZE)
        return ERROR;
        L->top_two++;
        return L->data[L->top_two];
        }
    }
    int top_one;
    int top_two;
private:
};