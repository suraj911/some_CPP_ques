#include <iostream>
#include<unordered_map>
#include <string>
#include<queue>
#include <cstring>
#include<climits>
using namespace std;



int main(int argc, char const *argv[])
{
	int l,largest_l=0;
	char a[1000],largest[1000];
	int no_of_strings;
	cin>>no_of_strings;
	cin.get();/////////////this is here because when we press enter('\n'-newline character) after the previous 
	///////////////////////integer it work as 1st string 
	for (int i = 0; i < no_of_strings; ++i)
	{
		cin.getline(a,1000);
		l = strlen(a);
		if(l>largest_l){
			largest_l = l;
			strcpy(largest , a);
		}
	}

	cout<<largest<<" with length "<<largest_l<<" is the largest "<<"\n";

	return 0;
}
