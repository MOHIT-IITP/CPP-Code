// printing the pattern with number
// output will be something like this 

// 1
// 23
// 456
// 78910
// 1112131415



#include<iostream>

using namespace std;

void pattern(int row)
{
	int num=1;
	for(int i =0;i<row;i++)
	{
		for(int col =0;col<i;++col)
		{
			cout<<num;
			num++;
		}
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