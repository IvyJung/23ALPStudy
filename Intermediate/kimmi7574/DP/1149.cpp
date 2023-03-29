#include <bits/stdc++.h>
using namespace std;

int n;	//���� ����
int R[1005];	//�������� ĥ�ϴ� ��� �迭
int G[1005];	//�ʷ����� ĥ�ϴ� ��� �迭
int B[1005];	//�Ķ����� ĥ�ϴ� ��� �迭
int d[1005][3];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> R[i] >> G[i] >> B[i];
	}

	//�ʱⰪ
	d[1][0] = R[1];
	d[1][1] = G[1];
	d[1][2] = B[1];

	for (int k = 2; k <= n; k++) {
		d[k][0] = min(d[k - 1][1], d[k - 1][2]) + R[k];
		d[k][1] = min(d[k - 1][0], d[k - 1][2]) + G[k];
		d[k][2] = min(d[k - 1][0], d[k - 1][1]) + B[k];
	}

	cout << min({ d[n][0], d[n][1], d[n][2] }) << '\n';
}