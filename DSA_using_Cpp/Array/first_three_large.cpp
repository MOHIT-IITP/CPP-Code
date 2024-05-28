#include<iostream>
#include<stdio.h>
using namespace std;


void larg_three(int a[])
{
	int first,second,third;
	first=0;
	second=0;
	third=0;
	for(int i =0;i<5;++i)
	{
		if(first<a[i])
		{
			third=second;
			second = first;
			first=a[i];
		}
		else if(a[i]>second && a[i]!=first)
		{
			third=second;
			second=a[i];
		}
		else if(a[i]>third && a[i]!=second && a[i]!=first)
		{
			third=a[i];
		}
	}
	cout<<"First :"<<first<<endl;
	cout<<"Second : "<<second<<endl;
	cout<<"Third : "<<third<<endl;
}

int main()
{
	int a[5]={34,23,43,23,54};
	larg_three(a);
	return 0;
}