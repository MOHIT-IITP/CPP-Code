#include<iostream>
using namespace std;

void largest(int a[])
{
	int big_num=a[0];
	for(int i=0;i<4;++i)
	{
		if(a[i]>big_num)
		{
			big_num=a[i];
		}
	}
	cout<<big_num;

}

int main()
{
	int a[4]={12,32,55,12};
	largest(a);
	return 0;
}