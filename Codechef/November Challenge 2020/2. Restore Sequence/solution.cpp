#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,flag,j,m,c;
	     vector<long long int>prime;
	    
	    for(i=2;i<=1e6+ 299709;i++)
	    {c=0;
	        for(j=2;j<=sqrt(i);j++)
	        {
	            if(i%j==0)
	            {c=1;
	                break;
	            }
	        }
	        if(c==0)
	        prime.push_back(i);
	      
	    }
        
        cin>>t;
        while(t--)
        {
            cin>>n;
            long long int a[n];
            long long int b[n];
            vector<long long int> ans;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<n;i++)
            {
                b[i] = prime[i];
            }
            for(i=0;i<n;i++)
            {
                if(a[i]!=(i+1))
	            {
	                b[i]=b[a[i]-1];
	            }
            }

            for(i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}
