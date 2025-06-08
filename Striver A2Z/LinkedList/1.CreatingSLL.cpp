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
 Node* CreateFromArray(vector<int> arr){ //CREATING LINKEDLIST FROM ARRAY FUNCTION // TC= O(n)
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
 int length(Node* head){ //LENGTH FUNCTION // TC= O(n)
    int len=0;
    Node* current = head;
    while(current!=NULL){
        len++;
        current=current->next;
    }
    return len;
 }
 void print(Node* head){ // PRINT FUNCTION // TC= O(n)
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
    cout<<endl;
    cout<<"length= "<<length(head)<<endl;
    return 0;
}

