#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long binexp(long long a, long long b){
   long long res = 1;
   a %= mod;
   while(b > 0){
      if(b & 1){ // if b is odd
         res = res * a;
         res %= mod;
      }
      a = a * a % mod;
      b >>= 1;
   }
   return res;
}

int main(){
   long long n;
   cin >> n;
   long long ans = binexp(2, n);
   cout << ans;
}
