#include <bits/stdc++.h>
using namespace std;

int n;  //���� ī�� ����
int m;	//������ ī�� ����
vector<int> card;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		card.push_back(num);
	}

	sort(card.begin(), card.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int target;
		cin >> target;

		if (binary_search(card.begin(), card.end(), target)) {
			cout << "1\n";
		}
		else
			cout << "0\n";
	}

	return 0;
}