#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll evensum(ll n) {
    ll temp = n, sum = 0;
    while(temp != 0) {
        ll rem = temp%10;
        if(rem%2==0) sum+=rem;
        temp = temp/10;
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++) {
            cout<<evensum(a[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}
