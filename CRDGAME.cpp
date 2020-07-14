#include <iostream>
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
	    long long n,counta=0,countb=0;
	    cin>>n;
	    while(n--)
	    {
	        long long a,b,suma=0,sumb=0,m,n;
	        cin>>a;
	        while(a>0)
	        {
	            n=a%10;
	            suma=suma+n;
	            a=a/10;
	        }
	        cin>>b;
	        while(b>0)
	        {
	            m=b%10;
	            sumb=sumb+m;
	            b=b/10;
	        }
	        if(suma>sumb)
	        {
	            counta++;
	        }
	        else if(suma<sumb)
	        {
	            countb++;
	        }
	        else
	        {
	            counta++;
	            countb++;
	        }
	    }
	    if(counta>countb)
	    {
	        cout<<0<<" "<<counta<<endl;
	    }
	    else if(counta<countb)
	    {
	        cout<<1<<" "<<countb<<endl;
	    }
	    else
	    {
	        cout<<2<<" "<<counta<<endl;
	    }
	}
	return 0;
}
