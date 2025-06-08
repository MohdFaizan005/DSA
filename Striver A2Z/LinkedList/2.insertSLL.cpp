#include<iostream>
#include "0.Node.h"
#include "0.LinkedListUtils.h"
using namespace std;

Node* insertNode(Node* head, int x, int pos){
    if(pos<0) return head;
    Node* newNode = new Node(x);
    if(pos==0){
        newNode->next= head;
        return newNode;
    }
    Node* current = head;
    int idx=0;
    while(current!=nullptr && idx<pos-1){
        current=current->next;
        idx++;
    }
    newNode->next = current->next;
    current->next=newNode;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fifth =new Node(5);
    head->next = second;
    second->next = third;
    third->next = fifth;
    head=insertNode(head,4,3);
    printList(head);
    return 0;
}