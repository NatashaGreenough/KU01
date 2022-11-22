#include<stdio.h>
#include<string.h>
int main(){
    int n,b,cnt=0,i;
    int a[110];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf(" %c",&a[i]);
    }

        if(n%2==0){
            for(i=0;i<=n/2;i++){
            if(a[n/2+i]=='#'){
                printf("%d",n-1-(n/2-i));
                break;
            }
            else if(a[n/2-i]=='#'){
                printf("%d",n/2+i);
                break;
            }
            else{
                if(i==n/2)printf("%d",n);
            }

        }
        }
        else {for(i=0;i<=n/2;i++){
            if(a[n/2+1+i]=='#'){
                printf("%d",n-1-(n/2-i));
                break;
            }
            else if(a[n/2+1-i]=='#'){
                printf("%d",n-1-(n/2-i));
                break;
            }
            else{
                if(i==n/2-1)printf("%d",n);
            }

        }
        }



    return 0;
}
