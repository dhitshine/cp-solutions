#include <bits/stdc++.h>
#define debug(x) cerr << #x << " --> " << x << endl;
using namespace std;

bool valid(int n, vector<int> &p){
   for(int i = 1; i < n; i++){
      if(abs(p[i] - p[i - 1]) == 1){
         return false;
      }
   }
   return true;
}

int main(){
   int n;
   cin >> n;
   vector<int> p(n);
   iota(p.begin(), p.end(), 1);
   do{
      if(valid(n, p)){
         for(auto &i : p){
            cout << i << " ";
         }
         cout << endl;
      }
   }while(next_permutation(p.begin(), p.end()));
}
