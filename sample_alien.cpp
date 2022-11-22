#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,h,k,r,a,b,z,cnt=0;
    scanf("%d %d %d %d",&n,&h,&k,&r);
    while(n--){
        scanf("%d %d",&a,&b);
        z=pow(a-h,2)+pow(b-k,2);
        if(sqrt(z)<=r)cnt++;
    }
    printf("%d",cnt);
    return 0;
}
