//MOHIT-IITP

//TAYLOR SERIES CODE

#include<iostream>

using namespace std;

double e(int x,int n)
{
  static double s=1;
  if(n==0)
    return s;
  s=1+x*s/n;
  return e(x,n-1);
}

int main()
{
  double j,k;
  cin>>j>>k;
  cout<<"The Answer is ";
  cout<<e(j,k);
	return 0;
}