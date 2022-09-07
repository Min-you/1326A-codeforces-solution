#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
  ll n; 
  cin >> n;
  if (n == 1){
    cout << "-1" << endl;
  }
  else {
    cout << "2" ;
    for (int i = 1; i < n; i++){
      cout << "3";
    }
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
    cout << endl;
  }
}
