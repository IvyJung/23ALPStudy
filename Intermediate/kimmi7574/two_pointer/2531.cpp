#include <bits/stdc++.h>
using namespace std;

int n, d, k, c;
int flag, coupon, max_sushi = 0;
int sushi[30002];
bool check[3001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> d >> k >> c;
	for (int i = 0; i < n; i++) {
		cin >> sushi[i];
	}

	for (int i = 0; i < n; i++) {
		flag = 0;	//�ߺ��� ���� üũ
		coupon = 1;	//���� ���ð� �ִ��� Ȯ��
		for (int j = i; j < i + k; j++) {
			if (check[sushi[j%n]] == 1)
				flag++;	//�̹� ���� �ʹ��� ��� �ߺ� �� ǥ��
			else
				check[sushi[j%n]] = 1;	//ó�� �Ծ�� �ʹ��� ��� üũ

			if (sushi[j%n] == c)	//���� ���� ���� ��
				coupon = 0;
		}

		max_sushi = max(max_sushi, k - flag + coupon);
		memset(check, 0, sizeof(check));
	}

	cout << max_sushi;
	return 0;
}