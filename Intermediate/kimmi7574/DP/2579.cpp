#include <bits/stdc++.h>
using namespace std;

int n;	//����� ����
int score;	//��ܿ� ���� �ִ� ����
int s[300];	//��ܿ� ���� ���� �迭
int d[300][300];	//��� ���� ���� �ִ� �迭

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}

	//�ʱⰪ
	d[1][1] = s[1];
	d[1][2] = 0;
	d[2][1] = s[2];
	d[2][2] = s[1] + s[2];

	//d[i][j] : ���簡�� j���� ����� �����ؼ� ���, 
	//			i��° ��ܱ��� �ö��� �� ���� ���� �ִ�
	for (int k = 3; k <= n; k++) {
		d[k][1] = max(d[k - 2][1], d[k - 2][2]) + s[k];
		d[k][2] = d[k - 1][1] + s[k];
	}

	cout << max(d[n][1], d[n][2]) << '\n';
}