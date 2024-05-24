// THIS FIBONACCI SERIES WILL PRINT THE nth ELEMENT FROM THE SERIES

#include<iostream>

using namespace std;

void fibo(int n)
{
	int a=0;
	int b=1;
	int next;
	next=a+b;
	for(int i=0;i<n-2;i++)
	{
		a=b;
		b=next;
		next=a+b;
	}
	cout<<b;
}

int main()
{
	int x;
	cin>>x;
	cout<<"Your Answer is : ";
	fibo(x);
	return 0;
}