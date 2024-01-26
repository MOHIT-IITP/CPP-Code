// TOWER OF HANOI CODE

#include<iostream>

using namespace std;

void hanoi(int n, char from_pole, char to_pole, char via_pole)
{
	if(n==0)
		return;
	hanoi(n-1,from_pole, via_pole, to_pole );
	cout<<"move ring "<<n<<" from "<<from_pole<<" to "<<to_pole<<endl;
	hanoi(n-1,via_pole,to_pole, from_pole);
}

int main()
{
	int x;
	cin>>x;
	hanoi(x,'A','C','B');
	return 0;
}