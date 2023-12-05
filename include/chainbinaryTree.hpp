#pragma once 

int DataIndex = 0;
char* c = "ABCDH#K###E##CFI###G#J##0";
template <class T>
class BTNode//二叉结点
{
public:
    T data;
    BTNode<T>* lchild;//两个孩子
    BTNode<T>* rchild;
    BTNode(int value):data(value),lchild(nullptr),rchild(nullptr){}
};

template <class T>
class BinaryTree
{
public:
    BinaryTree():head(nullptr){}//初始化Tree
    void CreatBinaryTree(BTNode<T>* &temp);
    void IsEmpty();
    void PreOrder(BTNode<T>* temp);
    void InOrder(BTNode<T>* temp);
    void PostOrder(BTNode<T>* temp);
    BTNode<T>* head;
private:

};

template <class T>
void BinaryTree<T>::IsEmpty()
{
    if(head ==nullptr)
    std::cout << "二叉树为空！" << std::endl;
}

template <class T>
void BinaryTree<T>::CreatBinaryTree(BTNode<T>* &temp)//这个引用一定注意，修改head指向的孩子必须要引用
{
    T ch = c[DataIndex++];
    if(ch == '#')
    temp = nullptr;
    else
    {
        if(ch == '0')
        return;
        temp = new BTNode<T>(ch);

        temp->data = ch;
        CreatBinaryTree(temp->lchild);
        CreatBinaryTree(temp->rchild);
    }

}

template <class T>
void BinaryTree<T>::PreOrder(BTNode<T>* temp)//前序遍历
{
    if(temp == nullptr)
    return;
    std::cout << temp->data;
    PreOrder(temp->lchild);
    PreOrder(temp->rchild);
}

template <class T>
void BinaryTree<T>::InOrder(BTNode<T>* temp)//中序遍历
{
    if(temp == nullptr)
    return;
    InOrder(temp->lchild);
    std::cout << temp->data;
    InOrder(temp->rchild);
}

template <class T>
void BinaryTree<T>::PostOrder(BTNode<T>* temp)//后序遍历
{
    if(temp == nullptr)
    return;
    PostOrder(temp->lchild);
    PostOrder(temp->rchild);
    std::cout << temp->data;
}

