#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node(int value){
data = value;
next = nullptr;
}
};
void insertAtLast(node* head, int value){
node* newNode = new node(value);
if(head == nullptr){

    head = newNode;
    return;
}
node* temp = head;
while(temp->next!= nullptr){
 temp= temp->next;

}
temp->next=newNode;

}

void display(node* head){

node* temp = head;
while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp = temp->next;
}

}
int main(){

node* head = new node(5);
node* second = new node(7);
node* third = new node(9);

head->next = second;
second->next = third;
display(head);
cout<<endl;
insertAtLast(head, 11);
display(head);
return 0;
}
