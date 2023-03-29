#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bucket[2][10];
bool used[2][10];
vector<int> ans;

void func(int day, int sum) {
	if (day == 4) {
		ans.push_back(sum);
		return;
	}

	//���� �ٽ������� �պ��ϴ� ��� 2�ϼҺ�, ���� �ٽ����̹Ƿ� ���ϰ� ������ ���� ���� ����
	//���� sum�� ����
	if (day + 2 <= 4) func(day + 2, sum);
		
	int k = 1; // day�� Ȧ���� k = 0
	if (day % 2 == 0)
	{ 
		int k = 0; // day�� Ȧ���� k = 1
	}

	for (int i = 0; i < 10; i++)
		if (used[k][i] == 0) {
			used[k][i] = true;

			if (k == 1) {
				//���� �Լ��� Ȧ����
				func(day + 1, sum + bucket[k][i]);
			}
			else {
				//���� �Լ��� ¦����
				func(day + 1, sum - bucket[k][i]);
			}
			used[k][i] = false;
		}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> bucket[i][j];
		}
	}

	func(0, 0);

	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	cout << ans.size();
	return 0;
}
