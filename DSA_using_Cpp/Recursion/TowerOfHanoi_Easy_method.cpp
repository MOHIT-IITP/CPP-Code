// Easy method to learn/ understand the tower of Hanoi problem 

//MOHIT-IITP

// TOWER OF HANOI 


#include<iostream>

using namespace std;

// main code is here 

void toh(int n,int A , int B , int C)
{
	if(n>0)
	{
		toh(n-1,A,C,B);
		cout<<"Move "<<A<<" to "<<C<<endl;
		toh(n-1,B,A,C);
	}
}

int main()
{
	int m,j,k,l;
	cin>>m>>j>>k>>l;
	cout<<"The Answer is "<<endl;
	toh(m,j,k,l);
	return 0;
}