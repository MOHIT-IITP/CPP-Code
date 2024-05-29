/* NULL and nullptr both works in cpp */

#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }
};

class LinkedList{
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
  }


  void insertAtbegining(int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }

  void printLL(){
    Node* temp = head;
    while(temp->next!=NULL){
      cout<<temp->data<<endl;
      temp = temp->next;
    }
  }
  void insertAtend(int value){
    Node* newNode =  new Node(value);
    if(head==NULL){
      head=newNode;
    }
    else{
      Node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  void insertAtindex(int value, int index){
    Node* newNode = new Node(value);
    if(head==NULL){
      head=newNode;
    }
    else{
      Node* temp=head;
      int currentpos = 0;
      while(currentpos<index-1 && temp->next !=NULL){
        temp=temp->next;
        currentpos++;
      }
      newNode->next = temp->next;
      temp->next=newNode;
    }
  }
};

int main()
{
  LinkedList myList;
  myList.insertAtbegining(10);
  myList.insertAtbegining(20);
  myList.insertAtbegining(60);
  myList.insertAtend(98);
  myList.insertAtend(99);
  myList.insertAtend(100);
  myList.insertAtindex(9999,2);
  myList.printLL();

  return 0;

}

