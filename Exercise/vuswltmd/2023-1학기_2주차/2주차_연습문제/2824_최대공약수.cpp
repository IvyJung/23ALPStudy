#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define INF 1'000'000'000
using namespace std;
bool visited[100000];
vector<int> prime;
int N, M;
map<int, int> a, b;
long long answer = 1;

void make(int num, char ch) {
	if (ch == 'a') {
		for (auto i : prime) {
			if (num % i == 0) {
				a[i]++;
				make(num / i, 'a');
				return;
			}
		}
		if (num != 1) {
			a[num]++;
			cout << "num: " << num;
		}
			
	}
	else if (ch == 'b') {
		for (auto i : prime) {
			if (num % i == 0) {
				b[i]++;
				make(num / i, 'b');
				return;
			}
		}
		if (num != 1)//num�� ����� ������
			b[num]++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	// �����佺�׳׽��� ü
	//(� ���� �Ҽ� ���θ� Ȯ���� ����, Ư���� ������ �����ٱ����� ����� ���θ� �����ϸ� �Ǳ� ������40000 * 40000 >= 1, 000, 000, 000)
	
	for (int i = 2; i < 100000; i++) {
		if (visited[i] == false) {
			visited[i] = true;
			prime.push_back(i);
		}

		for (int j = 2*i; j < 100000; j += i) {
			visited[j] = true;
		}
	}

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		make(num, 'a');
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;

		make(num, 'b');
	}
	bool bigger = false;
	for (auto i : a) {
		if (!b[i.first]) continue;

		int cnt = min(i.second, b[i.first]);

		while (cnt--) {
			answer *= i.first;
			if (answer >= INF) {
				answer %= INF;
				bigger = true;
			}
		}
	}

	if (bigger == true) {
		cout.width(9);
		cout.fill('0');
		cout << answer << "\n";
	}
	else {
		cout << answer;
	}

}

//https://ongveloper.tistory.com/107 �����߽��ϴ�