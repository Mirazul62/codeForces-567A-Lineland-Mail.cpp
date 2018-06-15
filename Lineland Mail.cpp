#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,count=0,mi=0,j,ma=0,x=0,y=0,ans_min=0,ans_max=0,l=0,m=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    mi=a[0];
    ma=a[n-1];
    for(i=0;i<n;i++)
    {
       /// for(j=i+1;j<n;j++)
       /// {
            if(i==0)
            {
               ans_min=abs(a[i]-a[i+1]);
                ans_max=abs(a[i]-a[n-1]);
            }
            else
            {
                if(n==2)
                x=abs(a[i]-a[i-1]);
                else
                    x=abs(a[i]-a[i+1]);
                y=abs(a[i]-a[i-1]);
                ans_min= min(x,y);
                l=abs(a[i]-mi) ;
                m=abs(a[i]-ma);
                ans_max=max(l,m);
           /// }

        }
        cout<<ans_min<<" "<<ans_max<<endl;
    }
}
