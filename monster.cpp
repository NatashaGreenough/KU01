#include<stdio.h>
int main(){
    int n,a,b=0,h,cnt=0;
    scanf("%d %d",&n,&a);
    while(n--){
        scanf("%d",&h);
        if(h<=a){
            if(b<=h)
                b=h;
        }
    }
    printf("%d",b);
    return 0;
}
