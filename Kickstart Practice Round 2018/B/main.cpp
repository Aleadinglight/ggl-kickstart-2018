#include <iostream>
#include <stdio.h>

using namespace std;
int T;
long long k;
int res(long long length, long long pos){
    long long mid = length/2;
    if (pos==mid+1){
        return 0;
    }
    else if (pos<mid+1){
        return res(mid,pos);
    }
    else{
        return !res(mid,2*(mid+1)-pos);
    }
}

int main()
{
    //1152921504606846975
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    scanf("%lld",&T);
    for(int t=1; t<=T; t++){
        scanf("%lld",&k);
        printf("Case #%i: %i\n",t,res(1152921504606846975,k));
    }
    return 0;
}
