#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N;
int ministor[100'005];
long long ans = 0;
int index = 1;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ministor[i];
	}

	sort(ministor, ministor + N);

	for (int i = 0; i < N; i++) {
		if (ministor[i] >= index) {
			// 1.. 2.. 3... 4...5....6 �̷������� �Ǿ�� ��ȸ�ǿ��� ���� ���������� ����߸� �� �����Ƿ� 
			ans += ministor[i] - index;
			index++;
		}
	}

	cout << ans;
}
