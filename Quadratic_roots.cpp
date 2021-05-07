#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	int d,e,f;
	cin>>a>>b>>c;
	d=(b*b-(4*a*c));
    if(d>0)
    {
    	cout<<"Real and Distinct"<<endl;
    	cout<<endl; 
        e=(-b+(sqrt(d)))/(2*a);
        
        f=(-b-(sqrt(d)))/(2*a);


          cout<<e<<"  "<<f<<endl;
      }
      else
      {
        cout<<" "<<endl;
      }
      return 0;

}
