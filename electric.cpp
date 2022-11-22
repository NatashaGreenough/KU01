#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,i,j,a[110][110],c,mx[110],mn;
    scanf("%d %d",&n,&b);
    c=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=b;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=b;j++){
            if(a[i][j+1]-a[i][j]>mx[i])
                mx[i]=a[i][j+1]-a[i][j];
        }
    }
    mn=mx[1];
    for(i=1;i<=n;i++){
        if(mx[i+1]<mx[i]&&mx[i+1]!=0)mn=mx[i+1];
    }
    printf("%d",mn);
    return 0;
}
