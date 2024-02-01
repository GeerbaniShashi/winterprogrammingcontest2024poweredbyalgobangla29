#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    map<ll,ll>mp;
        for(ll i=2; i<=1000000; i++) {
            ll sum = i*(i-1)/2;
            mp[sum] = i;
        }
    while(t--) {
        ll n;
        cin>>n;
        
        if(mp[n]) cout<<mp[n]<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}