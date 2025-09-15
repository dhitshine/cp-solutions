#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << -> << x << endl;

int main(){
   long long t;
   cin >> t;
   while(t--){
      long long a, b;
      cin >> a >> b;
      if((a == 0 && b != 0) || (a != 0 && b == 0)){
         cout << "NO" << endl;
         continue;
      }
      if((a + b) % 3 == 0 && a <= 2*b && b <= 2*a){
         cout << "YES" << endl;
      }else{
         cout << "NO" << endl;
      }
   }
}
