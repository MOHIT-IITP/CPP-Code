// output of the code is something like this 

// 1
// 22
// 333
// 4444
// 55555

#include<iostream>

using namespace std;

void pattern(int row)
{
	int num=0;
	for(int i=0;i<row;++i)
	{
		for(int col=0;col<i;col++)
		{
			cout<<num;
		}
		num++;
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}