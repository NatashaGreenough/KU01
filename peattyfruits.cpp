#include<stdio.h>
int main(){
    int n,cnt=0,a,b;
    double c;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        c=0.75*(double)a;
        if(b<=c) cnt+=5;
        else cnt+=3;
    }
    printf("%d",cnt);
    return 0;
}
