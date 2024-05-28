// here i am printing the queue  without deleting it 
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

template <typename T>
void printqueue(queue<T> he){
  queue<T> tempQ = he;
  while(!tempQ.empty()){
    cout<<tempQ.front()<<endl;
    tempQ.pop();
  }
}

int main()
{
  queue<int> he;
  he.push(12);
  he.push(22);
  he.push(32);
  he.push(42);
  printqueue(he);
  return 0;
}
