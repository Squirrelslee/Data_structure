#pragma once 

#define OK 1
#define ERROR 0

template <class T>
struct chainNode
{
public:
    //数据成员
    T element;
    chainNode<T> *next;

    //方法
    chainNode(){}
    chainNode(const T& element)
    {
        this->element = element;
    }
    chainNode(const T& element, chainNode<T>* next)
    {
        this->element = element;
        this->next = next;
    }
};

template <class T>
class chain : public chainNode<T>
{
public:
    chain(int initialCapacity = 10);
    chain(const chain<T>&);
    ~chain();

    //ADT
    bool empty() const {return listSize == 0;};
    int size() const {return listSize;}
    T& get(int theIndex) const;
    int indexOf(const T& theElement) const;
    void erase(int theIndex);
    void insert(int theIndex, const T& theElement);
    void output(std::ostream& out) const;
    void clear();
protected:
    chainNode<T>* firstNode;
    int listSize;
};

template <class T>
chain<T>::chain(int initialCapacity)
{//构造函数
    if(initialCapacity < 1)
    {
        std::ostringstream s;
        s << "Initial capacity = " << initialCapacity << "Must be > 0";
    }
    firstNode = nullptr;
    listSize = 0;
}
template <class T>
chain<T>::chain(const chain<T>& theList)
{//拷贝构造
    listSize = theList.listSize;

    if(listSize == 0)
    {
        firstNode = nullptr;
        return;
    }
    chainNode<T>* sourceNode = theList.firstNode;
    firstNode = new chainNode<T>(sourceNode->element);
    sourceNode = sourceNode->next;
    chainNode<T>* targetNode = firstNode;
    while (sourceNode != nullptr)
    {
        targetNode->next = new chainNode<T>(sourceNode->element);
        targetNode = targetNode->next;
        sourceNode = sourceNode->next;
    }
    targetNode->next = nullptr;
}
template <class T>
chain<T>::~chain()
{
    while (firstNode != nullptr)
    {
        chainNode<T>* nextNode = firstNode->next;
        delete firstNode;
        firstNode = nextNode;
    }
}
template <class T>
T& chain<T>::get(int theIndex) const
{
    chainNode<T>* currentNode = firstNode;
    for(int i = 0; i < theIndex; i++)
    currentNode = currentNode->next;
    return currentNode->element;
}
template <class T>
void chain<T>::insert(int theIndex, const T& theELement)
{
    if(theIndex < 0 || theIndex > listSize)
    {
        std::ostringstream s;
        s << "index = " << theIndex << " size = " << listSize;
    }
    if(theIndex == 0)
        firstNode = new chainNode<T>(theELement, firstNode);
    else
    {
        chainNode<T>* p = firstNode;
        for(int i = 0; i < theIndex - 1; i++)
        p = p->next;
        p->next = new chainNode<T>(theELement, p->next);
    }
    listSize++;
}
template <class T>
void chain<T>::erase(int theIndex)
{
    chainNode<T>* deleteNode;
    if(theIndex == 0)
    {
        deleteNode = firstNode;
        firstNode = firstNode->next;
    }
    else
    {
        chainNode<T>* p = firstNode;
        for(int i = 0; i < theIndex - 1; i++)
        p = p->next;
        deleteNode = p->next;
        p->next = p->next->next;
    }
    listSize--;
    delete deleteNode;
}
template <class T>
void chain<T>::output(std::ostream& out) const
{
    for(chainNode<T>* currentNode = firstNode;
    currentNode != nullptr;
    currentNode = currentNode->next)
    out << currentNode->element << " ";
}
template <class T>
std::ostream& operator<<(std::ostream& out, const chain<T>& x)
{
    x.output(out);return out;
}
template <class T>
void chain<T>::clear()
{
    while(firstNode != nullptr)
    {
        chainNode<T>* nextNode = firstNode->next;
        delete firstNode;
        firstNode = nextNode;
    }
    listSize = 0;
}
