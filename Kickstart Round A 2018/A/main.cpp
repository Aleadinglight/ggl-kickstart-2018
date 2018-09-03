#include <iostream>
#include <stdio.h>
using namespace std;
long long n,m;
int T;

long long n8(long long k){
    long long ret=0;
    while(k/10>0){
        ret=ret*10+8;
        k=k/10;
    }
    return ret;
}
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    cin>>T;
    for (int t=1; t<=T; t++){
        cin>>m;
        n=m;
        long long tg=0,tc=1,last_tc,last_tg=-1,last_n;
        while(n>0){
            if ((n%10)%2==1){
                last_tc=tc;
                last_tg=tg;
                last_n=n;
            }
            tg=(n%10)*tc+tg;
            tc=tc*10;
            n=n/10;
        }
        printf("Case #%i: ",t);
        if (m==1){
            printf("1\n");
            continue;
        }
        if (last_tg==-1){
            printf("0");
        }
        else{
            printf("%lld",min(last_tc+last_tg-n8(last_tc),(last_n%10+1)*last_tc-(last_n%10*last_tc+last_tg)));
        }
        printf("\n");
    }
    return 0;
}
