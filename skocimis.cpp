#include<stdio.h>
int n,i,a,b,c,N=0;

int main(){

    scanf("%d %d %d",&a,&b,&c);

    if(c-b>0)n=c-b;
    N+=n;
    printf("%d",N);
    return 0;
}
