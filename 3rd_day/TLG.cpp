#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int n=0;
	int p,p1=0,p2=0,sub=0;
	for(int i=0;i<N;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    p1+=a;
	    p2+=b;
	    sub=abs(p1-p2);
	    if(sub>n)
	    {
	    n=sub;
	    if(p1>p2)
	    p=1;
	    else
	    p=2;
	    }
	}
	cout<<p<<" "<<n;
	return 0;
}
