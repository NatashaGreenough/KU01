#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum,l,n,i,sed,s=0,p;
    scanf("%d %d",&l,&n);
    for(i=1;i<=l;i++){
        sum+=pow(i,2);
    }
    sed=sum-n;
    for(i=l;i>=1;i--){
        if(sed<=0)break;
        sed=sed-pow(i,2);s+=1;


    }
    printf("%d",s);
return 0;
}
