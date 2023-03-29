#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
//��ġ�� ������ ������ cnt�迭�� ����
using namespace std;

int N;

int arr[100005];
bool cnt[100005]; // ��ġ�� ������ ����

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int st = 0;
	int en = 0;
	long long ans = 0;
	cnt[arr[0]] = 1;
	for (st = 0; st < N; st++) {
		while (en< N - 1 && !cnt[arr[en + 1]]) {
			en++;
			cnt[arr[en]] = 1;
		}
		ans += en - st + 1;
		cnt[arr[st]]= 0;
	}
	cout << ans;
}
