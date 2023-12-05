#pragma once

template <class T>
class NodeQueue
{
public:

    T data;
    NodeQueue<T>* next;
    NodeQueue(T value):data(value), next(nullptr){}
};

template <class T>
class chainNodeQueue
{
public:
    chainNodeQueue():head(nullptr){}
    void pushback(T value)
    {
        if(head == nullptr)
        {
            head = new NodeQueue<T>(value);
        }
        else
        {
            NodeQueue<T>* current = head;
            while(current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new NodeQueue<T>(value);
        }
    }
    void size()
    {
        if(head == nullptr)
        {
            std::cout << "链队列为空" << std::endl;
            return;
        }
        NodeQueue<T>* sizeo = head;
        int i = 1;
        while(sizeo->next != nullptr)
        {
            sizeo = sizeo->next;
            i++;
        }
        std::cout << "链队列大小 = " << i << std::endl;
    }
    void popfront()
    {
        if(head == nullptr)
        {
            std::cout << "链队列为空" << std::endl;
            return;
        }
        if(head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            NodeQueue<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void printQueue()
    {
        if(head == nullptr)
        {
            std::cout << "链队列为空" << std::endl;
            return;
        }
        NodeQueue<T>* current = head;
        std::cout <<"链队列为：";
        while(current != nullptr)
        {
            std::cout << current->data << '\t';
            current = current->next;
        }
        std::cout << std::endl;
    }
    ~chainNodeQueue()
    {
        NodeQueue<T>* current = head;
        NodeQueue<T>* next;
        while(current!= nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }
private:
    NodeQueue<T>* head;
};

