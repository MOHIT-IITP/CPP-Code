// using the pascal triangle to solve the nCr code
// also used one of the properties of nCr

#include<iostream>
using namespace std;

// nCr Code 

int ncr(int n, int r)
{
	if(r==0 || n==r)
	{
		return 1;
	}
	else{
		return ncr(n-1,r-1)+ncr(n-1,r);
	}
}

int main()
{
	int first, second;
	cin>>first>>second;
	int result =ncr(first, second);  
	cout<<"The Answer is ";
	cout<<result;
	return 0;
}