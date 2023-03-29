#include<iostream>

using namespace std;
int N;
int dp[41][2];//[0]�̸� 0�� ��//[1]�̸� 1�� ��
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    //�ʱⰪ ����
    dp[0][0] = 1;
    dp[1][1] = 1;
    
    for (int f = 2; f <= 40; f++) {
        dp[f][0] += dp[f - 1][0] + dp[f - 2][0];
        dp[f][1] += dp[f - 1][1] + dp[f - 2][1];
    }
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cout << dp[a][0] << " " << dp[a][1] << endl;
    }
}
