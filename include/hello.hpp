#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // 在链表尾部添加节点
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // 删除链表最后一个节点
    void popBack() {
        if (head == nullptr) {
            std::cout << "List is empty. Cannot pop back.\n";
            return;
        }

        if (head->next == nullptr) {
            // 如果只有一个节点，直接删除头节点
            delete head;
            head = nullptr;
        } else {
            // 找到倒数第二个节点
            Node* secondLast = head;
            while (secondLast->next->next != nullptr) {
                secondLast = secondLast->next;
            }

            // 删除最后一个节点
            delete secondLast->next;
            secondLast->next = nullptr;
        }
    }

    // 显示链表元素
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    // 创建链表并添加元素
    LinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);

    // 显示链表元素
    std::cout << "Linked List: ";
    myList.display();

    // 删除最后一个节点
    myList.popBack();

    // 显示删除后的链表元素
    std::cout << "Linked List after popBack: ";
    myList.display();

    return 0;
}
