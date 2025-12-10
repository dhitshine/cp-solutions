#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

vector<vector<int>> adj;

pair<int, int> dfs(int now, int parent){
  pair<int, int> ans = {0, now};
  for(auto &next : adj[now]){
    if(next == parent) continue;
    auto ret = dfs(next, now);
    ans = max(ans, {ret.first + 1, ret.second});
  }
  return ans;
}

int main(){
  shine
  int n;
  cin >> n;
  adj = vector<vector<int>> (n);
  for(int i = 0; i < n - 1; i++){
    int u, v;
    cin >> u >> v;
    u--, v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

}
