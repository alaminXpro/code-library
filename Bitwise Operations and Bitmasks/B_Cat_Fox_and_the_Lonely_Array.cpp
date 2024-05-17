#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 20;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin>>i;
    vector<int> last(N, 0);

    int k = 1;
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<N; ++j){
            if(a[i]&(1<<j)) {
                k = max(k, i+1 - last[j]);
                last[j] = i+1;
            }
        }
    }
    for(int i = 0; i < N; ++i){
        if(last[i]) {
            k = max(k, n + 1 - last[i]);
        }
    }
    cout<<k<<"\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}