#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
long long n,m;
int T;

long long toInt(string s){
    long long ret=0;
    for (int i=0;i<s.length();i++){
        ret=ret*10+(s[i]-'0');
    }
    return ret;
}

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    cin>>T;
    string st,st1,st2;
    for (int t=1; t<=T; t++){
        cin>>st;
        st1=st;
        st2=st;
        int kt=0;
        // Get the lower num
        for(int i=0;i<st.length();i++){
            if ((st[i]-'0')%2==1 && kt==0){
                st1[i]=st[i]-1;
                kt=1;
            }
            else if (kt==1){
                st1[i]='8';
            }
        }
        //cout<<st1<<endl;
        int add=1;
        // Get the higher num
        for (int i=0; i<st.length();i++){
            if ((st[i]-'0')%2==1){
                if (st[i]!='9'){
                    st2[i]++;
                }
                else{
                    add=0;
                    for(int j=i;j>=0;j--){
                        if (st[j]!='8' && i!=j){
                            st2[j]+=2;
                            add=1;
                            break;
                        }
                        st2[j]='0';
                    }
                }
                for (int j=i+1;j<st.length();j++)
                    if ((st[i]-'0')%2==1){
                        st2[j]='0';
                    }
                break;
            }
        }
        if (add==0){
            st2="2"+st2;
        }
        //cout<<st2<<endl;
        long long temp = toInt(st);
        printf("Case #%i: %lld",t,min(temp-toInt(st1),toInt(st2)-temp));
        printf("\n");
    }
    return 0;
}
