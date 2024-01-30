// Upside down right angled  star pattern 

#include<iostream>
using namespace std;

void pattern(int n)
{
	for(int i=n;i>0;--i) 
	{
		for(int j=1;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main()
{
	int x;
	cin>>x;
	pattern(x);
	return 0;
}