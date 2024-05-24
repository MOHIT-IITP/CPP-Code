// THIS CODE CONVERT DECIMAL TO BINARY

#include<iostream>
using namespace std;

int  decimal_to_binary(int n)
{
	if(n==0)
		return 0;
	else
		return(n%2+10*decimal_to_binary(n/2));
}

int main()
{
	int x;
	cin>>x;
	cout<<"Your answer is ";
	int result =decimal_to_binary(x);
	cout<<result;
	return 0;
}

