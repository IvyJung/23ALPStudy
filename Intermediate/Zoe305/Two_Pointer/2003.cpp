#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll pf_sum[10005];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  pf_sum[0] = 0;
  for (int i = 1; i <= n; i++) cin >> pf_sum[i], pf_sum[i] += pf_sum[i - 1];

  int lp = 0, rp = 0;
  int ans = 0;

  while (rp <= n){
    ll csum = pf_sum[rp] - pf_sum[lp];
    if (csum <= m){
      if (csum == m) ans++;
      rp++;
    }
    else lp++;
  }

  cout << ans;
}