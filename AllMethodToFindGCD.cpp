///////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;cin>>a>>b;
    int m = min(a,b);
    int c;                                              //////////////////////This is basic method or brute force method/////////////////
    for(int i=1;i<=m;i++){
        if(a%i==0 and b%i==0){
            c=i;
        }
    }
    cout<<c;
    return 0;
}
/////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
BY EUCLIDIAN ALGOTITHM

#include <bits/stdc++.h>
using namespace std;

int GCDEuclid(int a, int b)
{
    if (a == 0)
    {   
        return b;
    }
    return GCDEuclid(b%a, a);
}


int main() {
    int a,b;cin>>a>>b;
    cout<<GCDEuclid(a,b);
    return 0;
}
//////////////////////////////////////////////////////////////
