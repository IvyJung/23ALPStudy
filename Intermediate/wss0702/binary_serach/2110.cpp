#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
//������ ��ġ
//parametric search
// ������ C���̸鼭 ������ ������ ������ �Ÿ��� �ִ��� ��
// (����ȭ ����) C���� ���� �� �ִ� ������ ������ ������ �ִ� �Ÿ�
// (���� ����) �������� ���̰� len �� �������� ������ C���ΰ�?
using namespace std;

int N, C;
int arr[200002];

bool solve(int len/*������ ������ ������ �ִ� �Ÿ�*/) {
	int count = 0;// �������� ���� 
	int cur = 0;// 
	while (cur != N) {
		cur = lower_bound(arr + cur, arr + N, arr[cur] + len) - arr;
		// lower_bound�� iterator���� ��ȯ�� ����, �迭�� ù��° �ּҸ� ���� �ε��� ���� ����
		//arr[cur]+len(�Ÿ�)�� �´� ��ǥ�� ���ٸ� lower_bound�� arr[cur]+len�� ���� �� ���������� �Ǵ� ���� �ּҸ� ��ȯ�Ѵ�. �������� ���ٸ� �迭�� ù��° �ּҰ��� ���� N�̵ȴ�.  										
		count++;
	}

	return count >= C;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> C;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	int start = 1;
	int mid;
	int en = 1000000000;
	while (start < en) {
		mid = (start + en + 1) / 2;
		if (solve(mid))
			start = mid;
		else en = mid - 1;
	}
	cout << start;

}
