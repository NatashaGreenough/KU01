#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0,i,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==1){
            if(a[1]<a[0])cnt+=1;
        }
    }

    for(i=1;i<=n;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1])cnt+=1;
    }
    printf("%d",cnt);
    return 0;
}
