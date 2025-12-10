#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

vector<vector<int>> adj;
vector<int> visited(200005, 0);

int mx_dist, fartest_node;
void dfs(int now, int par, int curr_dist){
  for(auto &next : adj[now]){
    if(next == par) continue;
    dfs(next, now, curr_dist + 1);
  }
  if(mx_dist < curr_dist){
    mx_dist = curr_dist;
    fartest_node = now;
  }
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
  mx_dist = 0, fartest_node = 0;
  dfs(0, -1, 0);
  mx_dist = 0;
  dfs(fartest_node, -1, 0);
  cout << mx_dist;
}
