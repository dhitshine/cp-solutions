#include <bits/stdc++.h>
#define debug(x) cerr << #x << " --> " << x << endl;
using namespace std;

int main(){
   int n;
   cin >> n;
   int a = 5, ans = 0;
   while(n / a > 0){
      ans += (n / a);
      a *= 5;
   }
   cout << ans;
}
