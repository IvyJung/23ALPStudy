#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
//���� �����ֱ�
// ������ ���̸� ���ؼ� M�� ��ŭ ��ġ�� ���� ã��
//parametric search
// (����ȭ ����) M���� ���� �� �ִ� ������ �ִ� ����
// (���� ����) ������ ���̰� len �� ������ ������ M���ΰ�?
using namespace std;

int M, N;
long long arr[1000005];

bool solve(int len/*������ �ִ� ����*/) {
	
	long long cur = 0;// ������ ����
	for (int i = 0; i < N; i++) cur += arr[i] / len;
	return cur >= M;
	
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	int start = 0;
	int mid;
	int en = arr[N - 1];
	while (start < en) {
		mid = (start + en + 1) / 2;
		if (solve(mid))
			start = mid;
		else en = mid - 1;
	}

	cout << start;

}
