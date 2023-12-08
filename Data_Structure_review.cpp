#include <iostream>
//增删查改复习
#define MAXSIZE 10
template <class T>
class ArrayList
{
public:
    ArrayList():len(0){}
    T data[MAXSIZE];
    int len;
    void Insert(int pos,T e);
    void push_back(T e);
    void printArrayList();
    void Delete(int pos);
    void Delete();//头删

};
template <class T>
void ArrayList<T>::Insert(int pos,T e)
{
    if(len == -1 || len == MAXSIZE)
    return;
    for(int i = len; i >= pos; i--)
    {
        data[i + 1] = data[i];
    }
        data[pos] = e;
        len++;
}
template <class T>
void ArrayList<T>::push_back(T e)
{
    if(len == MAXSIZE)
    return;
    data[len] = e;
    len++;
}
template <class T>
void ArrayList<T>::printArrayList()
{
    for(int i = 0; i < len; i++)
    std::cout << data[i];
    std::cout << std::endl;
}
template <class T>
void ArrayList<T>::Delete(int pos)
{
    if(pos < 0 || pos > MAXSIZE)
    return;
    for(int i = pos; i < MAXSIZE; i++)
    {
        data[i - 1] = data[i];
    }
    len--;
}
template <class T>
void ArrayList<T>::Delete()
{

    for(int i = 0; i < MAXSIZE; i++)
    data[i] = data[i + 1];
    len--;
}
void test01()//顺序表
{
    ArrayList<int>L;
    L.Insert(0,1);
    L.Insert(0,2);
    L.Insert(0,3);
    L.Insert(0,4);
    L.Insert(0,5);
    L.Insert(4,6);
    L.push_back(5);
    L.Delete(3);
    L.Delete();
    L.printArrayList();
}

template <class T>
class ChainNode
{
public:
    T data;//结点数据
    ChainNode<T> *next;//结点指针
    ChainNode(T value):next(nullptr),data(value){}//指针指空,将value赋值，如果赋值指针，在括号写入指针
};
template <class T>
class ChainList
{
public:
    int len;
    ChainList():head(nullptr),len(0){}//头指针指空
    void push_back(T e);
    void Insert(int pos, T e);
    void Delete(int pos);
    void pop_back();
    void clear();
    void PrintChainList();

    ~ChainList();

private:
    ChainNode<T> *head;
};
template <class T>
void ChainList<T>::push_back(T e)
{
    if(head == nullptr)
    head = new ChainNode<T>(e);//堆区开辟可以在构造函数初始化参数
    else
    {
        ChainNode<T> *current = head;
        while(current->next != nullptr)
            current = current->next;
            current->next = new ChainNode<T>(e);
    }
    len++;
}
template <class T>
void ChainList<T>::Insert(int pos, T e)
{
    if(pos < 0 || pos > len)
    {
        std::cout << "pos must be > 0 || < size" << std::endl;
        return;
    }
    ChainNode<T>* SecondNode = head;
    ChainNode<T>* temp = new ChainNode<T>(e);
    if(pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for(int i = 1; i < pos - 1; i++)
        SecondNode = SecondNode->next;//找到需要插入的位置
        temp->next = SecondNode->next;
        SecondNode->next = temp;
        len++;
    }
}
template <class T>
void ChainList<T>::Delete(int pos)
{
    if(pos < 0 || pos > len)
    {
        std::cout << "pos must be > 0 | < len" << std::endl;
        return;
    }
    else
    if(pos == 0)
    {
        head = head->next;
    }
    else
    {
        ChainNode<T>* current = head;
        for(int i = 0; i < pos - 1; i++)
        current = current->next;
        ChainNode<T>* temp;
        temp = current->next;
        current->next = temp->next;
        len--;
        delete temp;
    }
}
template <class T>
void ChainList<T>::pop_back()
{
    if(len == 1)
    head = nullptr;
    else
    {
        ChainNode<T>* current = head;
        while(current->next->next != nullptr)
        current = current->next;
        ChainNode<T>* temp = current->next;
        current->next = current->next->next;
        delete temp;
        len--;
    }
}
template <class T>
void ChainList<T>::clear()
{
    while(head != nullptr)
    {
        ChainNode<T>* nexthead = head->next;
        delete head;
        head = nexthead;
    }
    len = 0;
}
template <class T>
void ChainList<T>::PrintChainList()
{
    if(len == 0)
    {
        std::cout << "链空" << std::endl;
        return;
    }
    else
    {
        ChainNode<T> *current = head;
        while(current != nullptr)
        {
            std::cout << current->data;
            current = current->next;
        }
    }
}
template <class T>
ChainList<T>::~ChainList()
{

        while(head != nullptr)
        {
            ChainNode<T> * nexthead = head->next;
            delete head;
            head = nexthead;
        }
}
void test02()
{
    ChainList<int>L;
    L.push_back(1);
    L.pop_back();
    L.push_back(2);

    L.push_back(3);
    L.Insert(0,4);
    L.Delete(2);
    L.pop_back();
    L.clear();
    L.PrintChainList();
    std::cout << std::endl;



}

template <class T>
class ArrayStack
{
public:
    
    ArrayStack():len(-1){}
    void push_back(T e);
    void pop_back();
    void top(){
        if(len == -1)
        {
            std::cout << "Stack is empty!" << std::endl;
            return;
        }
        std::cout << data[len] << std::endl;}
private:
    T data[MAXSIZE];
    int len;
};
template <class T>
void ArrayStack<T>::push_back(T e)
{
    if(len - 1 == MAXSIZE)
    {
        std::cout << "Stack is full!" << std::endl;
        return;
    }
    len++;
    data[len] = e;

}
template <class T>
void ArrayStack<T>::pop_back()
{
    if(len == -1)
    {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }
    std::cout << data[len] << std::endl;
    len--;
}
void test03()
{
    ArrayStack<int>L;
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);
    L.push_back(4);
    L.push_back(5);
    L.pop_back();
    L.pop_back();
    L.pop_back();
    L.pop_back();
    L.pop_back();
    L.pop_back();
    L.push_back(1);
    L.pop_back();
}

template <class T>
class ChainStack
{
public:
    ChainStack():firstNode(nullptr){}
    void push_back(T e);
    void pop_back();
    void top();
    ~ChainStack();
private:
    ChainNode<T>* firstNode;
};
template <class T>
void ChainStack<T>::push_back(T e)
{
    if(firstNode == nullptr)
    firstNode = new ChainNode<T>(e);
    else
    {
        ChainNode<T>* current = firstNode;
        while(current->next != nullptr)
        current = current->next;
        current->next = new ChainNode<T>(e);//尾插入
    }

}
template <class T>
void ChainStack<T>::pop_back()
{
    if(firstNode == nullptr)
    {
        std::cout << "stack is empty!" << std::endl;
        return;
    }
    if(firstNode->next == nullptr)
    {
        std::cout << firstNode->data << std::endl;
        firstNode =nullptr;
    }
    else
    {
        ChainNode<T>* current = firstNode;
        while(current->next->next != nullptr)
        current = current->next;
        ChainNode<T>* temp = current->next;
        current->next = current->next->next;
        std::cout << temp->data << std::endl;
        delete temp;
    }

}
template <class T>
void ChainStack<T>::top()
{
    if(firstNode == nullptr)
    {
        std::cout << "Stack is empty!" << std::endl;
        return;
    }
    ChainNode<T>* current = firstNode;
    while(current->next != nullptr)
        current = current->next;
        std::cout << current->data << std::endl;
}
template <class T>
ChainStack<T>::~ChainStack()
{
    while(firstNode != nullptr)
    {
        ChainNode<T>*nextNode = firstNode->next;
        delete firstNode;
        firstNode = nextNode;
    }
}
void test04()
{
    ChainStack<int>L;
    L.push_back(1);
    L.push_back(2);
    std::cout << "top is : ";
    L.top();
    L.pop_back();
    L.pop_back();
    L.pop_back();
}

template <class T>
class ArrayQueue
{
public:
    ArrayQueue():front(0),rear(0){}
    T data[MAXSIZE];
    void push(T e);
    void pop();
    void size();
private:
    int front;
    int rear;
};
template <class T>
void ArrayQueue<T>::push(T e)
{
    if((rear + 1)%MAXSIZE == front)
    {
        std::cout << "Queue is full " << std::endl;
        return;
    }
    data[rear] = e;
    rear = (rear + 1)%MAXSIZE;
}
template <class T>
void ArrayQueue<T>::pop()
{
    if(rear == front)
    {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
    std::cout << "pop is "<<data[front] << '\t' << std::endl;
    front = (front + 1)%MAXSIZE;

}
template <class T>
void ArrayQueue<T>::size()
{
    std::cout << "Queue size is  " << (rear - front + MAXSIZE)%MAXSIZE << std::endl;
}
void test05()
{
    ArrayQueue<int>L;
    L.push(1);
    L.push(2);
    L.push(2);
    L.push(2);
    L.size();
    L.pop();
    L.pop();

}

template <class T>
class ChainQueue
{
public:
    ChainQueue():head(nullptr){}
    void push_back(T e);
    void pop_front();
    void top();
    ~ChainQueue();
private:
    ChainNode<T>* head;
};
template <class T>
void ChainQueue<T>::push_back(T e)
{
    if(head == nullptr)
    head = new ChainNode<T>(e);
    else
    {
        ChainNode<T>* current = head;
        while(current->next != nullptr)
            current = current->next;
            current->next = new ChainNode<T>(e);
    }
}
template <class T>
void ChainQueue<T>::pop_front()
{
    if(head == nullptr)
    {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
    if(head->next == nullptr)
    {
        std::cout << "Queue is " << head->data << std::endl;
        head = nullptr;
    }
    else
    {
        std::cout << "Queue is " << head->data << std::endl;
        head = head->next;
    }
}
template <class T>
void ChainQueue<T>::top()
{
    if(head == 0)
    {
        std::cout << "Queue is empty!" << std::endl;
        return;
    }
        std::cout << "top is   " << head->data << std::endl;
}
template <class T>
ChainQueue<T>::~ChainQueue()
{
    while(head != nullptr)
    {
        ChainNode<T>* nexthead = head->next;
        delete head;
        head = nexthead;
    }

}
void test06()
{
    ChainQueue<int>L;
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);
    L.pop_front();
    L.top();
}

template <class T>
class ChainTree
{
public:
    ChainTree(T c):lchild(nullptr),rchild(nullptr)
    {
        this->Tree = c;
    }
    T Tree;
private:
    ChainNode<T>* lchild;
    ChainNode<T>* rchild;

};
void test07()
{
    std::string c = "ABCDH#K###E##CFI###G#J##0";
    ChainTree<std::string>L(c);
}

int main()
{
    test07();
    return 0;
}
