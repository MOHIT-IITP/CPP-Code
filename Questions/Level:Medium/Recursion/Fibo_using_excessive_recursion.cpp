// this is fibonacci series  , the below code is starting from 1
// that is why 7th element = 13
// 0 1 1 2 3 5 8 13


// THIS IS CALLED EXCESSIVE RECURSSION 


#include<iostream>
using namespace std;

int fibo(int n)
{
	if(n<=1)
		return n;
	return fibo(n-2)+fibo(n-1);
}

int main()
{
	int x;
	cin>>x;
	int result = fibo(x);
	cout<<result<<endl;
	return 0;
}