#include <bits/stdc++.h>
#define debug(x) cerr << #x << " --> " << x << endl;
using namespace std;

int main(){
   long long n;
   cin >> n;
   long long sum = (n*(n + 1)) >> 1;
   if(sum % 2 == 1){
      cout << "NO";
      return 0;
   }
   sum = sum / 2;
   vector<long long> v1, v2;
   while(sum != 0){
      if(sum - n >= 0){
         v1.push_back(n);
         sum -= n;
      }else{
         v2.push_back(n);
      }
      n--;
   }
   for(long long i = 1; i <= n; i++){
      v2.push_back(i);
   }
   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());
   cout << "YES" << endl << v1.size() << endl;
   for(auto &i : v1){
      cout << i << " ";
   }
   cout << endl << v2.size() << endl;
   for(auto &i : v2){
      cout << i << " ";
   }
}
/*
cari sum dari n
jika sumnya ganjil -> impossible
jika sumnya genap, kita bisa bagi subset dari belakang
Misalkan v1 dan v2 adalah masing-masing vektor ans, v1 akan kita isi dengan penjumlahan dari belakang
lalu v2 akan kita isi dengan sisanya

algo: kita ngecek dari 1 - n selama sumnya belum 0
iterasi terus selama nilai sum != 0 (nilai sum tidak akan pernah negatif), cek lagi jika sum - n, masukin n itu ke v1 dan kurangi nilai sumnya dengan n, otherwise, masukin nilai n ke v2 (sum - n negatif akibatnya n nya kelebihan, jadi lanjut cari ke bawah)
kalo sum = 0, berarti dari 1 - n terakhir adalah nilai-nilai untuk v2

*/
