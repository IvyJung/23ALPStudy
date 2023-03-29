#include <bits/stdc++.h>
using namespace std;

string str1, str2;
int d[1005][1005];	//d[i][j]: i,j��° ���������� LCS

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> str1 >> str2;
	
	for (int i = 1; i <= str1.length(); i++) {
		for (int j = 1; j <= str2.length(); j++) {
			if (str1[i - 1] == str2[j - 1])
				d[i][j] = d[i - 1][j - 1] + 1;	//���� ���� ���� 1�� �߰�
				//���������� LCS�� ���̿� +1 : �� ���ڸ� ���ϱ� ���� LCS�� ���̿� +1�ϱ� ����
			else
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
			//���� ���ڰ� ���ԵǾ� �ִ� ���� LCS �� ��, ���� �� ū ���� ���� ��
		}
	}

	cout << d[str1.length()][str2.length()] << "\n";
}