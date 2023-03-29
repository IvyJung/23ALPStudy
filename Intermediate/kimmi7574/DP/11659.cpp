#include <bits/stdc++.h>
using namespace std;

int n;	//���� ����
int m;	//���� ���ؾ� �ϴ� Ƚ��
int a[100005];
int d[100005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	//0-indexed�� ���� d[i-1]�� d[-1]�� �� �� ���� (����ó�� �ؾ���)
	//=> 1-indexed�� ���� ���� ����
	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		d[i] = d[i - 1] + a[i];	//d�迭�� 1 ~ i-1������ �� ����
	}

	//i ~ j������ �� ���
	while (m--) {
		int i, j;
		cin >> i >> j;
		cout << d[j] - d[i - 1] << '\n';
	}

	//  a[i] + a[i+1] + ... + a[j]
	//= (a[1] + a[2] + ... + a[j]) - (a[1] + a[2] + ... + a[i-1])
	//= d[j] - d[i-1]
}