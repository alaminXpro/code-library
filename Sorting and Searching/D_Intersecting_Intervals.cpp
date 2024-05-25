/*
 *  author:  alaminxpro
 *  created: 2024-05-25 19:25:04
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        int s, e; cin >> s >> e;
        v.push_back({s, -1}); 
        v.push_back({e, 1});  
    }
    sort(v.begin(), v.end());
    int intersections = 0, open = 0;
    for(auto [f, s] : v) {
        if(s == -1) { 
            intersections += open;
            open++;
        } else { 
            open--;
        }
    }
    cout << intersections << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// https://atcoder.jp/contests/abc355/tasks/abc355_d