#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c=0,n,i;
	cin>>n;
	for (i=0;i<=n;i=i+1)
	{
		a=b;
		b=c;
		c=a+b;

	}
	cout<<c<<endl;
	return 0;
}
