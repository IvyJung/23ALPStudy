#include <bits/stdc++.h>
using namespace std;

int d[20];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, t;
	cin >> t;

	d[1] = 1; //�ʱⰪ
	d[2] = 2;
	d[3] = 4;

	for (int i = 4; i < 11; i++) {
		d[i] = d[i - 1] + d[i - 2] + d[i - 3];	//�迭�� �� ����� �� �Է�
	}
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << d[n] << '\n';	//�� for������ �����س��� ����� ���� �ٷ� ���
	}
}