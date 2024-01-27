// Normal method to find the nCr 

#include<iostream>
using namespace std;

// making the factorial


int fact(int m)
{
	if(m<=1)
	{
		return 1;
	}else{
		return m*fact(m-1);
	}
}

// making the nCr formula


int ncr(int x, int n)
{
	int s,r,t,v;
	s=fact(x);
	r=fact(n);
	v=x-n;
	t=fact(v);
	return s/(r*t);
}



int main()
{
	int first,second;
	cin>>first>>second;
	int result = ncr(first,second);
	cout<<"The Answer is ";
	cout<<result;
	return 0;
}
