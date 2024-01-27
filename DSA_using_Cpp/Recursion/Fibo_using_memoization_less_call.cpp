// using process called memoization in the fibo , which uses less call in compare to normal call
#include<iostream>

using namespace std;

int f[10];

int fibo(int n)
{
	if(n<=1)
	{
		f[n]=n;
		return n;

	}
	else
	{
		if(f[n-1]==-1)
			f[n-1]=fibo(n-1);
		if(f[n-2]==-1)
			f[n-2]=fibo(n-2);
		return f[n-2]+f[n-1];
	}
}

int main()
{
	int i;
	int x;
	cin>>x;
	for(i=0;i<10;++i)
		f[i]=-1;
	int result = fibo(x);
	cout<<result;
	return 0;
}