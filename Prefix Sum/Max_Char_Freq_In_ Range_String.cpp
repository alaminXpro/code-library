/*
 *  author:  alaminxpro
 *  created: 2024-05-18 14:23:34
 */
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s; cin>>s;
    int n = s.size();
    vector<vector<int>> pf(n+1, vector<int>(26));
    for(int i = 0; i<n; ++i){
        pf[i+1] = pf[i];
        pf[i+1][s[i]-'a']++;
    }
    int q; cin>>q;
    while(q--){
        int l, r; cin>>l>>r;
        char best_char = '?';
        int best_freq = -1;
        for(int i =0; i<26; ++i){
            int freq = pf[r+1][i] - pf[l][i];
            if(freq > best_freq) {
                best_freq = freq;
                best_char = 'a' + i;
            }
        }
        cout<<best_char<<"\n";
    }
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