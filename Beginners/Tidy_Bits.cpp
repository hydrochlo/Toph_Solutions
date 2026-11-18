#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<ll, ll>>;
using vl = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'

int countBinaryDigits(unsigned long long n){
    if(n == 0) return 1;
    int digits = 0;

    while(n>0){
        digits++;
        n >>= 1;
    }
    return digits;
}

void solve() {
    
    int n;
    cin >> n;

    int ones = __builtin_popcount(n);
    int res = 1;
    for(int i=1; i < ones; i++){
        res = res*2 + 1;
    }

    cout << res << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}