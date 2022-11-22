#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,a[1010],r,x=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf("%d",&r);
        x+=a[r];
        if(x<=0)x=0;
        if(x>n){
                x=n;
                break;
        }
    }
    printf("%d",x);
    return 0;
}
