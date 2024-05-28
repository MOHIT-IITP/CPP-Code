#include<iostream>
using namespace std;

void two_largest(int a[])
{
	int second=0;
	int first=0;
	for (int i=0;i<5;i++)
	{
		if(a[i]>first)
		{
			first=a[i];
		}
		else if(a[i]>second && second !=first)
		{
			second = a[i];
		}
	}
	cout<<"first : "<<first<<endl;
	cout<<"second : "<<second<<endl;
}

int main()
{
	int a[5]={91,22,43,44,35};
	two_largest(a);
	return 0;
}