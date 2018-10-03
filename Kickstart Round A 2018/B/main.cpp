#include <iostream>
#include <stdio.h>

using namespace std;
int a[20010], k, n, T;
double E[50010];

void input(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    cin>>T;
    for (int t=1; t<=T; t++){
        cin>>n>>k;
        for (int i=1;i<=n;i++){
            cin>>a[i];
            E[0]+=a[i];
        }
        E[0]=1.0*E[0]/n;
        for (int i=1;i<=k;i++){
            for (int j=1; j<=n; j++){
                E[i]+=max(1.0*a[j],E[i-1]);
            }
            E[i]=1.0*E[i]/n;
        }
        cout<<"Case #"<<t<<": "<<E[k]<<endl;
        for (int i=0;i<=k;i++)
            E[i]=0;
    }
}

int main(){
    input();
    return 0;
}
