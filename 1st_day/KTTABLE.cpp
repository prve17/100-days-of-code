#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0)
	{
	    int N;
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int j=0;j<N;j++)
	    {
	        cin>>B[j];
	    }
	    int count=0;
	    if(B[0]<=A[0])
	    count++;
	    for(int i=1;i<N;i++)
	    {
	       if(B[i]<=(A[i]-A[i-1]))
	       count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
