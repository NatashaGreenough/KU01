#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,c;
    char a[110][110];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){c=0;
        for(j=0;j<n;j++){
            if(a[i][j]=='#'){
                c+=1;
                a[i][j]='.';
            }
        }
        for(k=0;k<c;k++)
            a[i][k]='#';
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!='#')a[i][j]='.';
            printf("%c",a[i][j]);
        }printf("\n");
    }
    return 0;
}
/*
5
.....
.#.#.
.###.
...##
#....
*/
