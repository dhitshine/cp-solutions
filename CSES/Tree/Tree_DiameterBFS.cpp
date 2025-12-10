#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
#define endl '\n'
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

vector<vector<int>> adj;

pair<int, int> bfs(int start){
  int n = adj.size();
  vector<int> dist(n, -1);
  queue<int> q;
  q.push(start);
  dist[start] = 0;
  while(!q.empty()){
    int now = q.front();
    q.pop();
    for(auto &next : adj[now]){
      if(dist[next] == -1){
        dist[next] = dist[now] + 1;
        q.push(next);
      }
    }
  }
  int fartest_node = start;
  for(int i = 0; i < n; i++){
    if(dist[i] > dist[fartest_node]){
      fartest_node = i;
    }
  }
  return {fartest_node, dist[fartest_node]};
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
  auto p1 = bfs(0);
  auto p2 = bfs(p1.first);
  cout << p2.second;
}
