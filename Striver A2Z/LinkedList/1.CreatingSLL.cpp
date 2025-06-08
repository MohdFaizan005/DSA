#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
 Node* CreateFromArray(vector<int> arr){ //CREATING LINKEDLIST FROM ARRAY FUNCTION
    int n= arr.size();
    if(n==0) return NULL;
     Node * head =new Node(arr[0]);
     Node * current = head;
     for(int i=1; i<n; i++){
        current->next = new Node(arr[i]);;
        current=current->next;
     }
     return head;
 }
 void print(Node* head){ // PRINT FUNCTION 
    Node* current = head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
 }

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head= CreateFromArray(arr);
    print(head);
    return 0;

}
