#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int A[1001] = { 0 }; // ������ ���� �迭 
	int dp[1001] = { 0 };
	for (int i = 0; i < N; i++)
		cin >> A[i];
	dp[0] = 1;
	for (int i = 1; i < N; i++) {
		int location = 0;
		for (int j = 0; j < i; j++) {
			if (A[j] < A[i]) {
				if (location < dp[j]) location = dp[j]; //A[i]�� A[j]���� ũ�ٸ� A[j]�� ������ ���̸� ����.
			}
			dp[i] = location + 1; //location�� �������� �޾Ҵ� ������ ����. +1�� ���� ������ dp[i]�� ������ ����. 
		}
	}
	int max = 0;
	for (int i = 0; i < N; i++) if (max < dp[i]) max = dp[i];
	cout << max;
}

