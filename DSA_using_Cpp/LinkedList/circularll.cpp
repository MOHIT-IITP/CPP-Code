#include<bits/stdc++.h>
using namespace std;


struct Node{
  int data;
  Node* prev;
  Node* next;

  Node(int value){
    data = value;
    prev=NULL;
    next=NULL;
  }
};

class Circular{
  private:
    Node* head;
  public:
    Circular(){
      head=NULL;
    }

  void insertAtbegin(int value){
    Node* newNode=new Node(value);
    Node* currentNode=head;
    if(currentNode==NULL){
      currentNode=head;
    }
    else{
      newNode->next=head;
      head->prev=newNode;
    }
  }

  void insertAtend(int value){
    Node* newNode=new Node(value);
    Node* currentNode = head;
    if(currentNode==NULL){
      currentNode=newNode;
    }
    else{
      while(currentNode->next=
        currentNode=currentNode->next;
      }
      currentNode->next=newNode;
      head->prev=newNode;
      newNode->prev=currentNode;
      newNode->next=head;
    }
  }

  void printll(){
    Node* currentNode= head;
    while(True){
      cout<<currentNode<<endl;
      currentNode=currentNode->next;
    }
  }
};
int main(){
  Circular() cll;
  cll.insertAtbegin(23);
  cll.insertAtbegin(33);
  cll.insertAtbegin(13);
  cll.insertAtbegin(99);
  cll.printll();
  return 0;
}

