#include<stdio.h>
int main(){
    int n,m,i,gcd,p;
    scanf("%d %d",&n,&m);
    if(n<m){
        p=n;
        n=m;
        m=p;
    }
    for(i=1;i<=n;i++){
        if(n%i==0&&m%i==0)gcd=i;
    }
    printf("%d",gcd);
return 0;
}
