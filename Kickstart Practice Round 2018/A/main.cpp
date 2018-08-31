#include <iostream>
#include <stdio.h>
using namespace std;

int T,n,k,l,q,p,m,a[5010],b[5010];
int main()
{
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    scanf("%i",&T);
    for(int i=1; i<=T; i++){
        scanf("%i",&n);
        m=0;
        for(int j=0; j<n;j++){
            scanf("%i %i",&k,&l);
            a[k]++;
            a[l+1]--;
            m=max(l,m);
        }
        for(int j=1;j<=m;j++){
            b[j]=b[j-1]+a[j];
        }
        scanf("%i",&p);
        printf("Case #%i: ",i);
        for(int j=0;j<p;j++){
            scanf("%i",&q);
            printf("%i ",b[q]);
        }
        printf("\n");
        for (int j=1;j<=m+1;j++){
            a[j]=0;
            b[j]=0;
        }
    }
    return 0;
}
