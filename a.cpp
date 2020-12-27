#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int m=0,n=0;
    cin>>a;
    while(a!=1){
        cout<<a<<" ";
        a=(a%2==0)?a/2:a*3+1;
        n++;
        m=max(m,a);
    }
    cout<<"\n";
    cout<<m<<" "<<n+1<<"\n";
}