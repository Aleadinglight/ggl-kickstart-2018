#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int T,n,d;
map<string, string> m;
map<string,int> c;
map<string,int>::iterator it;
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    scanf("%i",&T);
    for (int t=1; t<=T; t++){
        scanf("%i",&n);
        string st,st1;
        for (int i=1;i<=n;i++){
            cin>>st>>st1;
            m[st]=st1;
            c[st]++;
            c[st1]++;
        }
        for ( it=c.begin(); it!=c.end(); ++it){
            if (it->second==1 && m[it->first]!=""){
                st = it->first;
                break;
            }
        }
        cout<<"Case #"<<t<<": ";
        while (m[st]!=""){
            cout<<st<<"-"<<m[st]<<" ";
            st=m[st];
        }
        cout<<"\n";
        m.clear();
        c.clear();
    }
    return 0;
}
