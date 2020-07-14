#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,sum=0;
	    cin>>n;
	    long long a[n];
	    int i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        sum+=abs(a[i]-a[i+1])-1;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}