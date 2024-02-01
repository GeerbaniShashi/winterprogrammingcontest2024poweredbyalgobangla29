#include<bits/stdc++.h>
#define ll long long int 
using namespace std;


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
        ll sum = 0;
        for (ll i = 0; i < 32; i++)  {
        ll zero = 0, one = 0; 
        ll idsum = 0; 
        for (ll j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0) zero++;
            else one++;
            a[j] /= 2;
        }
        idsum = one * zero * (1 << i);   
        sum += idsum; 
    }
        cout<<sum<<endl;
    }
    return 0;
}
