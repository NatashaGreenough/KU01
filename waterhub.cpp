#include <bits/stdc++.h>
using namespace std;
int x[1000],y[1000],all[1000][1000];
int main()
{
    int i,j,k,n,z=0,da,db,dc,Min=1000,minn=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(k==i||k==j||i==j) continue;
                da=abs(x[k]-x[i])+abs(y[k]-y[i]);
                db=abs(x[k]-x[j])+abs(y[k]-y[j]);
                dc=min(da,db);
                if(dc<Min){
                        Min=dc;
                        if(Min<minn){minn=Min;
                            z+=minn;
                            }
                }
                //all[i][j]+=dc;

            }
        }
    }printf("%d ",minn);

    return 0;
}
