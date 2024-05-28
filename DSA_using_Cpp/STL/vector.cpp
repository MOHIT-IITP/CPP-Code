/*learning about the vector*/
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
  vector<int> v;

// initialising the vector in cpp
  for(int i=0;i<10;i++)
  {
    v.push_back(i);
  }

// printing all the element of the vector
  for(auto it= v.begin();it<v.end();it++)
  {
    cout<<*it<<endl;
  }

  cout<<v.front()<<endl; // print first elem 
  cout<<v.back()<<endl; // print last elem 
  cout<<v.size()<<endl; // print size 
  v.pop_back()<<endl;   // delete last elem 
  cout<<v.back()<<endl; // print last element

  v.insert(v.begin(),5); // add 5 to the front
  cout<<v.front();

  v.insert(v.begin()+2,9999); // add 9999 in the 2nd place
  cout<<v[2];


  // you can also change the element like list in python
  v[2]=109; 
  cout<<v[2];
  v.clear(); // to delete the vector
  return 0;
}

