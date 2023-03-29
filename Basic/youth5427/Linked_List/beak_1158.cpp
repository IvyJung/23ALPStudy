/*

	Day: 2022.03.22	
	���� : queue(ť), ���Լ���

*/

#include <iostream>
#include <queue>

using namespace std;

int main() {

	queue<int> q;

	int N = 0;	// N���� ���

	int K = 0;	// ���� ���� K ��° ����� �����.

	cin >> N >> K;



	for (int i = 1; i < N + 1; i++) q.push(i);	// ��� �� ��ŭ ���� �Է�

	cout << "<";

	while (q.size() != 0) {
		for (int i = 1; i < K; i++) {			// �տ� K�� �ڷ� ����� ����
			q.push(q.front());
			q.pop();
		}

		cout << q.front();						// ����� ��� ���
		q.pop();								// K��° ��� ����
		if (q.size() != 0)
			cout << ", ";
	}
	cout << ">";

	return 0;

}