#include "0.LinkedListUtils.h"
#include <iostream>

Node* createNode(int val) {
    return new Node(val);
}
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}