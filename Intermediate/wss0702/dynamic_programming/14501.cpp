#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
// for�� ���� �� ���ϱ�
using namespace std;
int dp[16];
int n;
int T[16];
int P[16];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> T[i] >> P[i];
	}
	for (int i = n; i >= 1; i--) {
		if (i + T[i] <= n + 1/*����ϴ� ���� �ѱ�� �ȵ�*/) {
			dp[i] = max(dp[i + T[i]] + P[i]/*����ϰ� ���� ���ͱ� + �� �Ŀ� �ִ� ����*/, dp[i + 1]/*��� �ѱ��*/);
		}
		else dp[i] = dp[i + 1];
	}
	cout << *max_element(dp, dp + n + 1);
}
