#include<iostream>
using namespace std;

int main()
{
	int a,b,c=0,n;
	cout<<"Enter the no of terms : "<<endl;
	cin>>n;
	
	for(int i=2;i<=n;++i)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
