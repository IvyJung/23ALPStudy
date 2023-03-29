#include <bits/stdc++.h>
using namespace std;

int nA, nB;	//�� ���յ��� ������ ����
int cnt; //������ ����
vector<int> A;
vector<int> B;
vector<int> difference;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> nA >> nB;
	for (int i = 0; i < nA; i++) {
		int num;
		cin >> num;
		A.push_back(num);
	}
	sort(A.begin(), A.end());

	for (int i = 0; i < nB; i++) {
		int num;
		cin >> num;
		B.push_back(num);
	}
	sort(B.begin(), B.end());

	for (int i = 0; i < nA; i++) {
		int target = A[i];
		if (binary_search(B.begin(), B.end(), target)) {
			//a�� b�� �� �� ��� ������ true
			continue;
		}
		else {
			cnt++;
			difference.push_back(target);
		}
	}

	if (cnt == 0) {
		cout << "0\n";
	}
	else {
		sort(difference.begin(), difference.end());
		cout << cnt << "\n";
		for (auto d : difference) {
			cout << d << " ";
		}
	}

	return 0;
}