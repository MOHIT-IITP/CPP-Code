#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int value){
      data = value;
      prev=nullptr;
      next=nullptr;
    }
};

class Doublell{
  private:
    Node* head;
  public:
    Doublell(){
      head=nullptr;
    }
  void insertAtbegin(int value){
    Node* newNode=new Node(value);
    Node* currentNode = head;
    if (currentNode == nullptr){
      currentNode=newNode;
    }else{
      newNode->next=currentNode;
      currentNode->prev=newNode;
    }
  }

  void insertAtend(int value){
    Node* newNode=new Node(value);
    Node* currentNode=head;
    if(currentNode==nullptr){
      currentNode=newNode;
    }else{
      while(currentNode->next==nullptr){
        currentNode=currentNode->next;
      }
      currentNode->next=newNode;
      newNode->prev=currentNode;
    }
  }

  void printll(){
    Node* currentNode=head;
    while(currentNode!=nullptr){
      cout<<currentNode<<endl;
      currentNode=currentNode->next;
    }
  }

};
int main(){
  Doublell LL;
  LL.insertAtbegin(32);
  LL.insertAtbegin(22);
  LL.insertAtend(70);
  LL.printll();
  cout<<"hello world";
  return 0;
}

