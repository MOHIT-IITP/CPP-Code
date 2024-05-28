#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// how to assign stack
void assignStack(stack<int> st){
  
}
// how to add element to the stack 

void addElement(stack<int> st){
  st.push(123);
  st.push(233);
  st.push(623);
  st.push(973);
}

// how to print the stack  
// --  there are two way to print the stack 
//         first : to delete the stack while printing 
//         second: to print the stack without delete
void printStack_01(stack<int> st){
  st.push(123);
  st.push(233);
  st.push(623);
  st.push(973);

  // now printing the stack with the first method
  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
  }
}

template <typename T>
void printStack_02(stack<T> st){
  // now making a temprory stack 
  stack<T> tempStack = st;
  // now printing the stack with the second method
  while(!tempStack.empty()){
    cout<<tempStack.top()<<endl;
    tempStack.pop();
  }
}


int main()
{
  stack<int> st;
  st.push(1);
  st.push(3);
  st.push(9);
  st.push(0);
  printStack_02(st);
  return 0;
}
