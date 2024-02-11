// Code of hollow square

#include<iostream>
#include<stdio.h>

using namespace std;

void pattern(int row)
{
  for(int i=0;i<row;++i)
  {
    if(i==0 || i==row-1)
    {
      for(int k=0;k<row;++k)
      {
        cout<<"*";
      }
    }
    else {
      cout<<"*";
      for(int m=0;m<row-2;++m)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
}

int main()
{
  int row;
  cin>>row;
  pattern(row);
  return 0;
}
